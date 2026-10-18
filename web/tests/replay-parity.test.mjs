import test from 'node:test';
import assert from 'node:assert/strict';
import {makeRuntime,playReplay,finishReplay} from './helpers.mjs';

test('replay11 cinematic landing stays at or above the original y=304 floor',async()=>{
 const r=await makeRuntime();playReplay(r,11);let checked=0;
 while([5,6,7].includes(r.snapshot().scene)&&r.snapshot().frame<25000){
  const before=r.snapshot(),callback=r.api.web_callback(r.readAt(before.player.ptr,28));
  r.step();
  if(callback===0x402EE0){
   const after=r.snapshot();checked++;
   assert.ok(after.player.y<=304,`frame ${after.frame}: cinematic y ${after.player.y} passed the original floor`);
  }
 }
 assert.ok(checked>100,'the real replay exercised the cinematic callback');
});

test('supplied replay11 reproduces its unchanged saved score and maximum combo',async()=>{
 const r=await makeRuntime();playReplay(r,11);const final=finishReplay(r);
 assert.equal(final.score,32589689);
 assert.equal(final.maxCombo,75,'original persisted maximum, also used by the result screen');
 assert.equal(final.combo,130,'the unbroken final chain is distinct from the original persisted maximum');
 assert.equal(final.stage,9,'the replay finishes the second act instead of dying in stage 6');
});
