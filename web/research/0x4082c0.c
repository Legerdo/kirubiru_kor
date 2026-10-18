int __cdecl sub_4082C0(int a1)
{
  int v1; // eax
  int result; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // eax

  v1 = *(_DWORD *)(a1 + 68) + 1;
  *(_DWORD *)(a1 + 68) = v1;
  if ( v1 % 3 != 0 || (result = *(_DWORD *)(a1 + 64) + 1, *(_DWORD *)(a1 + 64) = result, result <= 2) )
  {
    v3 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0();
    v4 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8);
    v5 = sub_411780();
    return (*(int (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v5 + 12))(
             a1: v5,
             a2: 9,
             a3: v3,
             a4: v4,
             a5: 64,
             a6: 64,
             a7: *(_DWORD *)(a1 + 8 * *(_DWORD *)(a1 + 64) + 40),
             a8: *(_DWORD *)(a1 + 8 * *(_DWORD *)(a1 + 64) + 44));
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;
}