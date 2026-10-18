int __cdecl sub_40B2C0(int a1)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax

  *(_DWORD *)(a1 + 36) -= *(_DWORD *)(a1 + 40);
  if ( *(_DWORD *)(a1 + 36) + 512 >= *(_DWORD *)(sub_40B5E0() + 8) )
  {
    v2 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0();
    v3 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8);
    v4 = sub_411780();
    return (*(int (__thiscall **)(int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v4 + 12))(
             a1: v4,
             a2: 8,
             a3: v2 + 40 * *(_DWORD *)(a1 + 44),
             a4: v3,
             a5: 40,
             a6: 512,
             a7: 40 * *(_DWORD *)(a1 + 44),
             a8: 0);
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
    *(_DWORD *)(*(_DWORD *)(sub_40B5E0() + 68) + 48) = 0;
    return sub_4129F0(a1: 127);
  }
}