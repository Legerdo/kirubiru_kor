import { readFile,writeFile } from 'node:fs/promises';
import { createRuntime } from '../src/native-runtime.mjs';
const manifest=JSON.parse(await readFile('public/manifest.json','utf8'));
const files=new Map(await Promise.all(manifest.files.map(async f=>[f.path,new Uint8Array(await readFile('public/assets/'+f.path))])));files.set('@image',new Uint8Array(await readFile('public/image.bin')));
const r=await createRuntime(await readFile('public/game.wasm'),files);
const tap=k=>{r.input(k,true);r.step();r.input(k,false);r.step();};
r.step();tap(3);tap(9);r.step();tap(4);r.step();tap(3);tap(3);tap(9);
const rows=[];
for(let i=0;i<10000;i++){
 r.step();const s=r.snapshot();if(i%100===0)rows.push({...s,camera:r.read(0x41f690)});
}
let task=r.readAt(r.read(0x4a95e0),20),end=r.read(0x4a95e4);const tasks=[];
while(task!==end&&tasks.length<1024){let v=Array.from({length:25},(_,i)=>r.readAt(task,i*4));tasks.push({ptr:task,callback:r.api.web_callback(v[7]).toString(16),data:v});task=v[5];}
console.log(JSON.stringify({state:r.snapshot(),camera:r.read(0x41f690),tasks},null,2));await writeFile('test-results/replay12-trace.json',JSON.stringify(rows,null,2));
