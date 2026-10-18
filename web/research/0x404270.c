int __cdecl sub_404270(int a1)
{
  int v1; // edx
  int v2; // edi
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int result; // eax

  v1 = *(_DWORD *)(a1 + 44); /*0x404277*/
  v2 = *(_DWORD *)(a1 + 40) + *(_DWORD *)(a1 + 48); /*0x404285*/
  v3 = (v1 + *(_DWORD *)(a1 + 52)) >> 4; /*0x40428e*/
  *(_DWORD *)(a1 + 52) += v1; /*0x404294*/
  *(_DWORD *)(a1 + 48) = v2; /*0x404297*/
  *(_DWORD *)(a1 + 32) = v2 >> 4; /*0x40429a*/
  *(_DWORD *)(a1 + 36) = v3; /*0x40429d*/
  *(_DWORD *)(a1 + 44) = v1 + 4; /*0x4042a0*/
  v4 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(); /*0x4042ad*/
  v5 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8); /*0x4042ba*/
  v6 = sub_411780(); /*0x4042bc*/
  result = (*(int (__thiscall **)(int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 12))( /*0x4042d7*/
             a1: v6,
             a2: *(_DWORD *)(a1 + 60) + 13,
             a3: v4,
             a4: v5,
             a5: *(_DWORD *)(a1 + 56),
             a6: *(_DWORD *)(a1 + 56),
             a7: 0,
             a8: 0);
  if ( *(int *)(a1 + 36) > 608 || (result = *(_DWORD *)(a1 + 32)) < -64 || result > 704 ) /*0x4042f0*/
    *(_BYTE *)(a1 + 24) = 1; /*0x4042f2*/
  return result; /*0x4042f6*/
}