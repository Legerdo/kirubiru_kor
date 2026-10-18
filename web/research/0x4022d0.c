int __cdecl sub_4022D0(int a1)
{
  double v1; // st7
  __int64 v2; // rax
  int v3; // ecx
  int v4; // ecx
  int v5; // edi
  int v6; // esi
  int v7; // eax

  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v1 = *(float *)(a1 + 56) + 0.25;
    *(float *)(a1 + 56) = v1;
    if ( v1 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    *(float *)(a1 + 60) = *(float *)(a1 + 60) - *(float *)(a1 + 72);
    *(float *)(a1 + 72) = *(float *)(a1 + 72) + 5.0;
    v2 = (__int64)*(float *)(a1 + 60);
    v3 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 32) = v2;
    v4 = 120 * v3 + 136;
    if ( (int)v2 < v4 )
    {
      *(_DWORD *)(a1 + 32) = v4;
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 28) = sub_401FB0;
    }
  }
  v5 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0();
  v6 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8);
  v7 = sub_411780();
  return (*(int (__thiscall **)(int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v7 + 12))(
           a1: v7,
           a2: 0,
           a3: v5,
           a4: v6,
           a5: 128,
           a6: 128,
           a7: 512,
           a8: 128);
}