int __cdecl sub_402670(int a1)
{
  double v1; // st7
  int v2; // edi
  int v3; // esi
  int v4; // eax

  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v1 = *(float *)(a1 + 56) - 1.0;
    *(float *)(a1 + 56) = v1;
    if ( v1 < 0.0 )
      *(_DWORD *)(a1 + 56) = 0;
    *(float *)(a1 + 64) = *(float *)(a1 + 64) + *(float *)(a1 + 68);
    *(float *)(a1 + 68) = *(float *)(a1 + 68) + 0.1f;
    *(_DWORD *)(a1 + 36) = (__int64)*(float *)(a1 + 64);
    if ( (unsigned __int8)sub_412150(a1: 7) == 0 || *(float *)(a1 + 56) == 0.0 )
    {
      *(_DWORD *)(a1 + 80) = 3;
      *(_DWORD *)(a1 + 28) = sub_4028F0;
    }
    if ( *(int *)(a1 + 36) > 295 )
    {
      *(_DWORD *)(a1 + 80) = 7;
      *(_DWORD *)(a1 + 36) = 304;
      *(_DWORD *)(a1 + 28) = sub_402450;
      sub_408230(a1: *(_DWORD *)(a1 + 32) + 25, a2: *(_DWORD *)(a1 + 36) + 60);
      sub_413610(a1: 10);
    }
  }
  v2 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0();
  v3 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8);
  v4 = sub_411780();
  return (*(int (__thiscall **)(int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v4 + 12))(
           a1: v4,
           a2: 0,
           a3: v2,
           a4: v3,
           a5: 128,
           a6: 128,
           a7: 512,
           a8: 384);
}