int sub_40FF80()
{
  int v0; // ebp
  _DWORD *v1; // eax
  int v2; // edi
  char *v3; // esi
  int v4; // ebx
  FILE *v5; // eax
  int v6; // ecx
  FILE *v7; // eax
  FILE *v8; // esi
  int v10; // ebp
  CHAR FileName[20]; // [esp+8h] [ebp-78h] BYREF
  CHAR NewFileName[20]; // [esp+1Ch] [ebp-64h] BYREF
  int Buffer; // [esp+30h] [ebp-50h] BYREF
  _DWORD v14[15]; // [esp+34h] [ebp-4Ch] BYREF
  char v15; // [esp+70h] [ebp-10h] BYREF

  sub_4100B0(&Buffer);
  v0 = 0;
  v1 = v14;
  while ( dword_41F698 < *v1 )
  {
    ++v0;
    v1 += 2;
    if ( v0 >= 10 )
      goto LABEL_11;
  }
  DeleteFileA(lpFileName: aSaveReplay20Re);
  if ( v0 < 9 )
  {
    v2 = 20;
    v3 = &v15;
    do
    {
      v4 = v2 - 1;
      *((_DWORD *)v3 + 3) = *((_DWORD *)v3 + 1);
      *((_DWORD *)v3 + 2) = *(_DWORD *)v3;
      wsprintfA(a1: FileName, a2: "save/replay%d.rep", v2 - 1);
      wsprintfA(a1: NewFileName, a2: "save/replay%d.rep", v2);
      v5 = fopen(FileName, Mode: Mode);
      if ( v5 != nullptr )
      {
        fclose(Stream: v5);
        sub_414675(lpExistingFileName: FileName, lpNewFileName: NewFileName);
      }
      --v2;
      v3 -= 8;
    }
    while ( v4 - 11 > v0 );
  }
  v6 = dword_41F6A0;
  v14[2 * v0] = dword_41F698;
  v14[2 * v0 - 1] = v6;
LABEL_11:
  v7 = fopen(FileName: aSaveDainiScore, Mode: aWbc);
  v8 = v7;
  if ( v7 == nullptr )
    return 11;
  fwrite(&Buffer, ElementSize: 8u, ElementCount: 0xAu, Stream: v7);
  fflush(Stream: v8);
  fclose(Stream: v8);
  v10 = v0 + 1;
  if ( v10 < 11 )
    sub_40FAD0(Buffer: v10 + 10);
  return v10;
}