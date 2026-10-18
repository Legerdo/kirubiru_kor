import { readFile } from 'node:fs/promises';
import { createRuntime } from '../src/native-runtime.mjs';
const manifest=JSON.parse(await readFile('public/manifest.json','utf8'));
const files=new Map(await Promise.all(manifest.files.map(async f=>[f.path,new Uint8Array(await readFile('public/assets/'+f.path))])));
files.set('@image',new Uint8Array(await readFile('public/image.bin')));
const hooks={blit:(...a)=>{if(a.some(x=>!Number.isFinite(x)))throw Error('Invalid blit');},log:console.log};
const r=await createRuntime(await readFile('public/game.wasm'),files,hooks);
r.step();console.log('title',r.snapshot());
for(const k of [5,9])r.input(k,true);r.step();for(const k of [5,9])r.input(k,false);
r.step(120);console.log('started',r.snapshot());
for(let i=0;i<1800;i++){
 r.input(5,i%6===0);r.input(9,i%6===0);r.input(1,i%60===0);r.input(6,i%60===0);
 r.step();
 if(i%300===0)console.log('game',r.snapshot());
}
console.log('final',r.snapshot());
