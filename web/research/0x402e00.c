int __cdecl sub_402E00(int a1)
{
  double v1; // st7
  int v2; // ecx
  int v3; // edi
  int v4; // esi
  int v5; // eax

  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v1 = *(float *)(a1 + 56) + 2.5;
    *(float *)(a1 + 56) = v1;
    if ( v1 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    v2 = *(_DWORD *)(a1 + 84) + 1;
    *(_DWORD *)(a1 + 84) = v2;
    if ( v2 > 30 )
    {
      *(_DWORD *)(a1 + 84) = 0;
      *(_DWORD *)(a1 + 48) = 0;
      *(_DWORD *)(a1 + 80) = 3;
      *(_DWORD *)(a1 + 28) = sub_4028F0;
    }
    *(float *)(a1 + 64) = *(float *)(a1 + 64) + *(float *)(a1 + 68);
    *(float *)(a1 + 68) = *(float *)(a1 + 68) + 0.1f;
    if ( *(float *)(a1 + 64) > 304.0 )
      *(_DWORD *)(a1 + 64) = 1134034944;
    *(_DWORD *)(a1 + 36) = (__int64)*(float *)(a1 + 64);
  }
  v3 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0();
  v4 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8);
  v5 = sub_411780();
  return (*(int (__thiscall **)(int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v5 + 12))(
           a1: v5,
           a2: 0,
           a3: v3,
           a4: v4,
           a5: 128,
           a6: 128,
           a7: 128,
           a8: 512);
}