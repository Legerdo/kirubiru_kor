from pathlib import Path
import json,re,hashlib
from reconstruction_inputs import load_inputs
root=Path(__file__).resolve().parents[1]
out=root/'public/assets'
baseline=json.loads((root/'research/original-manifest.json').read_text(encoding='utf-8'))
manifest=[]
for path,info in baseline.items():
    if path=='run.exe':continue
    data=(out/path).read_bytes()
    if len(data)!=info['bytes'] or hashlib.sha256(data).hexdigest()!=info['sha256']:
        raise ValueError('Bundled original resource changed: '+path)
    manifest.append({'path':path,'bytes':info['bytes'],'sha256':info['sha256']})
init=(root/'research/0x40b5f0.c').read_text(encoding='utf-8')
symbols=json.loads((root/'research/symbols.json').read_text(encoding='utf-8'))
data,_=load_inputs(root)
names={s['name']:data[int(s['address'],16)-0x41c000:].split(b'\0')[0].decode('ascii',errors='replace') for s in symbols if 0x41e000<=int(s['address'],16)<0x41e714}
images={}
for m in re.finditer(r'sub_4114F0\(a1: (\d+), lpFileName: (\w+)',init):images[m[1]]=names[m[2]]
images['0']='image/char.bmp'
(root/'src').mkdir(exist_ok=True)
(root/'public/manifest.json').write_text(json.dumps({'files':manifest,'images':images},indent=2),encoding='utf-8')
(root/'public/image.bin').write_bytes(data)
print(f'Validated {len(manifest)} bundled original files, mapped {len(images)} texture IDs. No external originals required.')
