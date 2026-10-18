int __cdecl sub_40AC20(int a1)
{
  int v1; // eax
  bool v2; // zf
  signed int v3; // eax
  int result; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax

  v1 = *(_DWORD *)(a1 + 164) + 1;
  *(_DWORD *)(a1 + 164) = v1;
  v3 = v1 & 0x80000001;
  v2 = v3 == 0;
  if ( v3 < 0 )
    v2 = (((_BYTE)v3 - 1) | 0xFFFFFFFE) == -1;
  if ( v2 && (result = *(_DWORD *)(a1 + 160) + 1, *(_DWORD *)(a1 + 160) = result, result > 14) )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0();
    v6 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8);
    v7 = sub_411780();
    return (*(int (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v7 + 12))(
             a1: v7,
             a2: 3,
             a3: v5,
             a4: v6,
             a5: 512,
             a6: 256,
             a7: *(_DWORD *)(a1 + 8 * *(_DWORD *)(a1 + 160) + 40),
             a8: *(_DWORD *)(a1 + 8 * *(_DWORD *)(a1 + 160) + 44));
  }
  return result;
}