type Bitmap = {width:number;height:number;pixels:Uint8Array};

/** Native BMPs share game.pal; RGB menu assets are mapped to that same palette. */
export class OriginalRenderer {
  readonly canvas=document.createElement('canvas');
  readonly context:CanvasRenderingContext2D;
  readonly frame=new Uint8Array(640*480);
  readonly rgba=new ImageData(640,480);
  readonly textures=new Map<number,Bitmap>();
  readonly base:Uint8Array;
  palette:Uint8Array;
  private colors=new Map<number,number>();
  private textLines:{x:number;y:number;text:string;color:number}[]=[];
  private decoder=new TextDecoder('euc-kr');
  blits=0;
  constructor(files:Map<string,Uint8Array>,images:Record<string,string>) {
    this.canvas.width=640;this.canvas.height=480;
    this.context=this.canvas.getContext('2d',{alpha:false})!;
    this.base=files.get('image/game.pal')!.slice(54,1078);this.palette=this.base.slice();
    for(const [id,path] of Object.entries(images))this.textures.set(Number(id),this.decode(files.get(path)!));
  }
  private nearest(r:number,g:number,b:number) {
    const rgb=(r<<16)|(g<<8)|b;const hit=this.colors.get(rgb);if(hit!==undefined)return hit;
    let dist=Infinity,best=0;
    for(let i=0;i<256;i++){const at=i*4,d=(r-this.base[at+2])**2+(g-this.base[at+1])**2+(b-this.base[at])**2;if(d<dist){dist=d;best=i;if(!d)break;}}
    this.colors.set(rgb,best);return best;
  }
  private textureColor(r:number,g:number,b:number) {
    // Original icon background is (248,8,248); score separators are (254,2,254).
    // Normalize these near-key colors before palette lookup. Other pink detail stays opaque.
    if(r>=247&&g<=8&&b>=247)return 0;
    return this.nearest(r,g,b);
  }
  private decode(bytes:Uint8Array):Bitmap {
    const v=new DataView(bytes.buffer,bytes.byteOffset,bytes.byteLength);
    if(v.getUint16(0,true)!==0x4d42)throw Error('원본 BMP 형식이 아닙니다.');
    const width=v.getInt32(18,true),signedHeight=v.getInt32(22,true),height=Math.abs(signedHeight),bits=v.getUint16(28,true),offset=v.getUint32(10,true);
    const compression=v.getUint32(30,true);
    if(![8,16,24,32].includes(bits)||![0,3].includes(compression))throw Error(`지원하지 않는 BMP: ${bits} bit`);
    const stride=Math.ceil(width*bits/32)*4,pixels=new Uint8Array(width*height),mapping=new Uint8Array(256);
    if(bits===8){const paletteOffset=14+v.getUint32(14,true);for(let i=0;i<256;i++){const at=paletteOffset+i*4;mapping[i]=this.textureColor(bytes[at+2],bytes[at+1],bytes[at]);}}
    for(let y=0;y<height;y++){const row=offset+(signedHeight>0?height-1-y:y)*stride;for(let x=0;x<width;x++){
      const at=row+x*bits/8;
      if(bits===8)pixels[y*width+x]=mapping[bytes[at]];
      else if(bits===16){const rgb=v.getUint16(at,true);pixels[y*width+x]=this.textureColor(Math.round(((rgb>>>10)&31)*255/31),Math.round(((rgb>>>5)&31)*255/31),Math.round((rgb&31)*255/31));}
      else pixels[y*width+x]=this.textureColor(bytes[at+2],bytes[at+1],bytes[at]);
    }}
    return {width,height,pixels};
  }
  begin(){this.textLines=[];this.blits=0;}
  blit=(id:number,x:number,y:number,w:number,h:number,sx:number,sy:number)=>{
    const t=this.textures.get(id);if(!t)throw Error(`원본 텍스처 ID ${id} 누락`);this.blits++;
    x|=0;y|=0;w|=0;h|=0;sx|=0;sy|=0;
    const left=Math.max(0,-x,-sx),top=Math.max(0,-y,-sy),right=Math.min(w,640-x,t.width-sx),bottom=Math.min(h,480-y,t.height-sy);
    for(let yy=top;yy<bottom;yy++){
      let a=(sy+yy)*t.width+sx+left,b=(y+yy)*640+x+left;
      for(let xx=left;xx<right;xx++,a++,b++){const c=t.pixels[a];if(c)this.frame[b]=c;}
    }
  };
  rect=(x:number,y:number,w:number,h:number,color:number)=>{
    const c=this.nearest(color&255,(color>>>8)&255,(color>>>16)&255),left=Math.max(0,x|0),right=Math.min(640,(x+w)|0);
    if(right<=left)return;
    for(let yy=Math.max(0,y|0);yy<Math.min(480,(y+h)|0);yy++)this.frame.fill(c,yy*640+left,yy*640+right);
  };
  clear=(color:number)=>{this.rect(0,0,640,480,color);};
  setPalette=(bytes:Uint8Array)=>{this.palette=bytes;};
  text=(x:number,y:number,bytes:Uint8Array,color:number)=>{this.textLines.push({x,y,text:this.decoder.decode(bytes),color});};
  present(){
    const out=this.rgba.data,pal=this.palette;
    for(let i=0;i<this.frame.length;i++){const c=this.frame[i]*4,j=i*4;out[j]=pal[c+2];out[j+1]=pal[c+1];out[j+2]=pal[c];out[j+3]=255;}
    this.context.putImageData(this.rgba,0,0);
    this.context.textBaseline='top';this.context.font='28px Batang, "Noto Serif KR", serif';
    for(const {x,y,text,color} of this.textLines){this.context.fillStyle=`rgb(${color&255},${color>>>8&255},${color>>>16&255})`;this.context.fillText(text,x,y);}
  }
}
