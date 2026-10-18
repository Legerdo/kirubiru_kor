import { WASI, File, Directory, OpenFile, PreopenDirectory, ConsoleStdout } from '@bjorn3/browser_wasi_shim';

/** The WASI filesystem contains copies of supplied assets, never host paths. */
export async function createRuntime(wasmBytes, originalFiles, hooks = {}, savedFiles = null) {
  const folders = new Map(['image','data','sound','save'].map(name => [name, new Directory([])]));
  for (const [path, bytes] of originalFiles) {
    const [folder, name] = path.split('/');
    folders.get(folder)?.contents.set(name, new File(bytes.slice(), { readonly: folder !== 'save' }));
  }
  const saves = folders.get('save');
  if (savedFiles) {
    saves.contents.clear();
    for (const [name, bytes] of Object.entries(savedFiles)) saves.contents.set(name, new File(Uint8Array.from(bytes)));
  }
  const root = new PreopenDirectory('.', folders);
  const wasi = new WASI(['kirubiru-web'], [], [
    new OpenFile(new File([])),
    ConsoleStdout.lineBuffered(msg => hooks.log?.(msg)),
    ConsoleStdout.lineBuffered(msg => hooks.log?.(msg)), root,
  ]);
  let instance;
  const memory = () => new Uint8Array(instance.exports.memory.buffer);
  const str = (ptr, len) => {
    const mem = memory();
    if (len === undefined) { let end = ptr; while (mem[end] && end < mem.length) end++; return mem.slice(ptr,end); }
    return mem.slice(ptr,ptr+len);
  };
  // This shim version omits rename. Implement only sandboxed, same-directory save rotation.
  wasi.wasiImport.path_rename = (oldFd, oldPtr, oldLen, newFd, newPtr, newLen) => {
    if (oldFd !== 3 || newFd !== 3) return 76;
    const decode = (p,n) => new TextDecoder().decode(str(p,n));
    const a = decode(oldPtr,oldLen), b = decode(newPtr,newLen);
    if (!/^save\/[\w.-]+$/.test(a) || !/^save\/[\w.-]+$/.test(b)) return 76;
    const oldName=a.slice(5),newName=b.slice(5), file=saves.contents.get(oldName);
    if (!file) return 44;
    saves.contents.set(newName,file);saves.contents.delete(oldName);return 0;
  };
  const game = {
    host_blit: (...a) => { hooks.blit?.(...a); return 1; },
    host_rect: (...a) => { hooks.rect?.(...a); return 1; },
    host_clear: color => { hooks.clear?.(color); return 1; },
    host_palette: ptr => { hooks.palette?.(str(ptr,1024)); return 1; },
    host_getdc: ptr => { new DataView(instance.exports.memory.buffer).setInt32(ptr,1,true); return 1; },
    host_sound: id => { hooks.sound?.(id); return 1; },
    host_music: (...a) => { hooks.music?.(...a); return 1; },
    host_text: (x,y,ptr,len,color) => { hooks.text?.(x,y,str(ptr,len),color); return 1; },
    host_read_file: (ptr,out,size) => {
      const path = new TextDecoder().decode(str(ptr));const file=originalFiles.get(path);
      if (!file || file.length>size) return -1;
      memory().set(file,out);return file.length;
    },
  };
  const mod = await WebAssembly.compile(wasmBytes);
  const imports = WebAssembly.Module.imports(mod);
  for (const i of imports) if (!['game','wasi_snapshot_preview1'].includes(i.module) || !(i.name in (i.module==='game'?game:wasi.wasiImport))) throw Error(`Unimplemented native boundary: ${i.module}.${i.name}`);
  instance = await WebAssembly.instantiate(mod, { game, wasi_snapshot_preview1: wasi.wasiImport });
  wasi.initialize(instance);
  const api=instance.exports;
  memory().set(originalFiles.get('@image'),api.web_data());
  api.web_init();
  return {
    api, instance, imports,
    step(count=1) { for(let i=0;i<count;i++) api.web_step(); },
    input(key,down) { api.web_input(key,down?1:0); },
    read(address) { return api.web_read(address); },
    readAt(ptr,offset=0) { return new DataView(api.memory.buffer).getInt32(ptr+offset,true); },
    snapshot() {
      const p=api.web_read(0x41f6cc), view=new DataView(api.memory.buffer);
      const i=o=>p?view.getInt32(p+o,true):0, f=o=>p?view.getFloat32(p+o,true):0;
      return { scene:api.web_read(0x41f798), mode:api.web_read(0x41f6c0), stage:api.web_read(0x41f6bc), frame:api.web_read(0x41f6ac),
        score:api.web_read(0x41f698), combo:api.web_read(0x41f69c), maxCombo:api.web_read(0x41f6a0), special:api.web_read(0x41f6a4),
        player:{ptr:p,life:i(44),lane:i(40),state:i(80),x:i(32),y:f(64),guard:f(56),invincibility:i(48)},tasks:api.web_tasks() };
    },
    saves() { return Object.fromEntries([...saves.contents].filter(([,f])=>f instanceof File).map(([n,f])=>[n,Array.from(f.data)])); },
  };
}
