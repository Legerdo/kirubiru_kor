char __cdecl sub_40FB90(int a1)
{
  FILE *v1; // edi
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  void *v8; // edi
  int v9; // ebx
  int v10; // edx
  int v11; // ecx
  _QWORD *j; // eax
  int Buffer; // [esp+4h] [ebp-28h] BYREF
  FILE *v14; // [esp+8h] [ebp-24h]
  int v15; // [esp+Ch] [ebp-20h]
  __int64 v16; // [esp+10h] [ebp-1Ch] BYREF
  CHAR FileName[20]; // [esp+18h] [ebp-14h] BYREF
  int i; // [esp+30h] [ebp+4h]

  wsprintfA(a1: FileName, a2: "save/replay%d.rep", a1);
  v1 = fopen(FileName, Mode: Mode);
  v14 = v1;
  if ( v1 == nullptr )
    return 0;
  dword_41F7BC = (int)Block;
  fread(Buffer: &dword_41F7B0, ElementSize: 4u, ElementCount: 1u, Stream: v1);
  fread(&Buffer, ElementSize: 4u, ElementCount: 1u, Stream: v1);
  for ( i = 0; i < Buffer; ++i )
  {
    fread(Buffer: &v16, ElementSize: 8u, ElementCount: 1u, Stream: v1);
    v3 = dword_41F7BC;
    if ( (dword_41F7C0 - dword_41F7BC) >> 3 != 0 )
    {
      v15 = 0;
      sub_410620(a1: dword_41F7BC, a2: dword_41F7BC, a3: dword_41F7BC + 8);
      sub_410660(a1: dword_41F7BC, a2: 1 - ((dword_41F7BC - v3) >> 3), a3: &v16);
      v11 = dword_41F7BC;
      for ( j = (_QWORD *)v3; j != (_QWORD *)v11; ++j )
        *j = v16;
      dword_41F7BC += 8;
    }
    else
    {
      if ( Block == nullptr || (unsigned int)(v4 = (dword_41F7BC - (int)Block) >> 3) <= 1 )
        v4 = 1;
      if ( Block != nullptr )
        v5 = (dword_41F7BC - (int)Block) >> 3;
      else
        v5 = 0;
      v6 = v5 + v4;
      v7 = v5 + v4;
      if ( v7 < 0 )
        v7 = 0;
      v8 = operator new(Size: 8 * v7);
      v9 = sub_410620(a1: Block, a2: v3, a3: v8);
      sub_410660(a1: v9, a2: 1, a3: &v16);
      sub_410620(a1: v3, a2: dword_41F7BC, a3: v9 + 8);
      nullsub_2(a1: Block, a2: dword_41F7BC);
      operator delete(Block: Block);
      dword_41F7C0 = (int)v8 + 8 * v6;
      v10 = (int)v8 + 8 * sub_4103A0(a1: &unk_41F7B4) + 8;
      Block = v8;
      v1 = v14;
      dword_41F7BC = v10;
    }
  }
  fclose(Stream: v1);
  return 1;
}