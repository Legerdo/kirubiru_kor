int __cdecl sub_403040(_DWORD *a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax

  v1 = 30 * (a1[10] - 1600) / 31 + 1600;
  a1[10] = v1;
  v1 >>= 4;
  a1[9] = v1;
  if ( v1 == 100 )
  {
    v2 = a1[11] + 1;
    a1[11] = v2;
    if ( v2 > 180 )
      a1[7] = sub_4030C0;
  }
  v3 = sub_411780();
  return (*(int (__thiscall **)(int, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)v3 + 12))(
           a1: v3,
           a2: 56,
           a3: a1[9],
           a4: a1[8],
           a5: 440,
           a6: 100,
           a7: 0,
           a8: 0);
}