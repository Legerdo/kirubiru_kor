int __cdecl sub_403320(int a1)
{
  int v1; // eax
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax

  if ( *(_DWORD *)(a1 + 48) == 3 )
  {
    v1 = *(_DWORD *)(a1 + 32) - 8;
    *(_DWORD *)(a1 + 32) = v1;
    v2 = v1;
    v3 = *(_DWORD *)(a1 + 36);
    if ( v2 < v3 )
    {
      *(_DWORD *)(a1 + 32) = v3;
      *(_DWORD *)(a1 + 48) = 0;
    }
  }
  if ( (unsigned __int8)sub_412180(a1: 2) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 48) = 1;
    *(_DWORD *)(a1 + 32) = v4;
  }
  if ( (unsigned __int8)sub_412180(a1: 9) != 0 )
    *(_BYTE *)(a1 + 52) = 1;
  if ( *(_BYTE *)(a1 + 52) != 0 && *(_DWORD *)(a1 + 48) == 0 )
    *(_BYTE *)(a1 + 24) = 1;
  v5 = *(_DWORD *)(a1 + 48);
  if ( v5 == 1 )
  {
    v6 = *(_DWORD *)(a1 + 32) - 2;
    v7 = *(_DWORD *)(a1 + 36) - 10;
    *(_DWORD *)(a1 + 32) = v6;
    if ( v6 < v7 )
      *(_DWORD *)(a1 + 48) = 2;
  }
  else if ( v5 == 2 )
  {
    v8 = *(_DWORD *)(a1 + 32) + 2;
    *(_DWORD *)(a1 + 32) = v8;
    v9 = v8;
    v10 = *(_DWORD *)(a1 + 36);
    if ( v9 > v10 )
    {
      *(_DWORD *)(a1 + 32) = v10;
      *(_DWORD *)(a1 + 48) = 0;
    }
  }
  v11 = sub_411780();
  return (*(int (__thiscall **)(int, int, _DWORD, _DWORD, int, int, _DWORD, int))(*(_DWORD *)v11 + 12))(
           a1: v11,
           a2: 55,
           a3: *(_DWORD *)(a1 + 32),
           a4: *(_DWORD *)(a1 + 40),
           a5: 32,
           a6: 32,
           a7: 0,
           a8: 32);
}