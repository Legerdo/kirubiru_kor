int __cdecl sub_4031C0(int a1)
{
  int v2; // ebp
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int result; // eax
  int v9; // eax
  int i; // ebx
  int v11; // ecx
  int v12; // [esp+30h] [ebp-4h]
  int v13; // [esp+38h] [ebp+4h]

  v2 = 1;
  v13 = 1;
  v3 = *(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 52);
  v4 = *(_DWORD *)(a1 + 56);
  v12 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 52) = v3;
  v5 = v3;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = v6 + v4;
  *(_DWORD *)(a1 + 56) = v7;
  *(_DWORD *)(a1 + 48) = v6 + 4;
  *(_DWORD *)(a1 + 36) = v5 >> 4;
  result = v7 >> 4;
  *(_DWORD *)(a1 + 40) = v7 >> 4;
  if ( v7 >> 4 <= 480 )
  {
    v9 = sub_411780();
    (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v9 + 12))(
      a1: v9,
      a2: 22,
      a3: *(_DWORD *)(a1 + 36) + 160,
      a4: *(_DWORD *)(a1 + 40) - 8,
      a5: 80,
      a6: 80,
      a7: 0,
      a8: 0);
    for ( i = 108; i > 0; i -= 36 )
    {
      result = v12 / v2;
      if ( v12 / v2 > 0 )
      {
        v11 = sub_411780();
        result = (*(int (__thiscall **)(int, int, int, _DWORD, int, int, int, _DWORD))(*(_DWORD *)v11 + 12))(
                   a1: v11,
                   a2: 21,
                   a3: i + *(_DWORD *)(a1 + 36),
                   a4: *(_DWORD *)(a1 + 40),
                   a5: 64,
                   a6: 64,
                   a7: (v12 / v2 % 10) << 6,
                   a8: 0);
        v2 = v13;
      }
      v2 *= 10;
      v13 = v2;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;
}