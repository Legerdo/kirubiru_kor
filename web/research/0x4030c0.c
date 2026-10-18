int __cdecl sub_4030C0(int a1)
{
  int v1; // eax
  int v2; // eax

  v1 = *(_DWORD *)(a1 + 40) - 160;
  *(_DWORD *)(a1 + 40) = v1;
  v1 >>= 4;
  *(_DWORD *)(a1 + 36) = v1;
  if ( v1 <= -440 )
    *(_BYTE *)(a1 + 24) = 1;
  v2 = sub_411780();
  return (*(int (__thiscall **)(int, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)v2 + 12))(
           a1: v2,
           a2: 56,
           a3: *(_DWORD *)(a1 + 36),
           a4: *(_DWORD *)(a1 + 32),
           a5: 440,
           a6: 100,
           a7: 0,
           a8: 0);
}