int __cdecl sub_4038E0(int a1)
{
  int v1; // eax
  int v2; // eax

  sub_4129B0(a1: 127);
  v1 = 15 * (*(_DWORD *)(a1 + 40) - 320) / 16 + 320;
  *(_DWORD *)(a1 + 40) = v1;
  v1 >>= 4;
  *(_DWORD *)(a1 + 32) = v1;
  if ( v1 != 20 || (unsigned __int8)sub_412180(a1: 9) == 0 )
  {
LABEL_5:
    if ( *(_BYTE *)(a1 + 52) == 0 )
      goto LABEL_8;
    goto LABEL_6;
  }
  if ( *(_BYTE *)(a1 + 52) == 0 )
  {
    *(_BYTE *)(a1 + 52) = 1;
    *(_DWORD *)(a1 + 48) = sub_40B350();
    goto LABEL_5;
  }
LABEL_6:
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 48) + 24) != 0 )
  {
    *(_BYTE *)(a1 + 24) = 1;
    *(_BYTE *)(sub_40B5E0() + 50) = 1;
  }
LABEL_8:
  v2 = sub_411780();
  return (*(int (__thiscall **)(int, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)v2 + 12))(
           a1: v2,
           a2: 40,
           a3: *(_DWORD *)(a1 + 32),
           a4: *(_DWORD *)(a1 + 36),
           a5: 600,
           a6: 120,
           a7: 0,
           a8: 0);
}