import {test} from 'node:test';
import assert from 'node:assert/strict';
import {makeRuntime,tap,playReplay,finishReplay} from './helpers.mjs';
test('original menu enters all three unlocked modes through keyboard input',async()=>{
 for(const mode of [0,1,2]){const r=await makeRuntime();r.step();for(let i=0;i<mode;i++)tap(r,4);tap(r,9);assert.equal(r.snapshot().mode,mode);assert.equal(r.snapshot().player.life,3);}
});
test('three lanes, jump, and guard use native player state',async()=>{
 const r=await makeRuntime();r.step();tap(r,9);r.step(180);
 tap(r,2);r.step(35);assert.equal(r.snapshot().player.lane,0);
 tap(r,4);r.step(35);assert.equal(r.snapshot().player.lane,1);
 // Use a fresh, unpinned player for jump; a crushed player cannot jump in the original.
 const jumping=await makeRuntime();jumping.step();tap(jumping,9);jumping.step(165);
 // Native jump includes the original ten-frame anticipation animation.
 jumping.input(6,true);jumping.step(15);jumping.input(6,false);assert.ok(jumping.snapshot().player.y<304);
 jumping.input(7,true);jumping.step(20);jumping.input(7,false);assert.ok(jumping.snapshot().player.guard<100);
});
test('native game records a replay which reproduces its own score and combo',async()=>{
 const r=await makeRuntime();r.step();tap(r,9);
 for(let frame=0;frame<4000&&r.snapshot().scene===2;frame++){
  r.input(5,frame%6<1);r.input(9,frame%6<1);r.input(6,frame%90<18);r.input(8,r.snapshot().special>=300);r.step();
 }
 for(const k of [5,9,6,8])r.input(k,false);
 for(let i=0;i<10000&&r.snapshot().scene===2;i++)r.step();
 const recorded=r.snapshot();assert.equal(recorded.scene,8);assert.ok(recorded.score>0);
 const saves=r.saves(),score=new DataView(Uint8Array.from(saves['score.sav']).buffer);
 let rank=0;for(let i=0;i<10;i++)if(score.getInt32(i*8+4,true)===recorded.score&&score.getInt32(i*8,true)===recorded.maxCombo){rank=i+1;break;}
 assert.ok(rank>0);const playback=await makeRuntime(saves);playReplay(playback,rank);const final=finishReplay(playback);
 assert.equal(final.score,recorded.score);assert.equal(final.maxCombo,recorded.maxCombo);
});
