int __cdecl sub_408E80(int a1)
{
  int v1; // edi
  int v2; // edi
  double v3; // st7
  int v4; // eax

  *(float *)(a1 + 32) = *(float *)(a1 + 36) + *(float *)(a1 + 32);
  *(float *)(a1 + 36) = *(float *)(a1 + 36) - 0.05f;
  if ( *(float *)(a1 + 32) > 0.0 )
  {
    *(_DWORD *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 24) = 1;
    sub_4129F0(a1: 8);
  }
  v1 = (__int64)*(float *)(a1 + 32);
  *(_DWORD *)(sub_40B5E0() + 8) = v1;
  v2 = *(_DWORD *)(sub_40B5E0() + 8) + 480;
  *(_DWORD *)(sub_40B5E0() + 4) = v2;
  v3 = *(float *)(a1 + 32);
  v4 = sub_411780();
  if ( v3 >= -200.0 )
    return (*(int (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 12))(
             a1: v4,
             a2: 20,
             a3: 220,
             a4: 190,
             a5: 200,
             a6: 100,
             a7: 0,
             a8: 0);
  else
    return (*(int (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 12))(
             a1: v4,
             a2: 19,
             a3: 220,
             a4: 190,
             a5: 200,
             a6: 100,
             a7: 0,
             a8: 0);
}