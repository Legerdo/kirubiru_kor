int __cdecl sub_402450(int a1)
{
  double v1; // st7
  int v2; // esi
  int v3; // edi
  int v4; // eax

  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v1 = *(float *)(a1 + 56) - 1.0;
    *(float *)(a1 + 56) = v1;
    if ( v1 < 0.0 )
      *(_DWORD *)(a1 + 56) = 0;
    if ( (unsigned __int8)sub_412150(a1: 7) == 0 || *(float *)(a1 + 56) == 0.0 )
    {
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 28) = sub_401FB0;
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