import test from 'node:test';
import assert from 'node:assert/strict';
import {readFile} from 'node:fs/promises';
import {OriginalRenderer} from '../src/renderer.ts';

// The pixel compositor is tested directly; browser QA covers the real canvas.
globalThis.document={createElement:()=>({getContext:()=>({})})};
globalThis.ImageData=class {constructor(w,h){this.data=new Uint8ClampedArray(w*h*4);}};
const images={2:'image/score.bmp',7:'image/bougyo.bmp',16:'image/icon.bmp'};
const files=new Map(await Promise.all(['image/game.pal',...Object.values(images)].map(async path=>
  [path,new Uint8Array(await readFile(new URL('../public/assets/'+path,import.meta.url)))])));

function sourcePixels(path,index){
  const bytes=files.get(path),view=new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength);
  const width=view.getInt32(18,true),height=view.getInt32(22,true),offset=view.getUint32(10,true);
  const stride=Math.ceil(width/4)*4,positions=[];
  for(let y=0;y<height;y++)for(let x=0;x<width;x++)
    if(bytes[offset+(height-1-y)*stride+x]===index)positions.push([x,y]);
  return positions;
}

test('title sword background leaves the underlying title pixels visible',()=>{
  const renderer=new OriginalRenderer(files,images);
  renderer.frame.fill(170);
  renderer.blit(16,10,20,84,66,0,0);
  const background=sourcePixels('image/icon.bmp',5);
  assert.equal(background.length,5000);
  for(const [x,y] of background)
    assert.equal(renderer.frame[(20+y)*640+10+x],170,`sword background at ${x},${y}`);
});

test('all ten score digits leave their pink separator pixels transparent',()=>{
  const renderer=new OriginalRenderer(files,images);
  renderer.frame.fill(170);
  for(let digit=0;digit<10;digit++)renderer.blit(2,digit*38,0,38,48,digit*38,0);
  const separators=sourcePixels('image/score.bmp',11);
  assert.equal(separators.length,383);
  for(const [x,y] of separators)
    assert.equal(renderer.frame[y*640+x],170,`score separator at ${x},${y}`);
});

test('foreground, colored pink detail, and RGB555 transparency are preserved',()=>{
  const renderer=new OriginalRenderer(files,images);
  renderer.frame.fill(170);
  renderer.blit(16,0,0,84,66,0,0);
  for(const index of [6,7,159])for(const [x,y] of sourcePixels('image/icon.bmp',index))
    assert.notEqual(renderer.frame[y*640+x],170,`visible icon color ${index} at ${x},${y}`);
  renderer.frame.fill(170);
  renderer.blit(7,0,0,160,48,0,0);
  assert.equal(renderer.frame[0],170,'existing 16-bit magenta key');
  assert.ok(renderer.frame.some(value=>value!==170),'16-bit defense artwork remains visible');
});
