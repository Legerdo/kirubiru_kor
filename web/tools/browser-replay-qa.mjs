import assert from 'node:assert/strict';
import {chromium} from 'playwright';
import {mkdir,writeFile} from 'node:fs/promises';
const browser=await chromium.launch({headless:true,executablePath:process.env.KIRUBIRU_CHROMIUM||'C:/Users/K/AppData/Local/ms-playwright/chromium-1243/chrome-win64/chrome.exe'});
const errors=[],checkpoints=[];let cinematicCaptured=false;
await mkdir('test-results',{recursive:true});
try{
 const page=await browser.newPage({viewport:{width:1366,height:768}});
 page.on('pageerror',e=>errors.push(String(e)));page.on('console',m=>{if(m.type()==='error')errors.push(m.text());});
 await page.goto(process.env.KIRUBIRU_URL||'http://127.0.0.1:5298/');await page.waitForFunction(()=>window.kirubiru?.ready());
 const press=async key=>{await page.keyboard.press(key);await page.waitForTimeout(70);};
 await press('ArrowDown');await press('z');
 await page.waitForFunction(()=>window.kirubiru.snapshot().scene===9);
 await press('ArrowRight');await page.waitForFunction(()=>window.kirubiru.snapshot().scene===10);
 await press('ArrowDown');await press('z');
 await page.waitForFunction(()=>window.kirubiru.snapshot().scene===6);
 // Advance the same frame/input/render entry point; no state writes or alternate rules.
 await page.evaluate(()=>window.kirubiru.manual(true));
 let state=await page.evaluate(()=>window.kirubiru.snapshot());
 for(let batch=0;batch<80&&state.scene===6;batch++){
  state=await page.evaluate(()=>{window.kirubiru.step(400);return window.kirubiru.snapshot();});
  if(batch%10===0){checkpoints.push(state);console.log(JSON.stringify({frame:state.frame,stage:state.stage,score:state.score}));}
  if(!cinematicCaptured&&state.stage===5){
   assert.equal(state.player.y,304,'cinematic landing is clamped to the original floor');
   await page.screenshot({path:'test-results/replay11-cinematic-fixed.png'});cinematicCaptured=true;
  }
 }
 assert.equal(state.scene,10);assert.equal(state.stage,9);assert.equal(state.score,32589689);assert.equal(state.maxCombo,75);assert.equal(state.combo,130);
 assert.equal(cinematicCaptured,true);assert.deepEqual(errors,[]);
 await page.evaluate(()=>window.kirubiru.step(2));await page.screenshot({path:'test-results/replay11-result-fixed.png'});
 const report={entry:'title → score table → second act → rank 1 replay',acceleratedNormalFrames:true,final:state,checkpoints,cinematicCaptured,errors};
 await writeFile('test-results/browser-replay-report.json',JSON.stringify(report,null,2));console.log(JSON.stringify({final:state,cinematicCaptured,errors},null,2));
}finally{await browser.close();}
