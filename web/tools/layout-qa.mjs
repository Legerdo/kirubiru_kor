import assert from 'node:assert/strict';
import {chromium} from 'playwright';
import {mkdir,writeFile} from 'node:fs/promises';
const browser=await chromium.launch({headless:true,executablePath:process.env.KIRUBIRU_CHROMIUM||'C:/Users/K/AppData/Local/ms-playwright/chromium-1243/chrome-win64/chrome.exe'});
const cases=[
 [1920,1080,false],[1366,768,false],[1280,720,false],[1024,600,false],
 [390,844,true],[360,640,true],[320,568,true],[320,480,true],[844,390,true],[667,375,true],[568,320,true],[480,240,true],
];
const results=[],errors=[];await mkdir('test-results',{recursive:true});
try{
 for(const [width,height,hasTouch] of cases){
  const page=await browser.newPage({viewport:{width,height},hasTouch});
  page.on('pageerror',e=>errors.push(String(e)));
  await page.goto(process.env.KIRUBIRU_URL||'http://127.0.0.1:5298/');await page.waitForFunction(()=>window.kirubiru?.ready());
  await page.waitForTimeout(200);
  const closed=await inspect(page);
  await page.mouse.wheel(0,1000);await page.waitForTimeout(80);
  const scrollAfterWheel=await page.evaluate(()=>scrollY);
  if([1366,390,844].includes(width))await page.screenshot({path:`test-results/layout-${width}x${height}.png`});
  await page.locator('summary').click();await page.waitForTimeout(100);
  const opened=await inspect(page);
  await page.mouse.wheel(0,1000);await page.waitForTimeout(80);
  const openScrollAfterWheel=await page.evaluate(()=>scrollY);
  if([1366,390,844].includes(width))await page.screenshot({path:`test-results/layout-${width}x${height}-panel.png`});
  // Keep the same page alive across resize/orientation changes as well as cold starts.
  await page.locator('summary').click();
  await page.keyboard.press('p');
  assert.equal(await page.locator('#pause-overlay').isVisible(),true);
  const pauseFits=await page.evaluate(()=>{
   const r=document.querySelector('#pause-overlay>div').getBoundingClientRect(),s=document.querySelector('#stage').getBoundingClientRect();
   return r.x>=s.x&&r.y>=s.y&&r.right<=s.right+1&&r.bottom<=s.bottom+1;
  });
  assert.equal(pauseFits,true,`${width}x${height}: pause label must fit the playfield`);
  if([1366,390,844].includes(width))await page.screenshot({path:`test-results/layout-${width}x${height}-paused.png`});
  if(hasTouch)await page.locator('#resume').tap();else await page.locator('#resume').click();
  assert.equal(await page.locator('#pause-overlay').isVisible(),false);
  await page.setViewportSize({width:height,height:width});await page.waitForTimeout(300);
  const resized=await inspect(page);
  results.push({width,height,closed,opened,scrollAfterWheel,openScrollAfterWheel,resized});await page.close();
 }
 await writeFile('test-results/layout-report.json',JSON.stringify({results,errors},null,2));
 for(const row of results){
  const label=`${row.width}x${row.height}`;
  assert.equal(row.scrollAfterWheel,0,`${label}: mouse wheel must not scroll the page`);
  assert.equal(row.openScrollAfterWheel,0,`${label}: opened panel must not scroll the page`);
  for(const [name,state] of [['closed',row.closed],['opened',row.opened]]){
   assert.ok(state.documentHeight<=row.height,`${label} ${name}: page height ${state.documentHeight}`);
   assert.ok(state.documentWidth<=row.width,`${label} ${name}: horizontal overflow`);
   assert.deepEqual(state.clipped,[],`${label} ${name}: clipped interactive UI`);
   assert.ok(state.canvasVisible,`${label} ${name}: canvas must fit the playfield at 4:3`);
   assert.equal(state.panelScrollable,false,`${label} ${name}: panel content must fit without scrolling`);
   assert.equal(state.hintsVisible,true,`${label} ${name}: all controls must remain readable outside the playfield`);
  }
  assert.ok(row.resized.documentHeight<=row.width&&row.resized.documentWidth<=row.height,`${label}: overflow after resize`);
  assert.ok(row.resized.canvasVisible,`${label}: canvas must fit after resize`);
  assert.deepEqual(row.resized.clipped,[],`${label}: controls must fit after resize`);
  assert.equal(row.resized.hintsVisible,true,`${label}: control hints must fit after resize`);
 }
 assert.equal(errors.length,0);console.log(JSON.stringify({viewports:results.length,states:results.length*2,scrolling:0,clippedControls:0,alwaysVisibleHints:9,pauseLabelsFit:true,errors},null,2));
}finally{await browser.close();}

async function inspect(page){
 return page.evaluate(()=>{
  const clipped=[];
  for(const element of document.querySelectorAll('header button,header input,summary,details[open] button,details[open] .file,#touch button')){
   const r=element.getBoundingClientRect();if(!r.width||!r.height)continue;
   if(r.x<0||r.y<0||r.right>innerWidth+1||r.bottom>innerHeight+1)clipped.push(element.id||element.textContent.trim());
  }
  const s=document.querySelector('#stage').getBoundingClientRect(),c=document.querySelector('#stage canvas').getBoundingClientRect();
  const panel=document.querySelector('details[open] .storage-panel');
  const hints=[...document.querySelectorAll('.controls span')].map(e=>e.getBoundingClientRect());
  const hintsVisible=hints.length===9&&hints.every(r=>r.width>0&&r.height>0&&r.x>=0&&r.y>=0&&r.right<=innerWidth+1&&r.bottom<=innerHeight+1&&!(r.x<c.right&&r.right>c.x&&r.y<c.bottom&&r.bottom>c.y));
  return {documentHeight:Math.max(document.documentElement.scrollHeight,document.body.scrollHeight),documentWidth:document.documentElement.scrollWidth,clipped,panelScrollable:!!panel&&panel.scrollHeight>panel.clientHeight,
   hintsVisible,
   canvasVisible:c.width>100&&c.height>75&&Math.abs(c.width/c.height-4/3)<0.01&&c.x>=s.x-2&&c.y>=s.y-2&&c.right<=s.right+2&&c.bottom<=s.bottom+2};
 });
}
