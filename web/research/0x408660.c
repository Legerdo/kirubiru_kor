char __cdecl sub_408660(int a1)
{
  char result; // al
  int v2; // edi
  int v3; // edi
  int v4; // esi
  int v5; // eax

  result = *(_BYTE *)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 32) - 4;
  *(_DWORD *)(a1 + 32) = v2;
  if ( result == 0 )
    *(_DWORD *)(a1 + 32) = v2 - 12;
  if ( *(int *)(a1 + 32) >= -2800 )
  {
    v3 = (*(int *)(a1 + 32) >> 4) - *(_DWORD *)sub_40B5E0();
    v4 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8);
    v5 = sub_411780();
    return (*(int (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v5 + 12))(
             a1: v5,
             a2: 18,
             a3: v3,
             a4: v4,
             a5: 175,
             a6: 78,
             a7: 0,
             a8: 0);
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 10240;
    if ( result == 0 )
      *(_BYTE *)(a1 + 24) = 1;
  }
  return result;
}