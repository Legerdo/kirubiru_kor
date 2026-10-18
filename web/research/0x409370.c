char __cdecl sub_409370(int a1)
{
  int v1; // eax
  int v2; // edx
  int v3; // edi
  int v4; // ebx
  int v5; // eax

  LOBYTE(v1) = *(_BYTE *)(a1 + 48);
  v2 = *(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 32) += *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 36) = v2;
  if ( (_BYTE)v1 != 0
    || (v3 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(),
        v4 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8),
        v5 = sub_411780(),
        (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v5 + 12))(
          a1: v5,
          a2: 49,
          a3: v3,
          a4: v4,
          a5: 16,
          a6: 16,
          a7: 0,
          a8: 0),
        (v1 = *(_DWORD *)(a1 + 36) + 16) > 429) )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return v1;
}