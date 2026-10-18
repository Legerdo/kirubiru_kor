signed int __cdecl sub_4081B0(signed int a1)
{
  signed int result; // eax
  int v2; // ebx
  _DWORD *v3; // edi
  int v4; // ebp
  int v5; // esi

  result = a1;
  v2 = *(_DWORD *)(a1 + 36);
  v3 = (_DWORD *)(*(_DWORD *)(a1 + 32) + 32);
  if ( *(_BYTE *)(v2 + 24) != 0 )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v4 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 44);
    v5 = *(_DWORD *)(v2 + 44);
    result = *(_DWORD *)(v2 + 32) + 34;
    if ( *v3 + 120 > result )
    {
      if ( (int)abs32(v4 - v5) > 174 )
        sub_413610(a1: 5);
      v3[1] = *(_DWORD *)(v2 + 36) - 1360;
      v3[3] = v5;
      *(_DWORD *)(v2 + 44) = v5 - (v5 - v4) / 6;
      return (unsigned int)((unsigned __int64)(715827883LL * (v5 - v4)) >> 32) >> 31;
    }
  }
  return result;
}