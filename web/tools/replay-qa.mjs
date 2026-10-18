import { readFile, writeFile } from 'node:fs/promises';
import { createRuntime } from '../src/native-runtime.mjs';
const manifest=JSON.parse(await readFile('public/manifest.json','utf8'));
const files=new Map(await Promise.all(manifest.files.map(async f=>[f.path,new Uint8Array(await readFile('public/assets/'+f.path))])));
files.set('@image',new Uint8Array(await readFile('public/image.bin')));
const wasm=await readFile('public/game.wasm');
const results=[];
for(const replay of [3,2,11,12,13,14,15,16,17,18,19,21,1]){
 const r=await createRuntime(wasm,files,{log:console.log});
 const tap=k=>{r.input(k,true);r.step();r.input(k,false);r.step();};
 r.step();tap(3);tap(9);r.step();
 const mode=replay>20?2:replay>10?1:0;
 if(mode===1)tap(4);if(mode===2)tap(2);
 r.step();
 const row=(replay-1)%10+1;
 for(let i=0;i<row;i++)tap(3);
 tap(9);
 const data=files.get(`save/replay${replay}.rep`),v=new DataView(data.buffer,data.byteOffset,data.byteLength);
 let maxFrame=0;for(let i=8;i<data.length;i+=8)maxFrame=Math.max(maxFrame,v.getInt32(i,true));
 const initial=r.snapshot();let steps=0,error=null,previous=initial;const transitions=[];
 try{while(steps<maxFrame+10000&&r.snapshot().scene>=5&&r.snapshot().scene<=7){r.step();steps++;const s=r.snapshot();if(s.stage!==previous.stage)transitions.push({before:previous,after:s});previous=s;}}
 catch(e){error=String(e);}
 const scorefile=files.get(mode===0?'save/score.sav':mode===1?'save/daini_score.sav':'save/endless_score.sav'),sv=new DataView(scorefile.buffer,scorefile.byteOffset,scorefile.byteLength);
 const expected={combo:sv.getInt32((row-1)*8,true),score:sv.getInt32((row-1)*8+4,true)};
 const final=r.snapshot();const entry={replay,mode,row,maxFrame,steps,expected,initial,transitions,final,error};results.push(entry);
 console.log(JSON.stringify({replay,steps,maxFrame,expected,scene:final.scene,stage:final.stage,score:final.score,combo:final.combo,maxCombo:final.maxCombo,error}));
}
await writeFile('test-results/replay-report.json',JSON.stringify(results,null,2));
