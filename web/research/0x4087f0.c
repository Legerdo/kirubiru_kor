int __cdecl sub_4087F0(int a1)
{
  bool v1; // zf
  int v2; // eax
  int v3; // eax
  int v4; // edx
  int v5; // eax

  v1 = *(_DWORD *)(a1 + 40) == *(_DWORD *)(sub_40B5E0() + 52) - 1;
  v2 = *(_DWORD *)(a1 + 36);
  if ( v1 )
  {
    v4 = 12 * v2 / 13;
    *(_DWORD *)(a1 + 36) = v4;
    *(_DWORD *)(a1 + 32) = v4 >> 4;
  }
  else
  {
    v3 = v2 - 160;
    *(_DWORD *)(a1 + 36) = v3;
    v3 >>= 4;
    *(_DWORD *)(a1 + 32) = v3;
    if ( v3 > 700 )
      *(_BYTE *)(a1 + 24) = 1;
  }
  v5 = sub_411780();
  return (*(int (__thiscall **)(int, int, _DWORD, int, int, int, _DWORD, int))(*(_DWORD *)v5 + 12))(
           a1: v5,
           a2: 52,
           a3: *(_DWORD *)(a1 + 32),
           a4: 390,
           a5: 160,
           a6: 50,
           a7: 0,
           a8: 50 * *(_DWORD *)(a1 + 44));
}