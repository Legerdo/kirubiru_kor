int __cdecl sub_403ED0(int a1)
{
  int v1; // edx
  int v2; // eax
  int v3; // edi
  int v4; // esi
  int v5; // eax

  v1 = *(_DWORD *)(a1 + 48) + *(_DWORD *)(a1 + 36); /*0x403ee4*/
  v2 = (*(_DWORD *)(a1 + 52) + *(_DWORD *)(a1 + 44)) >> 4; /*0x403eea*/
  *(_DWORD *)(a1 + 44) += *(_DWORD *)(a1 + 52); /*0x403ef0*/
  *(_DWORD *)(a1 + 36) = v1; /*0x403ef3*/
  *(_DWORD *)(a1 + 40) = v2; /*0x403ef6*/
  *(_DWORD *)(a1 + 32) = v1 >> 4; /*0x403ef9*/
  if ( *(_DWORD *)(a1 + 32) < *(_DWORD *)(sub_40B5E0() + 8) - 60 ) /*0x403f0c*/
    *(_BYTE *)(a1 + 24) = 1; /*0x403f0e*/
  v3 = *(_DWORD *)(a1 + 40) - *(_DWORD *)sub_40B5E0(); /*0x403f1c*/
  v4 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0() + 8); /*0x403f29*/
  v5 = sub_411780(); /*0x403f2b*/
  return (*(int (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v5 + 12))( /*0x403f43*/
           a1: v5,
           a2: 51,
           a3: v3,
           a4: v4,
           a5: 16,
           a6: 12,
           a7: 0,
           a8: 0);
}