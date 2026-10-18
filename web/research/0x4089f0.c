int __cdecl sub_4089F0(int a1)
{
  int v1; // edi
  int v2; // ecx
  int v3; // edi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // eax

  v1 = *(_DWORD *)(a1 + 36);
  v2 = *(_DWORD *)(a1 + 52) + *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v2;
  v3 = *(_DWORD *)(a1 + 48) + v1;
  *(_DWORD *)(a1 + 40) = v2 >> 5;
  *(_DWORD *)(a1 + 36) = v3;
  *(_DWORD *)(a1 + 32) = v3 >> 5;
  *(_DWORD *)(a1 + 52) += rand() % 6 - 3;
  v4 = rand() % 6 - 2 + *(_DWORD *)(a1 + 48);
  v5 = *(_DWORD *)(a1 + 68) + 1;
  *(_DWORD *)(a1 + 68) = v5;
  *(_DWORD *)(a1 + 48) = v4;
  if ( v5 % 6 == 0 )
    *(_DWORD *)(a1 + 64) = (*(_DWORD *)(a1 + 64) + 1) % 4;
  v6 = *(_DWORD *)(a1 + 40);
  if ( v6 > 740 || v6 + 16 < -100 || *(int *)(a1 + 32) > 420 )
    *(_BYTE *)(a1 + 24) = 1;
  v7 = *(_DWORD *)(a1 + 40) - *(_DWORD *)sub_40B5E0();
  v8 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0() + 8);
  v9 = sub_411780();
  return (*(int (__thiscall **)(int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v9 + 12))(
           a1: v9,
           a2: 46,
           a3: v7,
           a4: v8,
           a5: 16,
           a6: 16,
           a7: 16 * *(_DWORD *)(a1 + 64),
           a8: *(_DWORD *)(a1 + 60));
}