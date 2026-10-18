import { chromium } from 'playwright';
import { mkdir, writeFile } from 'node:fs/promises';
const browser=await chromium.launch({headless:true,executablePath:process.env.KIRUBIRU_CHROMIUM||'C:/Users/K/AppData/Local/ms-playwright/chromium-1243/chrome-win64/chrome.exe'});
const page=await browser.newPage({viewport:{width:1100,height:1000},hasTouch:true});
const errors=[];page.on('pageerror',e=>errors.push(String(e)));page.on('console',m=>{if(m.type()==='error')errors.push(m.text());});
async function keyPixels(y,height){
 return page.evaluate(({y,height})=>{
  const canvas=document.querySelector('#stage canvas');
  const pixels=canvas.getContext('2d').getImageData(0,y,canvas.width,height).data;
  let count=0;for(let i=0;i<pixels.length;i+=4)if(pixels[i]>=247&&pixels[i+1]<=8&&pixels[i+2]>=247)count++;
  return count;
 },{y,height});
}
await mkdir('test-results',{recursive:true});
try{
 await page.goto(process.env.KIRUBIRU_URL||'http://127.0.0.1:5298/');await page.waitForFunction(()=>window.kirubiru?.ready(),null,{timeout:30000});
 await page.screenshot({path:'test-results/title.png',fullPage:true});
 const titleKeyPixels=await keyPixels(0,480);
 if(titleKeyPixels)throw Error(`Title contains ${titleKeyPixels} visible magenta key pixels`);
 await page.keyboard.press('z');await page.waitForTimeout(8000);
 const before=await page.evaluate(()=>window.kirubiru.snapshot());
 if(before.scene!==2)throw Error('Keyboard start did not enter act one');
 await page.keyboard.down('ArrowUp');await page.waitForTimeout(400);await page.keyboard.up('ArrowUp');
 for(let i=0;i<18;i++){await page.keyboard.press('z');await page.waitForTimeout(90);}
 await page.screenshot({path:'test-results/play.png',fullPage:true});
 const scoreKeyPixels=await keyPixels(432,48);
 if(scoreKeyPixels)throw Error(`Score HUD contains ${scoreKeyPixels} visible magenta key pixels`);
 const transparency={titleKeyPixels,scoreKeyPixels};
 const play=await page.evaluate(()=>({state:window.kirubiru.snapshot(),audio:window.kirubiru.audio()}));
 await page.keyboard.press('p');const paused=await page.evaluate(()=>window.kirubiru.snapshot());await page.waitForTimeout(400);const afterPause=await page.evaluate(()=>window.kirubiru.snapshot());
 if(paused.frame!==afterPause.frame)throw Error('Pause advanced simulation');
 await page.keyboard.press('p');await page.keyboard.press('Escape');await page.waitForTimeout(80);
 await page.keyboard.press('ArrowRight');await page.waitForTimeout(80);await page.keyboard.press('z');await page.waitForTimeout(3500);
 await page.screenshot({path:'test-results/act-two.png',fullPage:true});
 const second=await page.evaluate(()=>window.kirubiru.snapshot());
 if(second.scene!==3||second.mode!==1)throw Error('Act two selection failed');
 await page.setViewportSize({width:390,height:844});await page.waitForTimeout(200);await page.screenshot({path:'test-results/mobile.png',fullPage:true});
 await page.keyboard.press('Escape');await page.waitForTimeout(60);await page.locator('[data-keys="4"]').tap();await page.waitForTimeout(60);await page.locator('[data-keys="5,9"]').tap();await page.waitForTimeout(200);
 const touch=await page.evaluate(()=>window.kirubiru.snapshot());if(touch.mode!==2||touch.scene!==4)throw Error('Touch start did not enter endless mode');
 await page.waitForTimeout(2100);const storage=await page.evaluate(()=>localStorage.getItem('kirubiru-web-save-v1'));if(!storage)throw Error('Save persistence missing');
 await writeFile('test-results/browser-report.json',JSON.stringify({before,play,paused,afterPause,second,touch,persistedBytes:storage.length,transparency,errors},null,2));
 console.log(JSON.stringify({before,play,second,touch,persistedBytes:storage.length,transparency,errors},null,2));
 if(errors.length)throw Error('Browser errors');
}finally{await browser.close();}
