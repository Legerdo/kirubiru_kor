import TinySynth from 'webaudio-tinysynth';
const soundNames=['slash','slash2','slash3','select','enter','bougyo','tubure','hakai','move','jump','tyakuti','waza','kaminari','sibire','gorogoro','iwa'];
// Leave headroom for overlapping effects while preserving the MIDI/WAV mix.
const MASTER_GAIN=0.35;
export class OriginalAudio {
  enabled=true;
  private ctx?:AudioContext;
  private master?:GainNode;
  private volume=1;
  private paused=false;
  private resumeMidi=false;
  private musicDirty=false;
  private synth:any;
  private sounds=new Map<number,AudioBuffer>();
  private active=new Set<AudioBufferSourceNode>();
  private pendingMusic:[number,number,number]=[0,0,0];
  private loopStart=0;
  private loopEnd=0;
  private initializing?:Promise<void>;
  constructor(private files:Map<string,Uint8Array>){
    setInterval(()=>{if(this.enabled&&!this.paused&&this.synth?.playing&&this.loopEnd&&this.synth.playTick>=this.loopEnd)this.synth.locateMIDI(this.loopStart);},30);
  }
  async unlock(){
    if(!this.enabled||this.paused)return;
    if(!this.ctx){
      this.ctx=new AudioContext();
      this.master=this.ctx.createGain();this.master.gain.value=this.volume*MASTER_GAIN;this.master.connect(this.ctx.destination);
      this.synth=new TinySynth({internalcontext:0,quality:1,useReverb:0,voices:64});
      this.synth.setAudioContext(this.ctx,this.master);this.synth.setMasterVol(0.35);
      this.initializing=Promise.all(soundNames.map(async(name,id)=>{
        const bytes=this.files.get(`sound/${name}.wav`)!;
        this.sounds.set(id,await this.ctx!.decodeAudioData(bytes.slice().buffer as ArrayBuffer));
      })).then(()=>{this.applyMusic();});
    }
    await this.syncPlayback();await this.initializing;
  }
  async toggle(){this.enabled=!this.enabled;if(this.enabled)await this.unlock();else await this.syncPlayback();return this.enabled;}
  setVolume(value:number){
    if(!Number.isFinite(value))return;
    this.volume=Math.max(0,Math.min(1,value));
    if(this.master)this.master.gain.value=this.enabled&&!this.paused?this.volume*MASTER_GAIN:0;
  }
  sound=(id:number)=>{
    if(!this.enabled||this.paused||!this.ctx||!this.sounds.has(id)||this.ctx.state!=='running')return;
    const source=this.ctx.createBufferSource();source.buffer=this.sounds.get(id)!;const gain=this.ctx.createGain();gain.gain.value=0.6;source.connect(gain).connect(this.master!);
    this.active.add(source);source.onended=()=>this.active.delete(source);source.start();
  };
  music=(action:number,start:number,end:number)=>{
    this.pendingMusic=[action,start,end];this.musicDirty=true;this.applyMusic();
  };
  private applyMusic(){
    if(!this.synth||!this.enabled||this.paused||!this.musicDirty)return;
    const [action,start,end]=this.pendingMusic;
    this.musicDirty=false;this.resumeMidi=false;
    this.synth.stopMIDI();if(!action)return;
    const bytes=this.files.get(action===2?'data/000.mid':'sound/bgm.mid')!;
    this.synth.loadMIDI(bytes.slice().buffer);this.synth.setLoop(1);
    // DirectMusic MUSIC_TIME uses 768 ticks per quarter; these SMFs use 960.
    this.loopStart=start*960/768;this.loopEnd=end*960/768;this.synth.playMIDI();
  }
  private syncPlayback(){
    const active=this.enabled&&!this.paused;
    if(this.master)this.master.gain.value=active?this.volume*MASTER_GAIN:0;
    if(!active){
      // TinySynth.send() can resume a suspended context. Freeze its scheduler too,
      // retaining queued notes/playTime so resume does not restart or skip the song.
      if(this.synth?.playing){this.resumeMidi=true;this.synth.playing=0;}
      return this.ctx?.suspend();
    }
    this.applyMusic();
    if(this.resumeMidi&&this.synth){this.synth.playing=1;this.resumeMidi=false;}
    return this.ctx?.resume();
  }
  pause(paused:boolean){this.paused=paused;void this.syncPlayback();}
  status(){return {enabled:this.enabled,paused:this.paused,volume:this.volume,outputGain:this.master?.gain.value??null,context:this.ctx?.state??'locked',decodedWav:this.sounds.size,midi:this.synth?.getPlayStatus()??null};}
}
