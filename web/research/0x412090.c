_DWORD **sub_412090()
{
  int *v0; // esi
  int v1; // ebp
  int *v2; // edi
  _DWORD **result; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  int v6; // ecx

  v0 = dword_4202C0;
  do
  {
    if ( *v0 != 0 )
      (*(void (__thiscall **)(int))(*(_DWORD *)*v0 + 4))(a1: *v0);
    ++v0;
  }
  while ( (int)v0 < (int)&dword_4202C8 );
  dword_4205D0 ^= 1u;
  v1 = 0;
  memset(&byte_4200C0[255 * dword_4205D0], 0, 0x100u);
  v2 = &dword_4202D4;
  do
  {
    result = (_DWORD **)*v2;
    v4 = *(_DWORD **)*v2;
    if ( v4 != (_DWORD *)*v2 )
    {
      while ( 1 )
      {
        v5 = (_DWORD *)v4[2];
        v6 = dword_4202C0[*v5];
        if ( v6 != 0 && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 8))(a1: v6, a2: v5[1]) != 0 )
          break;
        v4 = (_DWORD *)*v4;
        result = (_DWORD **)*v2;
        if ( v4 == (_DWORD *)*v2 )
          goto LABEL_12;
      }
      result = (_DWORD **)dword_4205D0;
      byte_4200C0[255 * dword_4205D0 + v1] = -1;
    }
LABEL_12:
    v2 += 3;
    ++v1;
  }
  while ( (int)v2 < (int)&dword_4205D4 );
  return result;
}