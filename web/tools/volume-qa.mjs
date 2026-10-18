import assert from 'node:assert/strict';
import {chromium} from 'playwright';
import {mkdir,writeFile} from 'node:fs/promises';

const browser=await chromium.launch({headless:true,executablePath:process.env.KIRUBIRU_CHROMIUM||'C:/Users/K/AppData/Local/ms-playwright/chromium-1243/chrome-win64/chrome.exe'});
const url=process.env.KIRUBIRU_URL||'http://127.0.0.1:5298/';
const errors=[];
const observe=page=>{page.on('pageerror',error=>errors.push(String(error)));page.on('console',message=>{if(message.type()==='error')errors.push(message.text());});};
await mkdir('test-results',{recursive:true});
try{
 const page=await browser.newPage({viewport:{width:1100,height:1000}});observe(page);
 // Observe the real Web Audio graph without replacing its nodes or signal processing.
 await page.addInitScript(()=>{
  const connect=AudioNode.prototype.connect;
  AudioNode.prototype.connect=function(destination,...args){
   if(this instanceof GainNode&&destination instanceof AudioDestinationNode)window.__master=this;
   if(destination===window.__master){
    if(this instanceof DynamicsCompressorNode)window.__midiRouted=true;
    if(this instanceof GainNode&&Math.abs(this.gain.value-0.6)<0.0001)window.__wavRouted=true;
   }
   return connect.call(this,destination,...args);
  };
 });
 await page.goto(url);await page.waitForFunction(()=>window.kirubiru?.ready());
 const slider=page.locator('#volume');
 await slider.click();
 assert.equal(await page.evaluate(()=>document.activeElement.id),'stage','pointer adjustment returns focus to the game');
 await slider.focus();await page.keyboard.press('Home');
 await page.keyboard.press('Minus');assert.equal(await slider.inputValue(),'0');
 await page.keyboard.press('Equal');assert.equal(await slider.inputValue(),'5');
 await page.keyboard.press('NumpadAdd');assert.equal(await slider.inputValue(),'10');
 await page.keyboard.press('Minus');await page.keyboard.press('NumpadSubtract');assert.equal(await slider.inputValue(),'0');
 await slider.focus();
 for(let i=0;i<25;i++)await page.keyboard.press('ArrowRight');
 assert.equal(await slider.inputValue(),'25','keyboard can still adjust the slider');
 assert.equal(await page.locator('#volume-value').textContent(),'25%');
 assert.equal((await page.evaluate(()=>window.kirubiru.audio())).volume,0.25);
 // Z must start the game even if the range still owns focus.
 await page.keyboard.press('z');
 await page.waitForFunction(()=>window.kirubiru.snapshot().scene===2);
 assert.equal(await page.evaluate(()=>document.activeElement.id),'stage');
 await page.waitForFunction(()=>window.kirubiru.audio().decodedWav===16&&window.kirubiru.audio().midi?.play===1);
 // The original opening task blocks movement for 180 frames, even with player.state == 0.
 await page.waitForFunction(()=>window.kirubiru.snapshot().frame>=180&&window.kirubiru.snapshot().player.state===0);
 await page.keyboard.press('ArrowLeft');
 await page.waitForFunction(()=>{const p=window.kirubiru.snapshot().player;return p.lane===0&&p.x===136&&p.state===0;});
 await page.keyboard.press('ArrowRight');
 await page.waitForFunction(()=>{const p=window.kirubiru.snapshot().player;return p.lane===1&&p.x===256&&p.state===0;});
 const routing=await page.evaluate(()=>({midi:!!window.__midiRouted,wav:!!window.__wavRouted}));
 assert.deepEqual(routing,{midi:true,wav:true},'MIDI and WAV share the master volume node');
 await slider.focus();await page.keyboard.press('End');
 await page.keyboard.press('Equal');assert.equal(await slider.inputValue(),'100','volume shortcut clamps at 100%');
 const full=await measure(page);
 assert.ok(Math.abs(full.gain-0.35)<0.000001,'100% uses the reduced 0.35 output gain');assert.ok(full.rms>0.00001,'real audio signal exists at 100%');
 await slider.focus();await page.keyboard.press('Home');
 const silent=await measure(page);
 assert.equal(silent.gain,0);assert.equal(silent.rms,0,'0% silences the real output signal');
 for(let i=0;i<25;i++)await page.keyboard.press('ArrowRight');
 const quarter=await measure(page);assert.ok(Math.abs(quarter.gain-0.0875)<0.000001,'25% scales the reduced output gain');
 await page.keyboard.press('m');
 await page.waitForFunction(()=>document.querySelector('#sound').getAttribute('aria-pressed')==='false');
 assert.equal((await page.evaluate(()=>window.kirubiru.audio())).enabled,false);
 await slider.focus();await page.keyboard.press('End');
 assert.equal((await page.evaluate(()=>window.kirubiru.audio())).enabled,false,'volume adjustment preserves mute');
 await page.locator('#sound').click();
 await page.waitForFunction(()=>window.kirubiru.audio().context==='running');
 assert.ok(Math.abs((await page.evaluate(()=>window.kirubiru.audio())).outputGain-0.35)<0.000001);
 await slider.focus();await page.keyboard.press('Home');for(let i=0;i<25;i++)await page.keyboard.press('ArrowRight');
 await page.keyboard.press('p');
 assert.equal(await page.locator('#pause-overlay').isVisible(),true,'pause is visible over the playfield');
 await page.screenshot({path:'test-results/paused.png',fullPage:true});
 const paused=await page.evaluate(()=>window.kirubiru.snapshot().frame);await page.waitForTimeout(100);
 assert.equal(await page.evaluate(()=>window.kirubiru.snapshot().frame),paused,'P works from slider focus');
 const pausedAudio=await page.evaluate(()=>window.kirubiru.audio());
 assert.equal(pausedAudio.midi.play,0,'pause stops the MIDI scheduler');
 assert.equal(pausedAudio.outputGain,0,'pause silences the common output');
 const pausedClock=await page.evaluate(()=>window.__master.context.currentTime);
 await page.waitForTimeout(700);
 assert.equal((await page.evaluate(()=>window.kirubiru.audio())).context,'suspended','MIDI cannot wake the paused context');
 assert.equal(await page.evaluate(()=>window.__master.context.currentTime),pausedClock,'audio clock remains frozen');
 assert.equal((await page.evaluate(()=>window.kirubiru.audio())).midi.curTick,pausedAudio.midi.curTick,'music position stays frozen');
 await slider.focus();await page.keyboard.press('End');
 assert.equal((await page.evaluate(()=>window.kirubiru.audio())).outputGain,0,'volume cannot unmute pause');
 await page.keyboard.press('m');await page.waitForFunction(()=>!window.kirubiru.audio().enabled);
 await page.keyboard.press('m');await page.waitForFunction(()=>window.kirubiru.audio().enabled);
 await page.waitForTimeout(150);
 assert.equal((await page.evaluate(()=>window.kirubiru.audio())).context,'suspended','sound toggle cannot unpause audio');
 await slider.focus();await page.keyboard.press('Home');for(let i=0;i<25;i++)await page.keyboard.press('ArrowRight');
 await page.locator('#resume').click();
 assert.equal(await page.locator('#pause-overlay').isVisible(),false,'resume removes the pause overlay');
 assert.equal(await page.evaluate(()=>document.activeElement.id),'stage','click resume restores keyboard focus');
 await page.waitForFunction(()=>window.kirubiru.audio().context==='running'&&window.kirubiru.audio().midi.play===1);
 assert.ok((await page.evaluate(()=>window.kirubiru.audio())).midi.curTick>=pausedAudio.midi.curTick,'resume keeps the music position');
 assert.ok(Math.abs((await page.evaluate(()=>window.kirubiru.audio())).outputGain-0.0875)<0.000001);
 for(const key of ['Enter','Space']){
  await page.keyboard.press('p');await page.keyboard.press('Tab');
  assert.equal(await page.evaluate(()=>document.activeElement.id),'resume','resume button is keyboard reachable');
  await page.keyboard.press(key);
  assert.equal(await page.locator('#pause-overlay').isVisible(),false,`${key} activates the native resume button`);
  assert.equal(await page.evaluate(()=>document.activeElement.id),'stage');
 }
 await page.screenshot({path:'test-results/volume-desktop.png',fullPage:true});
 await page.reload();await page.waitForFunction(()=>window.kirubiru?.ready());
 const restored=await page.evaluate(()=>({value:document.querySelector('#volume').value,audio:window.kirubiru.audio()}));
 assert.equal(restored.value,'25');assert.equal(restored.audio.volume,0.25);
 const mobile=await browser.newPage({viewport:{width:390,height:844},hasTouch:true});observe(mobile);
 await mobile.goto(url);await mobile.waitForFunction(()=>window.kirubiru?.ready());
 await mobile.locator('#volume').tap();
 assert.equal(await mobile.evaluate(()=>document.activeElement.id),'stage','touch adjustment returns focus to game');
 await mobile.locator('[data-keys="5,9"]').tap();await mobile.waitForFunction(()=>window.kirubiru.snapshot().scene===2);
 await mobile.locator('#pause').tap();
 assert.equal(await mobile.locator('#pause-overlay').isVisible(),true);
 const touchPausedFrame=await mobile.evaluate(()=>window.kirubiru.snapshot().frame);
 await mobile.locator('#resume').tap();
 assert.equal(await mobile.locator('#pause-overlay').isVisible(),false,'touch resumes the paused game');
 await mobile.waitForFunction(frame=>window.kirubiru.snapshot().frame>frame,touchPausedFrame);
 await mobile.waitForFunction(()=>window.kirubiru.audio().context==='running');
 const overflow=await mobile.evaluate(()=>document.documentElement.scrollWidth>innerWidth);
 assert.equal(overflow,false,'toolbar fits a 390px screen');
 await mobile.screenshot({path:'test-results/volume-mobile.png',fullPage:true});
 const report={routing,full,silent,quarter,pausedAudio,audioPauseVerified:true,keyboardVolumeAndMuteVerified:true,pauseOverlayVerified:true,resumeClickTouchKeyboardVerified:true,restored,mobileOverflow:overflow,errors};
 assert.equal(errors.length,0);
 await writeFile('test-results/volume-report.json',JSON.stringify(report,null,2));
 console.log(JSON.stringify(report,null,2));
}finally{await browser.close();}

async function measure(page){
 return page.evaluate(async()=>{
  const master=window.__master;
  if(!window.__volumeAnalyser){window.__volumeAnalyser=master.context.createAnalyser();master.connect(window.__volumeAnalyser);}
  await new Promise(resolve=>setTimeout(resolve,180));
  const data=new Float32Array(window.__volumeAnalyser.fftSize);window.__volumeAnalyser.getFloatTimeDomainData(data);
  return {gain:master.gain.value,rms:Math.sqrt(data.reduce((sum,x)=>sum+x*x,0)/data.length)};
 });
}
