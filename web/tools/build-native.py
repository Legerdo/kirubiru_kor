from pathlib import Path
import subprocess,sys,shutil
root=Path(__file__).resolve().parents[1]
compiler=root/'.tools/ziglang/zig.exe'
if not compiler.exists():
    sys.exit('Compiler missing. Run: python -m pip install --target .tools ziglang==0.13.0')
subprocess.run([sys.executable,str(root/'tools/lift.py')],check=True)
cmd=[str(compiler),'cc','-target','wasm32-wasi','-mexec-model=reactor','-std=gnu11','-O0','-fno-sanitize=all','-fno-strict-aliasing','-fwrapv','-fno-delete-null-pointer-checks','-Wno-everything','-Wno-error=int-conversion','-ferror-limit=0','native/logic.c','-c','-o','native/logic.o']
(root/'public').mkdir(exist_ok=True)
log=[]
for source in ['logic','platform','repairs']:
    args=cmd[:cmd.index('native/logic.c')]+['native/'+source+'.c','-c','-o','native/'+source+'.o']
    r=subprocess.run(args,cwd=root,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True)
    log.append(r.stdout)
    if r.returncode:break
else:
    exports=['web_init','web_step','web_input','web_state','web_data','web_reset','web_seed','web_read','web_write','web_tasks','web_callback']
    args=[str(compiler),'build-exe','-target','wasm32-wasi','-mexec-model=reactor','-lc','native/logic.o','native/platform.o','native/repairs.o']+['--export='+x for x in exports]+['--import-symbols','--stack','2097152','-femit-bin=public/game.wasm']
    r=subprocess.run(args,cwd=root,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True);log.append(r.stdout)
    if not r.returncode:shutil.copy2(root/'native/image.bin',root/'public/image.bin')
(root/'research/build.log').write_text('\n'.join(log),encoding='utf-8')
print('\n'.join(log)[:18000]);sys.exit(r.returncode)
