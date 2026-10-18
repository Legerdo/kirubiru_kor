int __cdecl sub_402A80(int a1)
{
  int v1; // ebx
  double v2; // st7
  int v3; // edi
  int v4; // esi
  int v5; // eax

  v1 = 104 * *(_DWORD *)(a1 + 76) + 4322408;
  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v2 = *(float *)(a1 + 56) + 0.25;
    *(float *)(a1 + 56) = v2;
    if ( v2 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    *(float *)(a1 + 64) = *(float *)(a1 + 68) + *(float *)(a1 + 64);
    *(float *)(a1 + 68) = *(float *)(a1 + 68) + 0.1f;
    if ( *(float *)(a1 + 64) > 304.0 )
      *(_DWORD *)(a1 + 64) = 1134034944;
    *(_DWORD *)(a1 + 36) = (__int64)*(float *)(a1 + 64);
    sub_402F90(a1: v1);
    if ( *(_BYTE *)(v1 + 93) != 0 )
    {
      *(_DWORD *)(a1 + 80) = 3;
      *(_DWORD *)(a1 + 28) = sub_4028F0;
      --*(_DWORD *)(v1 + 80);
    }
  }
  v3 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0();
  v4 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8);
  v5 = sub_411780();
  return (*(int (__thiscall **)(int, _DWORD, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v5 + 12))(
           a1: v5,
           a2: 0,
           a3: v3,
           a4: v4,
           a5: 128,
           a6: 128,
           a7: *(_DWORD *)(v1 + 8 * *(_DWORD *)(v1 + 80)),
           a8: *(_DWORD *)(v1 + 8 * *(_DWORD *)(v1 + 80) + 4));
}