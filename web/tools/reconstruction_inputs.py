"""Validated reconstruction data retained inside web; no executable is loaded."""
import hashlib,json

def load_inputs(root):
    research=root/'research'
    metadata=json.loads((research/'reconstruction-inputs.json').read_text(encoding='utf-8'))
    baseline=json.loads((research/'original-manifest.json').read_text(encoding='utf-8'))
    if metadata['sourceExecutableSha256']!=baseline['run.exe']['sha256']:
        raise ValueError('Reconstruction source identity mismatch')
    info=metadata['image']
    if info['path']!='initial-image.bin' or info['base']!='0x41c000' or info['bytes']!=0x8d700:
        raise ValueError('Unexpected initialized-image layout')
    data=(research/info['path']).read_bytes()
    if len(data)!=info['bytes'] or hashlib.sha256(data).hexdigest()!=info['sha256']:
        raise ValueError('Initialized-image integrity check failed')
    tables={}
    for table in metadata['codeTables']:
        values=bytes(table['bytes']);address=int(table['address'],16)
        if len(values)!=32 or hashlib.sha256(values).hexdigest()!=table['sha256'] or address in tables:
            raise ValueError('Code-table integrity check failed')
        tables[address]=values
    if set(tables)!={0x405428,0x407974}:raise ValueError('Missing original code tables')
    return data,tables
