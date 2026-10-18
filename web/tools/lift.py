"""Reproducible native-logic lift. Input is retained static analysis, never a process.

The original 32-bit stack layout and data aliases are retained. Platform calls
are replaced at the DirectDraw / keyboard / audio boundary only.
"""
from pathlib import Path
import json, re, struct
from reconstruction_inputs import load_inputs

ROOT = Path(__file__).resolve().parents[1]
RESEARCH = ROOT / 'research'
OUT = ROOT / 'native'
OUT.mkdir(exist_ok=True)
symbols=json.loads((RESEARCH/'symbols.json').read_text())
named={x['name']:x for x in symbols if int(x['address'],16)>=0x41e000 and not re.match(r'(?:sub|nullsub|dword|word|byte|flt|dbl|qword|unk)_',x['name'])}

def balanced(s, start):
    depth = 0
    for i in range(start, len(s)):
        if s[i] == '(': depth += 1
        elif s[i] == ')':
            depth -= 1
            if depth == 0: return i
    raise ValueError(s[start:start+100])

def argsplit(s):
    depth=0; result=[]; start=0
    for i,c in enumerate(s):
        if c in '([': depth+=1
        elif c in ')]': depth-=1
        elif c==',' and depth==0: result.append(s[start:i].strip());start=i+1
    result.append(s[start:].strip())
    return result

files = [p for p in sorted(RESEARCH.glob('0x*.c')) if int(p.stem,16)<0x410690]
files += [RESEARCH / (hex(a)+'.c') for a in [0x412770,0x412870,0x4128c0,0x412950,0x412970,0x4129b0,0x4129f0,0x412a30]]
skip = {0x40b550,0x40b5f0,0x40bf30,0x40bf50,0x40c050,0x4103d0,0x4103c0,0x410620,0x410660}
bodies=[]; headers=[]; noargs=[]; pairs=[]; offsets=set()
for p in files:
    if int(p.stem,16) in skip: continue
    s=p.read_text(encoding='utf-8')
    if p.stem=='0x402ee0':
        # 402F0D fcom 304.0; 402F18 test ah,41h; jnz 402F2F.
        # Hex-Rays left x87 C0/C3 as undefined locals, losing the floor clamp.
        condition='if ( (v4 | v5) != 0 )'
        if s.count(condition)!=1: raise ValueError('cinematic x87 repair source changed')
        s=s.replace(condition,'if ( !(v2 > 304.0) )')
        s=s.replace('  unsigned __int8 v4; // c0\n','').replace('  unsigned __int8 v5; // c3\n','')
    s=re.sub(r'/\*.*?\*/','',s,flags=re.S)
    # IDA's displayed argument labels are not C syntax.
    s=re.sub(r'\b(?!LABEL_)(?:a\d+|lp\w+|[A-Z]\w*|psz\w+|hdc|h|x|y|c|color|mode):\s*','',s)
    s=re.sub(r'@<[^>]+>','',s)
    s=s.replace('__usercall','').replace('operator new','malloc').replace('operator delete','free')
    s=re.sub(r'\bnullptr\b','NULL',s)
    s=re.sub(r'\b(?:__cdecl|__thiscall|__stdcall)\b','',s)
    h=s[:s.index('{')].strip()
    name=re.search(r'(sub_[0-9A-F]+|nullsub_\d+)',h)[0]
    # All task callbacks share i32(i32), including original void/byte returns.
    params=h[h.index('(')+1:h.rindex(')')]
    if name=='sub_40DF30': params='int ignored'; s=re.sub(r'\ba[1-4]\b','0',s[s.index('{'):]);s=h+'\n'+s
    if not params.strip(): params='int ignored';noargs.append(name)
    if '__int64 a1' in params:
        params=params.replace('__int64 a1','unsigned int pair_lo, int pair_hi');pairs.append(name)
        s=s[:s.index('{')+1]+'\n  __int64 a1 = (unsigned __int64)(unsigned int)pair_hi << 32 | pair_lo;'+s[s.index('{')+1:]
    localnames=set(re.findall(r'\b(?:int|char|float|double|void|_DWORD|_QWORD|FILE|CHAR|HDC|__int64)\s*\**\s*(\w+)\b',s))
    header='int '+name+'('+params+')'
    s=header+'\n'+s[s.index('{'):]
    # Restore aliases among adjacent stack locals (the decompiler splits them).
    stack=[]
    for m in re.finditer(r'^  (.+?); // \[esp[^\n]*\[ebp([+-])([0-9A-F]+)h?\][^\n]*',s,re.M):
        decl,sign,num=m.group(1,2,3)
        if sign=='+': continue
        function_pointer=re.search(r'\(\s*\*\s*(\w+)\s*\)',decl)
        if function_pointer:
            nm=function_pointer[1];ty='int';arr=''
        else:
            mm=re.match(r'(.+?)\s+([A-Za-z_]\w*)(\[\d+\])?$',decl)
            if not mm: continue
            ty,nm,arr=mm.groups()
        stack.append((m.group(0),ty,nm,arr,int(num,16)))
    frame_size=max([x[4] for x in stack]+[0])+32
    defs=[]
    for line,ty,nm,arr,disp in stack:
        s=s.replace(line,'')
        cast=f'(({ty} *)(frame + {frame_size-disp}))'
        defs.append('#define '+nm+' '+(cast if arr else '(*'+cast+')'))
    s=s.replace('{','{\n  _Alignas(16) unsigned char frame['+str(frame_size+1024)+'] = {0};\n'+'\n'.join(defs),1)
    # Replace renderer virtual dispatch with typed browser bridge calls.
    pos=0
    while True:
        st=s.find('(*(',pos)
        if st<0:break
        end=balanced(s,st)
        if end+1>=len(s) or s[end+1]!='(':pos=end+1;continue
        ae=balanced(s,end+1)
        expr=s[st:end+1];args=argsplit(s[end+2:ae])
        off=re.search(r'\+\s*(\d+)\)\)$',expr)
        if not off: raise ValueError((p.name,expr))
        n=int(off[1]);offsets.add(n)
        if n==12:
            if '__fastcall' in expr:args=args[:1]+args[2:]
            replacement='host_blit('+', '.join(args[1:8])+')'
        elif n==28: replacement='host_palette('+', '.join(args[1:2])+')'
        elif n==16: replacement='host_clear('+', '.join(args[1:2])+')'
        elif n==20: replacement='host_rect('+', '.join(args[1:6])+')'
        elif n==68: replacement='host_getdc('+', '.join(args[1:2])+')'
        elif n in [104,40]: replacement='0'
        else: raise ValueError((p.name,n,expr,args))
        s=s[:st]+replacement+s[ae+1:];pos=st+len(replacement)
    s=re.sub(r'\breturn\s*;', 'return 0;', s)
    # A callback return value is ignored by the scheduler, but must be defined.
    s=s.rstrip();end=s.rfind('}');s=s[:end]+'\n  return 0;\n'+s[end:]
    s += '\n'+'\n'.join('#undef '+x[2] for x in stack)+'\n'
    for nm in named.keys()-localnames:
        s=re.sub(r'\b'+re.escape(nm)+r'\b','G_'+nm,s)
    headers.append(header+';');bodies.append((p.name,s))

alltext='\n'.join(s for _,s in bodies)
for name in noargs+['sub_411780']:
    pos=0
    while True:
        m=re.search(r'\b'+name+r'\(',alltext[pos:])
        if not m:break
        st=pos+m.start();op=pos+m.end()-1;en=balanced(alltext,op)
        # Declarations already have one correctly typed dummy parameter.
        if alltext[op+1:en].strip()=='int ignored':pos=en+1;continue
        alltext=alltext[:op+1]+('' if name=='sub_411780' else '0')+alltext[en:];pos=op+3
for name in pairs:
    pos=0
    expected=3 if name in ['sub_4092D0','sub_4093E0','sub_40AFA0'] else 2
    while True:
        m=re.search(r'\b'+name+r'\(',alltext[pos:])
        if not m:break
        op=pos+m.end()-1;en=balanced(alltext,op);args=argsplit(alltext[op+1:en])
        if len(args)==expected-1:
            val=args[0];args=['(unsigned int)('+val+')','(int)((unsigned __int64)('+val+') >> 32)']+args[1:]
            new=', '.join(args);alltext=alltext[:op+1]+new+alltext[en:];pos=op+len(new)+2
        else:pos=en+1
alltext=alltext.replace('sub_40B5E0(0)[19]','((int*)sub_40B5E0(0))[19]').replace('dword_41F6DC[0]','(*(int*)dword_41F6DC)')
alltext=alltext.replace('host_blit(25, 448, 242)','host_blit(25, 448, 242, 100, 100, 0, 0)')
alltext=alltext.replace('host_blit()','host_blit(59, 200, (*(_DWORD *)(a1 + 60) / 4 - 100 < 100 ? *(_DWORD *)(a1 + 60) / 4 - 100 : 100), 100, 100, 0, 0)')
alltext=alltext.replace('void ( *v4)(_DWORD *)','int ( *v4)(_DWORD *)').replace('(void ( *)(_DWORD *))','(int ( *)(_DWORD *))')
alltext=alltext.replace('dword_41F79C()','((int(*)(int))dword_41F79C)(0)')
alltext=alltext.replace('v4(a1: v0)','v4(v0)')
alltext=re.sub(r'\b\d+\b',lambda m:'((int)(image + %d))'%(int(m[0])-0x41c000) if 0x41c000<=int(m[0])<0x4a9700 else m[0],alltext)
# Keep file reads standard C rather than MSVCRT's exposed FILE internals.
start=alltext.index('int sub_408F50(');end=alltext.index('\nint sub_4090C0(',start)
alltext=alltext[:start]+'''int sub_408F50(char *name) {
 FILE *f=fopen(name,"rb"); if(!f)return 0;
 int t[136]={0};t[0]=32;t[7]=(int)sub_4090C0;t[9]=1;
 int task=sub_4128C0(t),first=0,last=0,delay=0;char line[512];
 while(fgets(line,sizeof(line),f)){line[strcspn(line,"\\r\\n")]=0;delay+=45;
  if(!line[0])continue;
  int item=sub_409220(task,line,last?delay:40*(delay/45));if(last)*(_DWORD*)(last+92)=item;else first=item;last=item;
 }fclose(f);*(_DWORD*)(task+32)=first;return task;
}
'''+alltext[end:]

# Retained original initialized image and tables; no parent directory dependency.
raw,code_tables=load_inputs(ROOT)
(OUT/'image.bin').write_bytes(raw)
symbols=json.loads((RESEARCH/'symbols.json').read_text())
sym={x['name']:x for x in symbols}
macros=[];reloc=[]
for addr in [0x405428,0x407974]:
    b=code_tables[addr]
    macros.append('static const unsigned char byte_%X[] = {%s};'%(addr,','.join(map(str,b))))
identifiers=set(re.findall(r'\b[A-Za-z_]\w*\b',alltext))
identifiers|={n[2:] for n in identifiers if n.startswith('G_')}
auto=set(re.findall(r'\b(?:dword|word|byte|qword|flt|dbl|unk)_[0-9A-F]+\b',alltext))
for name in sorted((identifiers&sym.keys())|auto):
    x=sym.get(name);addr=int(x['address'],16) if x else int(name.split('_')[1],16)
    if not 0x41c000<=addr<0x4a9700 or (name in sym and addr<0x41e000 and name not in auto):continue
    typ=x['type'] if x else None
    if name=='dword_41F79C':typ='int'
    if re.search(r'\b'+name+r'\s*\[',alltext):typ=('char[]' if name.startswith('byte_') else 'int[]')
    if typ and '[' in typ:
        base=typ.split('[')[0];expr=f'(({base} *)(image + {addr-0x41c000}))'
    else:
        ty=typ or ('float' if name.startswith('flt_') else 'double' if name.startswith('dbl_') else 'char' if name.startswith('byte_') else 'unsigned short' if name.startswith('word_') else '__int64' if name.startswith('qword_') else 'int')
        expr=f'(*({ty} *)(image + {addr-0x41c000}))'
    macros.append('#define '+('G_'+name if name in named else name)+' '+expr)
for off in range(0,len(raw),4):
    val=struct.unpack_from('<I',raw,off)[0]
    if 0x41c000<=val<0x4a9700:reloc.append((off,val-0x41c000))
(OUT/'globals.h').write_text('\n'.join(macros)+'\n',encoding='utf-8')
(OUT/'prototypes.h').write_text('\n'.join(headers)+'\n',encoding='utf-8')
names=re.findall(r'int (sub_[0-9A-F]+|nullsub_\d+)\(', '\n'.join(headers))
alltext+='\nint web_callback(int ptr){\n'+''.join(f'if(ptr==(int){n})return 0x{n[4:]};\n' for n in names if n.startswith('sub_'))+'return 0;}\n'
(OUT/'logic.c').write_text('// Derived static logic. See tools/lift.py and PORTING.md.\n#include "platform.h"\n#include "globals.h"\n#include "prototypes.h"\n'+alltext,encoding='utf-8')
(OUT/'relocations.h').write_text('\n'.join(f'*(int*)(image+{a})=(int)(image+{b});' for a,b in reloc),encoding='utf-8')
print({'functions':len(bodies),'renderer_offsets':sorted(offsets),'data_pointer_relocations':reloc,'pair_arguments':pairs})
