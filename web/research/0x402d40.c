int __cdecl sub_402D40(int a1)
{
  int v1; // eax
  double v2; // st7
  int v3; // eax
  int v4; // edi
  int v5; // esi
  int v6; // eax

  v1 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 36) = 304;
  *(_DWORD *)(a1 + 64) = 1134034944;
  *(_DWORD *)(a1 + 32) = 120 * v1 + 136;
  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v2 = *(float *)(a1 + 56) + 2.5;
    *(float *)(a1 + 56) = v2;
    if ( v2 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    v3 = *(_DWORD *)(a1 + 84) + 1;
    *(_DWORD *)(a1 + 84) = v3;
    if ( v3 > 30 )
    {
      *(_DWORD *)(a1 + 84) = 0;
      *(_DWORD *)(a1 + 48) = 0;
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 28) = sub_401FB0;
    }
  }
  v4 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0();
  v5 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8);
  v6 = sub_411780();
  return (*(int (__thiscall **)(int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v6 + 12))(
           a1: v6,
           a2: 0,
           a3: v4,
           a4: v5,
           a5: 128,
           a6: 128,
           a7: 128,
           a8: 512);
}