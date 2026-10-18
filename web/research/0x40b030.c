int __cdecl sub_40B030(int a1)
{
  int v1; // edx
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int result; // eax

  v1 = *(_DWORD *)(a1 + 36);
  v2 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 32) += *(int *)(a1 + 40) >> 4;
  *(_DWORD *)(a1 + 36) = (v2 >> 4) + v1;
  *(_DWORD *)(a1 + 44) = v2 + 1;
  v3 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0();
  v4 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8);
  v5 = sub_411780();
  result = (*(int (__thiscall **)(int, int, int, int, int, int, int, int))(*(_DWORD *)v5 + 12))(
             a1: v5,
             a2: 47,
             a3: v3,
             a4: v4,
             a5: 80,
             a6: 80,
             a7: 80 * *(_DWORD *)(a1 + 48),
             a8: 80);
  if ( *(int *)(a1 + 36) > 608 || (result = *(_DWORD *)(a1 + 32)) < -80 || result > 720 )
    *(_BYTE *)(a1 + 24) = 1;
  return result;
}