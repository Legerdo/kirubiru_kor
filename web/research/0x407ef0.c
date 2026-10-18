int __cdecl sub_407EF0(int a1)
{
  int v2; // ecx
  _DWORD *v3; // edi
  char v4; // bl
  int v5; // ebp
  int *v6; // ebp
  int v7; // ebp
  int v8; // ebp
  int *v9; // ebp
  int v10; // ebx
  int v11; // ebx
  int result; // eax
  int v13; // esi
  int v14; // edi
  int v15; // esi
  int v16; // eax
  bool v17; // [esp+Ch] [ebp+4h]

  v2 = *(_DWORD *)(a1 + 44);
  v3 = (_DWORD *)(*(_DWORD *)(a1 + 12) + 32);
  if ( v2 < 0 )
    *(_BYTE *)(a1 + 52) = 0;
  v17 = *(_DWORD *)(a1 + 32) == 309;
  v4 = 0;
  v5 = v2 + *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = v5;
  *(_DWORD *)(a1 + 32) = v5 >> 4;
  *(_DWORD *)(a1 + 44) = v2 + *(_DWORD *)(a1 + 48);
  if ( *(_BYTE *)(a1 + 60) != 0 )
  {
    v6 = (int *)(sub_40B5E0() + 16);
    *v6 = (__int64)((double)*(int *)(sub_40B5E0() + 20) * (double)*(int *)(a1 + 48) * 45.0 + (double)*v6);
    v7 = sub_40B5E0();
    if ( *(_DWORD *)(sub_40B5E0() + 16) > *(_DWORD *)(v7 + 60) )
    {
      v8 = sub_40B5E0();
      *(_DWORD *)(sub_40B5E0() + 16) = *(_DWORD *)(v8 + 60);
    }
    if ( *(int *)(a1 + 56) <= 0 )
    {
      v9 = (int *)(sub_40B5E0() + 16);
      *v9 = (__int64)((double)*(int *)(sub_40B5E0() + 20) * (double)*(int *)(a1 + 48) * 405.0 + (double)*v9);
      v10 = sub_40B5E0();
      if ( *(_DWORD *)(sub_40B5E0() + 16) > *(_DWORD *)(v10 + 60) )
      {
        v11 = sub_40B5E0();
        *(_DWORD *)(sub_40B5E0() + 16) = *(_DWORD *)(v11 + 60);
      }
      v4 = 1;
    }
  }
  if ( *(_DWORD *)(a1 + 32) + 120 >= 429 )
  {
    *(_DWORD *)(a1 + 36) = 4944;
    *(_DWORD *)(a1 + 32) = 309;
    if ( v17 && *(_BYTE *)(a1 + 52) == 0 )
      v4 = 1;
    *(_DWORD *)(a1 + 44) = 0;
  }
  if ( v4 == 1 )
  {
    *(_BYTE *)(a1 + 24) = 1;
    sub_413610(a1: 6);
    result = sub_4080A0(a1: *(_DWORD *)(a1 + 40), a2: *(_DWORD *)(a1 + 32) + 50);
    --v3[2];
    v13 = *(_DWORD *)(a1 + 68);
    if ( v13 != 0 )
    {
      v3[1] = v13;
    }
    else
    {
      v3[1] = 0;
      *v3 = 0;
    }
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 40) - *(_DWORD *)sub_40B5E0();
    v15 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0() + 8);
    v16 = sub_411780();
    return (*(int (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v16 + 12))(
             a1: v16,
             a2: 44,
             a3: v14,
             a4: v15,
             a5: 160,
             a6: 120,
             a7: 0,
             a8: 0);
  }
  return result;
}