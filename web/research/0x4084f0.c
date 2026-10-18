int __cdecl sub_4084F0(int a1)
{
  int *v1; // edi
  int v2; // edi
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax

  if ( *(_BYTE *)(a1 + 44) != 0 )
  {
    if ( *(_BYTE *)(a1 + 52) != 0 )
      goto LABEL_7;
    v1 = (int *)(sub_40B5E0() + 16);
    *v1 = (__int64)((double)*(int *)(sub_40B5E0() + 20) * 3000.0 + (double)*v1);
    v2 = sub_40B5E0();
    if ( *(_DWORD *)(sub_40B5E0() + 16) > *(_DWORD *)(v2 + 60) )
    {
      v3 = sub_40B5E0();
      *(_DWORD *)(sub_40B5E0() + 16) = *(_DWORD *)(v3 + 60);
    }
    *(_BYTE *)(a1 + 52) = 1;
  }
  if ( *(_BYTE *)(a1 + 52) == 0 )
  {
    *(_DWORD *)(a1 + 32) += *(_DWORD *)(a1 + 40);
    goto LABEL_11;
  }
LABEL_7:
  v4 = *(_DWORD *)(a1 + 60) + 1;
  *(_DWORD *)(a1 + 60) = v4;
  if ( v4 % 3 == 0 )
  {
    v5 = *(_DWORD *)(a1 + 56) + 1;
    *(_DWORD *)(a1 + 56) = v5;
    if ( v5 > 4 )
    {
      *(_BYTE *)(a1 + 24) = 1;
      sub_413610(a1: 12);
    }
  }
LABEL_11:
  if ( *(_DWORD *)(a1 + 32) + 300 >= 429 )
  {
    *(_DWORD *)(a1 + 32) = 129;
    *(_BYTE *)(a1 + 52) = 1;
  }
  v6 = *(_DWORD *)(a1 + 36) - *(_DWORD *)sub_40B5E0();
  v7 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0() + 8);
  v8 = sub_411780();
  return (*(int (__thiscall **)(int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v8 + 12))(
           a1: v8,
           a2: 43,
           a3: v6,
           a4: v7,
           a5: 80,
           a6: 320,
           a7: 80 * *(_DWORD *)(a1 + 56),
           a8: 0);
}