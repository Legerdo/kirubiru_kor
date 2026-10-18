int __cdecl sub_401FB0(int a1)
{
  double v1; // st7
  double v2; // st7
  double v3; // st7
  int v4; // edi
  double v5; // st7
  int v6; // ecx
  int v7; // edi
  int v8; // esi
  int v9; // eax

  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v1 = *(float *)(a1 + 56) + 0.25;
    *(float *)(a1 + 56) = v1;
    if ( v1 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    if ( (unsigned __int8)sub_412180(a1: 5) != 0 )
    {
      *(_DWORD *)(a1 + 80) = 1;
      *(_DWORD *)(a1 + 76) = 0;
      sub_402FD0(a1: &dword_41F468);
      *(_DWORD *)(a1 + 28) = sub_402770;
    }
    if ( (unsigned __int8)sub_412150(a1: 7) != 0 && *(float *)(a1 + 56) > 10.0 )
    {
      *(_DWORD *)(a1 + 80) = 7;
      *(_DWORD *)(a1 + 28) = sub_402450;
    }
    else if ( (unsigned __int8)sub_412150(a1: 6) != 0 )
    {
      v2 = (double)*(int *)(a1 + 32);
      *(_DWORD *)(a1 + 80) = 2;
      *(_DWORD *)(a1 + 76) = 1;
      *(_DWORD *)(a1 + 68) = -1050673152;
      *(float *)(a1 + 60) = v2;
      *(float *)(a1 + 64) = (float)*(int *)(a1 + 36);
      sub_402FD0(a1: &dword_41F4D0);
      *(_DWORD *)(a1 + 28) = sub_402820;
    }
    else if ( *(int *)(a1 + 40) > 0 && (unsigned __int8)sub_412180(a1: 2) != 0 )
    {
      v3 = (double)*(int *)(a1 + 32);
      v4 = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 80) = 11;
      *(_DWORD *)(a1 + 72) = -1065353216;
      *(float *)(a1 + 60) = v3;
      *(_DWORD *)(a1 + 40) = v4 - 1;
      *(_DWORD *)(a1 + 28) = sub_4022D0;
      sub_408230(a1: *(_DWORD *)(a1 + 32) + 25, a2: *(_DWORD *)(a1 + 36) + 60);
      sub_413610(a1: 8);
    }
    else if ( *(int *)(a1 + 40) < 2 && (unsigned __int8)sub_412180(a1: 4) != 0 )
    {
      v5 = (double)*(int *)(a1 + 32);
      v6 = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 80) = 11;
      *(_DWORD *)(a1 + 72) = 1082130432;
      *(float *)(a1 + 60) = v5;
      *(_DWORD *)(a1 + 40) = v6 + 1;
      *(_DWORD *)(a1 + 28) = sub_402390;
      sub_408230(a1: *(_DWORD *)(a1 + 32) + 25, a2: *(_DWORD *)(a1 + 36) + 60);
      sub_413610(a1: 8);
    }
    else if ( (unsigned __int8)sub_412150(a1: 8) != 0 && *(int *)(sub_40B5E0() + 28) >= 300 )
    {
      *(_DWORD *)(sub_40B5E0() + 28) = 0;
      *(_DWORD *)(a1 + 80) = 5;
      *(_DWORD *)(a1 + 76) = 3;
      *(_DWORD *)(a1 + 48) = 60;
      sub_402FD0(a1: &dword_41F5A0);
      *(_DWORD *)(a1 + 28) = sub_402B60;
      sub_413610(a1: 11);
    }
  }
  v7 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0();
  v8 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8);
  v9 = sub_411780();
  return (*(int (__thiscall **)(int, _DWORD, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v9 + 12))(
           a1: v9,
           a2: 0,
           a3: v7,
           a4: v8,
           a5: 128,
           a6: 128,
           a7: 0,
           a8: 0);
}