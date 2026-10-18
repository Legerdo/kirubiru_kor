export function validateSaves(value) {
  if(!value||typeof value!=='object'||Array.isArray(value))throw Error('저장 파일 형식이 올바르지 않습니다.');
  let total=0;
  for(const [name,bytes] of Object.entries(value)){
    if(!/^(game|score|daini_score|endless_score)\.sav$|^replay(?:[1-9]|[12]\d|30)\.rep$/.test(name)||!Array.isArray(bytes)||bytes.some(n=>!Number.isInteger(n)||n<0||n>255))throw Error('올바른 키루비루 저장 데이터만 가져올 수 있습니다.');
    total+=bytes.length;if(total>8_000_000)throw Error('저장 파일이 너무 큽니다.');
    const data=Uint8Array.from(bytes),v=new DataView(data.buffer);
    if(name==='game.sav'&&(bytes.length!==4||v.getUint32(0,true)>2))throw Error('해금 데이터가 올바르지 않습니다.');
    if(name.endsWith('_score.sav')||name==='score.sav'){
      if(bytes.length!==80)throw Error('점수 데이터가 올바르지 않습니다.');
      for(let at=0;at<80;at+=8)if(v.getUint32(at,true)>999||v.getUint32(at+4,true)>99999999)throw Error('점수 범위가 올바르지 않습니다.');
    }
    if(name.endsWith('.rep')){
      if(bytes.length<8)throw Error('리플레이가 손상되었습니다.');
      const n=v.getUint32(4,true);if(n>500_000||bytes.length!==8+n*8)throw Error('리플레이 길이가 올바르지 않습니다.');
      let previous=0;for(let at=8;at<data.length;at+=8){const frame=v.getInt32(at,true),key=data[at+4];if(frame<previous||frame>10_000_000||![2,4,5,6,7,8,9].includes(key))throw Error('리플레이 입력이 올바르지 않습니다.');previous=frame;}
    }
  }
  if(!value['game.sav']||!value['score.sav'])throw Error('기본 저장 파일이 누락되었습니다.');
  return value;
}
