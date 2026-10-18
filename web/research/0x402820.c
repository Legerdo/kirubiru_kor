int __cdecl sub_402820(int a1)
{
  int v1; // eax
  int v2; // ebx
  double v3; // st7
  int v4; // edi
  int v5; // esi
  int v6; // eax

  v1 = *(_DWORD *)(a1 + 76);
  v2 = 104 * v1 + 4322408;
  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v3 = *(float *)(a1 + 56) + 0.25;
    *(float *)(a1 + 56) = v3;
    if ( v3 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    sub_402F90(a1: 104 * v1 + 4322408);
    if ( *(_BYTE *)(v2 + 93) != 0 )
    {
      *(_DWORD *)(a1 + 80) = 3;
      *(_DWORD *)(a1 + 28) = sub_4028F0;
      sub_408230(a1: *(_DWORD *)(a1 + 32) + 25, a2: *(_DWORD *)(a1 + 36) + 60);
      sub_4017E0(a1);
      --*(_DWORD *)(v2 + 80);
      sub_413610(a1: 9);
    }
  }
  v4 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0();
  v5 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8);
  v6 = sub_411780();
  return (*(int (__thiscall **)(int, _DWORD, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v6 + 12))(
           a1: v6,
           a2: 0,
           a3: v4,
           a4: v5,
           a5: 128,
           a6: 128,
           a7: *(_DWORD *)(v2 + 8 * *(_DWORD *)(v2 + 80)),
           a8: *(_DWORD *)(v2 + 8 * *(_DWORD *)(v2 + 80) + 4));
}