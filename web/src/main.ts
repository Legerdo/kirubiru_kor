import Phaser from 'phaser';
import {createRuntime,type Runtime} from './native-runtime.mjs';
import {OriginalRenderer} from './renderer';
import {OriginalAudio} from './audio';
import {validateSaves} from './save-format.mjs';
import './style.css';

const KEY='kirubiru-web-save-v1';
const VOLUME_KEY='kirubiru-web-volume-v1';
const stage=document.querySelector<HTMLDivElement>('#stage')!;
const loading=document.querySelector<HTMLDivElement>('#loading')!;
const pauseOverlay=document.querySelector<HTMLDivElement>('#pause-overlay')!;
const resumeButton=document.querySelector<HTMLButtonElement>('#resume')!;
const status=document.querySelector<HTMLElement>('#storage-status')!;
let runtime:Runtime,renderer:OriginalRenderer,audio:OriginalAudio,paused=false,accumulator=0;
const volume=document.querySelector<HTMLInputElement>('#volume')!;
const volumeValue=document.querySelector<HTMLOutputElement>('#volume-value')!;
try{const saved=localStorage.getItem(VOLUME_KEY);if(saved!==null&&saved.trim()!==''&&Number.isFinite(Number(saved)))volume.value=String(Math.max(0,Math.min(100,Number(saved))));}catch{}
function updateVolume(){const percent=Number(volume.value);volumeValue.value=`${percent}%`;volume.setAttribute('aria-valuetext',`${percent}%`);audio?.setVolume(percent/100);}
updateVolume();
function saveVolume(){updateVolume();try{localStorage.setItem(VOLUME_KEY,volume.value);}catch{}}
volume.addEventListener('input',saveVolume);
let volumePointer:number|null=null;
volume.addEventListener('pointerdown',e=>{volumePointer=e.pointerId;});
for(const event of ['pointerup','pointercancel'])document.addEventListener(event,e=>{
  if((e as PointerEvent).pointerId===volumePointer){volumePointer=null;stage.focus({preventScroll:true});}
});
let lastSaves='',ready=false,manual=false;
const down=new Set<string>();
const mapping:Record<string,number[]>={ArrowLeft:[2],ArrowRight:[4],ArrowUp:[1,6],ArrowDown:[3,7],KeyZ:[5,9],Enter:[5,9],KeyX:[8],Escape:[10],Tab:[11]};
const sources=new Map<string,Set<number>>();
const pulses=new Set<number>();
function inputSource(source:string,keys:number[],pressed:boolean){
  const old=new Set([...sources.values()].flatMap(s=>[...s]));
  if(pressed)sources.set(source,new Set(keys));else sources.delete(source);
  const active=new Set([...sources.values()].flatMap(s=>[...s]));
  for(const key of active)if(!old.has(key))pulses.add(key);
}
function syncInput(){const active=new Set([...sources.values()].flatMap(s=>[...s]));for(let i=1;i<=11;i++)runtime.input(i,active.has(i)||pulses.has(i));}
function release(){sources.clear();pulses.clear();down.clear();for(let i=1;i<=11;i++)runtime?.input(i,false);}
function setPause(value:boolean){paused=value;accumulator=0;release();audio?.pause(value);pauseOverlay.hidden=!value;const b=document.querySelector('#pause')!;b.textContent=value?'계속하기':'일시정지';b.setAttribute('aria-pressed',String(value));}
async function toggleSound(){if(!ready)return;try{const enabled=await audio.toggle();const b=document.querySelector('#sound')!;b.textContent=enabled?'소리 끄기':'소리 켜기';b.setAttribute('aria-pressed',String(enabled));}catch{status.textContent='오디오를 시작하지 못했습니다.';}}
function persist(){if(!runtime)return;try{const json=JSON.stringify(runtime.saves());if(json!==lastSaves){localStorage.setItem(KEY,json);lastSaves=json;}}catch{status.textContent='브라우저 저장 공간에 쓰지 못했습니다. 저장 파일 내보내기를 이용해 주세요.';}}
async function boot(){
  const manifest=await fetch('manifest.json').then(r=>{if(!r.ok)throw Error('리소스 목록을 읽지 못했습니다.');return r.json();});
  const files=new Map<string,Uint8Array>(await Promise.all(manifest.files.map(async(f:{path:string})=>{const r=await fetch(`assets/${f.path}`);if(!r.ok)throw Error(`원본 리소스 누락: ${f.path}`);return [f.path,new Uint8Array(await r.arrayBuffer())] as const;})));
  const [wasm,image]=await Promise.all(['game.wasm','image.bin'].map(async p=>{const r=await fetch(p);if(!r.ok)throw Error(`${p} 누락`);return new Uint8Array(await r.arrayBuffer());}));files.set('@image',image);
  renderer=new OriginalRenderer(files,manifest.images);audio=new OriginalAudio(files);updateVolume();
  let saves=null;try{const raw=localStorage.getItem(KEY);if(raw)saves=validateSaves(JSON.parse(raw));}catch{status.textContent='저장 데이터가 손상되어 원본 세이브를 불러왔습니다.';}
  runtime=await createRuntime(wasm,files,{blit:renderer.blit,rect:renderer.rect,clear:renderer.clear,palette:renderer.setPalette,text:renderer.text,sound:audio.sound,music:audio.music},saves);
  const hooks=()=>{syncInput();renderer.begin();runtime.step();pulses.clear();renderer.present();};
  class KirubiruScene extends Phaser.Scene {
    private surface!:Phaser.Textures.CanvasTexture;
    create(){this.surface=this.textures.addCanvas('original-frame',renderer.canvas)!;this.add.image(0,0,'original-frame').setOrigin(0);hooks();this.surface.refresh();loading.remove();ready=true;}
    update(_time:number,delta:number){
      if(!ready||paused||manual)return;
      pollGamepad();accumulator+=Math.min(delta,100);
      let ticks=0;while(accumulator>=1000/60&&ticks<6){hooks();accumulator-=1000/60;ticks++;}
      if(ticks)this.surface.refresh();
    }
  }
  new Phaser.Game({type:Phaser.CANVAS,parent:stage,width:640,height:480,backgroundColor:'#000000',pixelArt:true,antialias:false,audio:{noAudio:true},fps:{target:60,smoothStep:false},scale:{mode:Phaser.Scale.FIT,autoCenter:Phaser.Scale.CENTER_BOTH},scene:KirubiruScene});
  Object.assign(window,{kirubiru:{snapshot:()=>runtime.snapshot(),audio:()=>audio.status(),pause:()=>setPause(true),resume:()=>setPause(false),ready:()=>ready,
    // Read-only state plus normal frame/input entry points for deterministic QA.
    manual:(value:boolean)=>{manual=value;},step:(n=1)=>{for(let i=0;i<n;i++)hooks();},input:(key:number,v:boolean)=>inputSource('qa'+key,[key],v),saves:()=>runtime.saves(),
  }});
  document.querySelector('#sound')!.setAttribute('aria-pressed','true');document.querySelector('#sound')!.textContent='소리 끄기';
  setInterval(persist,2000);window.addEventListener('pagehide',persist);
}
function pollGamepad(){
  const pad=navigator.getGamepads?.()[0];if(!pad){inputSource('gamepad',[],false);return;}
  const keys:number[]=[];if(pad.axes[0]<-0.5||pad.buttons[14]?.pressed)keys.push(2);if(pad.axes[0]>0.5||pad.buttons[15]?.pressed)keys.push(4);
  if(pad.axes[1]<-0.5||pad.buttons[12]?.pressed)keys.push(1,6);if(pad.axes[1]>0.5||pad.buttons[13]?.pressed)keys.push(3,7);
  if(pad.buttons[0]?.pressed)keys.push(5,9);if(pad.buttons[1]?.pressed)keys.push(8);inputSource('gamepad',keys,true);
}
document.addEventListener('keydown',e=>{
  if(!ready)return;
  if(paused&&(e.code==='Tab'||(e.target===resumeButton&&['Enter','Space'].includes(e.code))))return;
  if(e.target instanceof HTMLInputElement&&e.target!==volume)return;
  if(!e.ctrlKey&&!e.metaKey&&!e.altKey){
    if(['Minus','Equal','NumpadSubtract','NumpadAdd'].includes(e.code)){
      e.preventDefault();if(e.code==='Minus'||e.code==='NumpadSubtract')volume.stepDown(5);else volume.stepUp(5);
      saveVolume();stage.focus({preventScroll:true});return;
    }
    if(e.code==='KeyM'){e.preventDefault();if(!e.repeat)void toggleSound();stage.focus({preventScroll:true});return;}
  }
  if(e.target instanceof HTMLInputElement){
    if(e.target!==volume||!['KeyZ','Enter','KeyX','KeyP','Escape'].includes(e.code))return;
    stage.focus({preventScroll:true});
  }
  if(e.code==='KeyP'){e.preventDefault();if(!e.repeat)setPause(!paused);return;}
  const keys=mapping[e.code];if(!keys)return;e.preventDefault();if(e.repeat||paused)return;
  down.add(e.code);inputSource(e.code,keys,true);void audio.unlock().catch(()=>{status.textContent='소리 재생을 시작하지 못했습니다.';});
});
document.addEventListener('keyup',e=>{if(mapping[e.code]){e.preventDefault();down.delete(e.code);inputSource(e.code,mapping[e.code],false);}});
document.querySelectorAll<HTMLButtonElement>('[data-keys]').forEach(button=>{
  const keys=button.dataset.keys!.split(',').map(Number);
  button.addEventListener('pointerdown',e=>{e.preventDefault();if(!ready||paused)return;button.setPointerCapture(e.pointerId);inputSource('touch'+e.pointerId,keys,true);void audio.unlock();});
  for(const event of ['pointerup','pointercancel','lostpointercapture'])button.addEventListener(event,e=>{const p=e as PointerEvent;inputSource('touch'+p.pointerId,keys,false);});
});
window.addEventListener('blur',()=>{release();if(ready&&runtime.snapshot().scene!==1)setPause(true);});
document.addEventListener('visibilitychange',()=>{if(document.hidden){release();if(ready)setPause(true);persist();}});
document.querySelector('#pause')!.addEventListener('click',()=>{if(ready)setPause(!paused);});
resumeButton.addEventListener('click',()=>{if(ready&&paused){setPause(false);stage.focus({preventScroll:true});}});
document.querySelector('#sound')!.addEventListener('click',()=>{void toggleSound();});
document.querySelector('#fullscreen')!.addEventListener('click',()=>{if(document.fullscreenElement)void document.exitFullscreen();else void stage.requestFullscreen();});
document.querySelector('#export')!.addEventListener('click',()=>{if(!ready)return;persist();const url=URL.createObjectURL(new Blob([JSON.stringify(runtime.saves())],{type:'application/json'}));const link=document.createElement('a');link.href=url;link.download='kirubiru-web-save.json';link.click();setTimeout(()=>URL.revokeObjectURL(url),1000);});
document.querySelector<HTMLInputElement>('#import')!.addEventListener('change',async e=>{const f=(e.target as HTMLInputElement).files?.[0];if(!f)return;try{if(f.size>24_000_000)throw Error('저장 파일이 너무 큽니다.');const saves=validateSaves(JSON.parse(await f.text()));localStorage.setItem(KEY,JSON.stringify(saves));location.reload();}catch(err){status.textContent=(err as Error).message;}});
void boot().catch(err=>{loading.textContent=`웹 버전을 시작하지 못했습니다. ${err.message}`;console.error(err);});
