int sub_40FE10()
{
  int v0; // ebx
  _DWORD *v1; // eax
  int v2; // edi
  char *v3; // esi
  FILE *v4; // eax
  int v5; // ecx
  FILE *v6; // eax
  FILE *v7; // esi
  int v9; // ebx
  CHAR FileName[20]; // [esp+8h] [ebp-78h] BYREF
  CHAR NewFileName[20]; // [esp+1Ch] [ebp-64h] BYREF
  int Buffer; // [esp+30h] [ebp-50h] BYREF
  _DWORD v13[15]; // [esp+34h] [ebp-4Ch] BYREF
  char v14; // [esp+70h] [ebp-10h] BYREF

  sub_40FF30(&Buffer);
  v0 = 0;
  v1 = v13;
  while ( dword_41F698 < *v1 )
  {
    ++v0;
    v1 += 2;
    if ( v0 >= 10 )
      goto LABEL_11;
  }
  DeleteFileA(lpFileName: aSaveReplay10Re);
  v2 = 9;
  if ( v0 < 9 )
  {
    v3 = &v14;
    do
    {
      *((_DWORD *)v3 + 3) = *((_DWORD *)v3 + 1);
      *((_DWORD *)v3 + 2) = *(_DWORD *)v3;
      wsprintfA(a1: FileName, a2: "save/replay%d.rep", v2);
      wsprintfA(a1: NewFileName, a2: "save/replay%d.rep", v2 + 1);
      v4 = fopen(FileName, Mode: Mode);
      if ( v4 != nullptr )
      {
        fclose(Stream: v4);
        sub_414675(lpExistingFileName: FileName, lpNewFileName: NewFileName);
      }
      --v2;
      v3 -= 8;
    }
    while ( v2 > v0 );
  }
  v5 = dword_41F6A0;
  v13[2 * v0] = dword_41F698;
  v13[2 * v0 - 1] = v5;
LABEL_11:
  v6 = fopen(FileName: aSaveScoreSav, Mode: aWbc);
  v7 = v6;
  if ( v6 == nullptr )
    return 11;
  fwrite(&Buffer, ElementSize: 8u, ElementCount: 0xAu, Stream: v6);
  fflush(Stream: v7);
  fclose(Stream: v7);
  v9 = v0 + 1;
  if ( v9 < 11 )
    sub_40FAD0(Buffer: v9);
  return v9;
}