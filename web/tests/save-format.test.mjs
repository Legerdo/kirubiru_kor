import {test} from 'node:test';
import assert from 'node:assert/strict';
import {validateSaves} from '../src/save-format.mjs';
import {files} from './helpers.mjs';
const original=Object.fromEntries([...files].filter(([n])=>n.startsWith('save/')).map(([n,b])=>[n.slice(5),Array.from(b)]));
test('all supplied original save/replay bytes are admitted unchanged',()=>assert.deepEqual(validateSaves(original),original));
test('path traversal cannot reach the virtual filesystem',()=>assert.throws(()=>validateSaves({...original,'../data/023.txt':[1]})));
test('truncated and oversized replay records are rejected before native code',()=>{
 assert.throws(()=>validateSaves({...original,'replay1.rep':original['replay1.rep'].slice(0,-1)}));
 assert.throws(()=>validateSaves({...original,'replay1.rep':[0,0,0,0,255,255,255,255]}));
});
test('invalid unlock levels and score ranges are rejected',()=>{
 assert.throws(()=>validateSaves({...original,'game.sav':[3,0,0,0]}));
 assert.throws(()=>validateSaves({...original,'score.sav':Array(80).fill(255)}));
});
