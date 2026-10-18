import {readFile,writeFile} from 'node:fs/promises';
import {createHash} from 'node:crypto';
import {resolve} from 'node:path';
import {files,makeRuntime,playReplay,finishReplay} from '../tests/helpers.mjs';
const baseline=JSON.parse(await readFile('research/original-manifest.json','utf8')),mutations=[];
const digest=bytes=>createHash('sha256').update(bytes).digest('hex');
const resourcePaths=Object.keys(baseline).filter(path=>path!=='run.exe');
for(const path of resourcePaths){
 try{const bytes=await readFile('public/assets/'+path);if(bytes.length!==baseline[path].bytes||digest(bytes)!==baseline[path].sha256)mutations.push(path);}
 catch{mutations.push(path);}
}
const inputs=JSON.parse(await readFile('research/reconstruction-inputs.json','utf8'));
if(inputs.sourceExecutableSha256!==baseline['run.exe'].sha256)mutations.push('reconstruction source identity');
if(inputs.image.path!=='initial-image.bin'||inputs.image.base!=='0x41c000'||inputs.image.bytes!==0x8d700)throw Error('Unexpected reconstruction layout');
for(const path of ['research/initial-image.bin','public/image.bin']){
 const bytes=await readFile(path);if(bytes.length!==inputs.image.bytes||digest(bytes)!==inputs.image.sha256)mutations.push(path);
}
if(inputs.codeTables.map(t=>t.address).sort().join(',')!=='0x405428,0x407974')throw Error('Unexpected reconstruction tables');
for(const table of inputs.codeTables)if(table.bytes.length!==32||digest(Uint8Array.from(table.bytes))!==table.sha256)mutations.push(table.address);
// Optional preservation audit, explicitly requested when external originals exist.
let originalAudit=null;
if(process.argv.length>2){
 if(process.argv.length!==4||process.argv[2]!=='--original-root')throw Error('Usage: npm run verify -- [--original-root PATH]');
 originalAudit={root:resolve(process.argv[3]),filesChecked:Object.keys(baseline).length,mutations:[]};
 for(const [path,info] of Object.entries(baseline)){
  try{const bytes=await readFile(resolve(originalAudit.root,path));if(bytes.length!==info.bytes||digest(bytes)!==info.sha256)originalAudit.mutations.push(path);}
  catch{originalAudit.mutations.push(path);}
 }
}
const results=[];
for(const number of [1,2,3,11,12,13,14,15,16,17,18,19,21]){
 const mode=number>20?2:number>10?1:0,row=(number-1)%10;
 const data=files.get(['save/score.sav','save/daini_score.sav','save/endless_score.sav'][mode]);const view=new DataView(data.buffer,data.byteOffset,data.byteLength);
 const expected={score:view.getInt32(row*8+4,true),combo:view.getInt32(row*8,true)};
 const r=await makeRuntime();playReplay(r,number);const final=finishReplay(r);
 // Original sub_40FF80 stores dword_41F6A0, not max(current combo, stored max).
 const actual={score:final.score,combo:final.maxCombo};
 const completed=![5,6,7].includes(final.scene);
 results.push({replay:number,expected,actual,completed,match:completed&&actual.score===expected.score&&actual.combo===expected.combo,final});
}
const report={bundledFilesChecked:resourcePaths.length,bundleMutations:mutations,reconstructionInputsChecked:true,originalAudit,matched:results.filter(x=>x.match).length,total:results.length,results};
await writeFile('test-results/parity-report.json',JSON.stringify(report,null,2));
console.log(JSON.stringify({...report,results:undefined,mismatches:results.filter(x=>!x.match).map(({replay,expected,actual})=>({replay,expected,actual}))},null,2));
if(mutations.length||originalAudit?.mutations.length||report.matched!==report.total)process.exitCode=1;
