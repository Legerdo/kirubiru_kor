import assert from 'node:assert/strict';
import {cp,mkdtemp,mkdir,readFile,writeFile,rm,access} from 'node:fs/promises';
import {tmpdir} from 'node:os';
import {resolve,join,relative,extname,sep,basename} from 'node:path';
import {spawnSync} from 'node:child_process';
import {createHash} from 'node:crypto';
import {createServer} from 'node:http';
import {fileURLToPath} from 'node:url';
import {chromium} from 'playwright';

const source=fileURLToPath(new URL('..',import.meta.url));
assert.ok(process.env.npm_execpath,'Run with npm run test:standalone');
const temporary=await mkdtemp(join(tmpdir(),'kirubiru-standalone-')),clone=join(temporary,'web');
const report={externalOriginalsPresent:false,commands:[],browser:null};let server,browser,passed=false;
const sha=bytes=>createHash('sha256').update(bytes).digest('hex');
try{
 console.log('Copying a self-contained web fixture; original executable and IDA databases are excluded.');
 await cp(source,clone,{recursive:true,dereference:true,filter:path=>{
  const parts=relative(source,path).split(sep),name=basename(path);
  if(['dist','test-results'].includes(parts[0])||name==='.vite'||name==='__pycache__')return false;
  if(parts[0]==='research'&&(name.startsWith('original-analysis.exe')||/\.(i64|idb)$/.test(name)))return false;
  if(parts[0]==='native'&&(/\.o$/.test(name)||['logic.c','globals.h','prototypes.h','relocations.h','image.bin'].includes(name)))return false;
  return true;
 }});
 await mkdir(join(clone,'test-results'),{recursive:true});
 for(const name of ['run.exe','image','data','sound','save']){
  let exists=true;try{await access(join(temporary,name));}catch{exists=false;}
  assert.equal(exists,false,'fixture parent must not contain '+name);
 }
 for(const script of ['native','assets','test','verify','build']){
  console.log('Standalone: npm run '+script);
  const result=spawnSync(process.execPath,[process.env.npm_execpath,'run',script],{cwd:clone,encoding:'utf8',timeout:180000});
  const output=(result.stdout??'')+(result.stderr??'');
  await writeFile(join(source,'test-results','standalone-'+script+'.log'),output);
  report.commands.push({script,exitCode:result.status});
  assert.equal(result.status,0,`${script} failed: ${output.slice(-4000)}`);
 }
 const parity=JSON.parse(await readFile(join(clone,'test-results/parity-report.json'),'utf8'));
 assert.equal(parity.matched,13);assert.equal(parity.originalAudit,null);
 report.parity={matched:parity.matched,total:parity.total,bundleMutations:parity.bundleMutations};
 const wasm=await readFile(join(clone,'public/game.wasm'));
 report.wasmSha256=sha(wasm);report.sameWasmAsWorkspace=sha(await readFile(join(source,'public/game.wasm')))===report.wasmSha256;
 assert.equal(report.sameWasmAsWorkspace,true,'rebuilding outside the original folder must reproduce the same WASM');
 const root=resolve(clone,'dist'),requests=[],errors=[];
 const mime={'.html':'text/html','.js':'text/javascript','.css':'text/css','.json':'application/json','.wasm':'application/wasm'};
 server=createServer(async(req,res)=>{
  try{
   const path=decodeURIComponent(new URL(req.url,'http://localhost').pathname),file=resolve(root,'.'+(path==='/'?'/index.html':path));
   if(!file.startsWith(root+sep))throw Error('outside fixture dist');
   const bytes=await readFile(file);requests.push(path);res.writeHead(200,{'Content-Type':mime[extname(file)]||'application/octet-stream'});res.end(bytes);
  }catch{res.writeHead(404);res.end();}
 });
 await new Promise(done=>server.listen(0,'127.0.0.1',done));
 browser=await chromium.launch({headless:true,executablePath:process.env.KIRUBIRU_CHROMIUM||'C:/Users/K/AppData/Local/ms-playwright/chromium-1243/chrome-win64/chrome.exe'});
 const page=await browser.newPage({viewport:{width:1366,height:768}});
 page.on('pageerror',e=>errors.push(String(e)));page.on('response',r=>{if(r.status()>=400)errors.push(r.status()+' '+r.url());});
 await page.goto('http://127.0.0.1:'+server.address().port);await page.waitForFunction(()=>window.kirubiru?.ready());
 await page.keyboard.press('z');
 await page.waitForFunction(()=>window.kirubiru.snapshot().scene===2&&window.kirubiru.audio().decodedWav===16&&window.kirubiru.audio().midi?.play===1);
 await page.screenshot({path:join(source,'test-results/standalone-play.png')});
 report.browser={root:'isolated web/dist',ready:true,scene:await page.evaluate(()=>window.kirubiru.snapshot().scene),requests:requests.length,errors};
 assert.deepEqual(errors,[]);
 passed=true;
}finally{
 if(browser)await browser.close();if(server)await new Promise(done=>server.close(done));
 report.passed=passed;await writeFile(join(source,'test-results/standalone-report.json'),JSON.stringify(report,null,2));
 // This is only the freshly created, explicitly named fixture; never remove source.
 const checked=resolve(temporary),prefix=resolve(tmpdir())+sep+'kirubiru-standalone-';
 assert.ok(checked.toLowerCase().startsWith(prefix.toLowerCase())&&checked!==resolve(source));
 await rm(checked,{recursive:true,force:true});
}
console.log(JSON.stringify(report,null,2));
