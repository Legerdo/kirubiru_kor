int __cdecl sub_408D80(int a1)
{
  int result; // eax
  int v2; // edi
  int v3; // ebx
  int v4; // eax

  result = *(_DWORD *)(a1 + 184) + 1;
  *(_DWORD *)(a1 + 184) = result;
  if ( result <= 17 )
  {
    v2 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0();
    v3 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8);
    v4 = sub_411780();
    return (*(int (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 12))(
             a1: v4,
             a2: 17,
             a3: v2,
             a4: v3,
             a5: 128,
             a6: 128,
             a7: *(_DWORD *)(a1 + 8 * *(_DWORD *)(a1 + 184) + 40),
             a8: *(_DWORD *)(a1 + 8 * *(_DWORD *)(a1 + 184) + 44));
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;
}