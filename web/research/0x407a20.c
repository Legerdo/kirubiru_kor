int __cdecl sub_407A20(int a1)
{
  int v2; // ebx
  int v3; // edx
  int result; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int v8; // ebp
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v16; // [esp-8h] [ebp-18h]
  int v17; // [esp-8h] [ebp-18h]
  int v18; // [esp-8h] [ebp-18h]
  int v19; // [esp-8h] [ebp-18h]
  int v20; // [esp-8h] [ebp-18h]
  int v21; // [esp-8h] [ebp-18h]
  int v22; // [esp+14h] [ebp+4h]

  v2 = *(_DWORD *)(a1 + 12) + 32;
  v3 = *(_DWORD *)(a1 + 44) + 1;
  *(_DWORD *)(a1 + 44) = v3;
  if ( v3 < 80 )
    ++*(_DWORD *)(a1 + 36);
  if ( v3 <= 250 || (result = *(_DWORD *)(a1 + 36) - 1, *(_DWORD *)(a1 + 36) = result, result >= 0) )
  {
    if ( *(_BYTE *)(a1 + 48) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 52);
      *(_BYTE *)(a1 + 48) = 0;
      *(_DWORD *)(a1 + 40) = v5;
      *(_DWORD *)(a1 + 52) = 0;
    }
    v6 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0();
    v7 = *(_DWORD *)v2;
    v22 = *(_DWORD *)v2;
    v8 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8) + v7 + 340;
    if ( *(int *)(a1 + 40) <= 0
      || *(_BYTE *)(*(_DWORD *)(a1 + 12) + 24) != 0
      || *(_DWORD *)(v2 + 16) <= *(_DWORD *)(v2 + 24) && *(_BYTE *)(v2 + 20) != 0 )
    {
      *(_BYTE *)(a1 + 24) = 1;
      v16 = *(_DWORD *)(sub_40B5E0() + 8) + v8 + 50;
      v10 = (_DWORD *)sub_40B5E0();
      sub_404170(a1: *v10 + v6 + 40, a2: v16, a3: 1);
      v17 = *(_DWORD *)(sub_40B5E0() + 8) + v8 + 40;
      v11 = (_DWORD *)sub_40B5E0();
      sub_404170(a1: *v11 + v6 + 20, a2: v17, a3: 1);
      v18 = *(_DWORD *)(sub_40B5E0() + 8) + v8 + 30;
      v12 = (_DWORD *)sub_40B5E0();
      sub_404170(a1: *v12 + v6 + 60, a2: v18, a3: 1);
      v19 = *(_DWORD *)(sub_40B5E0() + 8) + v8 + 10;
      v13 = (_DWORD *)sub_40B5E0();
      sub_404170(a1: *v13 + v6 + 10, a2: v19, a3: 1);
      v20 = *(_DWORD *)(sub_40B5E0() + 8) + v8 + 80;
      v14 = (_DWORD *)sub_40B5E0();
      sub_404170(a1: *v14 + v6 + 80, a2: v20, a3: 1);
      v21 = *(_DWORD *)(sub_40B5E0() + 8) + v8 + 70;
      v15 = (_DWORD *)sub_40B5E0();
      sub_404170(a1: *v15 + v6 + 30, a2: v21, a3: 1);
      return sub_413610(a1: 7);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 44) == 210 )
      {
        sub_4093E0(a1: *(_DWORD *)(a1 + 32) + 18, a2: v22 + 470, a3: 0);
        sub_413610(a1: 6);
      }
      if ( *(_DWORD *)(a1 + 44) == 215 )
      {
        sub_4093E0(a1: *(_DWORD *)(a1 + 32) + 18, a2: *(_DWORD *)v2 + 470, a3: 0);
        sub_413610(a1: 6);
      }
      if ( *(_DWORD *)(a1 + 44) == 220 )
      {
        sub_4093E0(a1: *(_DWORD *)(a1 + 32) + 18, a2: *(_DWORD *)v2 + 470, a3: 0);
        sub_413610(a1: 6);
      }
      v9 = sub_411780();
      return (*(int (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v9 + 12))(
               a1: v9,
               a2: 57,
               a3: v6,
               a4: v8,
               a5: 100,
               a6: 100,
               a7: 0,
               a8: 0);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;
}