int __cdecl sub_4128C0(const void *a1)
{
  int v1; // ebx
  _DWORD *v2; // edx
  int result; // eax

  v1 = dword_4A95E4;
  v2 = *(_DWORD **)(dword_4A95E0 + 20);
  if ( dword_4A95D8 != dword_4A95DC )
  {
    qmemcpy((void *)dword_4A85D8[dword_4A95D8], a1, 544);
    result = dword_4A85D8[dword_4A95D8];
    if ( *(_DWORD *)result < *v2 )
    {
LABEL_5:
      *(_DWORD *)(v2[4] + 20) = result;
      *(_DWORD *)(result + 16) = v2[4];
      *(_DWORD *)(result + 20) = v2;
      v2[4] = result;
      *(_BYTE *)(result + 24) = 0;
      dword_4A95D8 = (dword_4A95D8 + 1) % 1024;
      return result;
    }
    while ( v2 != (_DWORD *)v1 )
    {
      v2 = (_DWORD *)v2[5];
      if ( *(_DWORD *)result < *v2 )
        goto LABEL_5;
    }
  }
  return 0;
}