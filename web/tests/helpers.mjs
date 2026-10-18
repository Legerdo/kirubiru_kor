import {readFile} from 'node:fs/promises';
import {createRuntime} from '../src/native-runtime.mjs';
const manifest=JSON.parse(await readFile(new URL('../public/manifest.json',import.meta.url),'utf8'));
export const files=new Map(await Promise.all(manifest.files.map(async f=>[f.path,new Uint8Array(await readFile(new URL('../public/assets/'+f.path,import.meta.url)))])));
files.set('@image',new Uint8Array(await readFile(new URL('../public/image.bin',import.meta.url))));
const wasm=await readFile(new URL('../public/game.wasm',import.meta.url));
export const makeRuntime=(saves=null)=>createRuntime(wasm,files,{},saves);
export function tap(r,key){r.input(key,true);r.step();r.input(key,false);r.step();}
export function playReplay(r,number){
 r.step();tap(r,3);tap(r,9);r.step();const mode=number>20?2:number>10?1:0;
 if(mode===1)tap(r,4);if(mode===2)tap(r,2);r.step();
 for(let i=0;i<(number-1)%10+1;i++)tap(r,3);tap(r,9);
}
export function finishReplay(r,limit=60000){let steps=0;while(steps++<limit&&[5,6,7].includes(r.snapshot().scene))r.step();return r.snapshot();}
