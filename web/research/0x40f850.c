int sub_40F850()
{
  int v1; // eax
  _DWORD *v2; // ecx
  int v3; // edx
  int *v4; // eax
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  _BYTE v12[1024]; // [esp+4h] [ebp-400h] BYREF

  sub_412090();
  ++dword_41F86C;
  if ( (unsigned __int8)sub_412150(a1: 9) != 0 && dword_41F86C > 120 )
    byte_41F870 = 1;
  if ( (unsigned __int8)sub_412150(a1: 9) == 0 && byte_41F870 != 0 )
    byte_41F6B0 = 1;
  byte_41F6B8 = (unsigned __int8)sub_412150(a1: 11) != 0;
  if ( (unsigned __int8)sub_412180(a1: 10) != 0 )
    return sub_4108E0();
  sub_412130();
  v1 = dword_41F7BC;
  v2 = Block;
  while ( v2 != nullptr && (v1 - (int)v2) >> 3 != 0 && *v2 == dword_41F6AC )
  {
    sub_4121B0(a1: *((unsigned __int8 *)v2 + 4));
    v2 = Block;
    v3 = dword_41F7BC;
    v4 = (int *)((char *)Block + 8);
    if ( (char *)Block + 8 != (void *)dword_41F7BC )
    {
      do
      {
        v5 = *v4;
        v4 += 2;
        *v2 = v5;
        v2[1] = *(v4 - 1);
        v2 += 2;
      }
      while ( v4 != (int *)v3 );
      v3 = dword_41F7BC;
      v2 = Block;
    }
    v1 = v3 - 8;
    dword_41F7BC = v3 - 8;
  }
  sub_412870();
  ++dword_41F6AC;
  if ( *(_DWORD *)(dword_41F6CC + 48) == 0 )
    ++dword_41F6A8;
  if ( byte_41F6B0 != 0 || *(int *)(dword_41F6CC + 44) <= 0 )
  {
    sub_412950();
    sub_412870();
    sub_412D20(a1: 0);
    byte_41F870 = 0;
    dword_41F86C = 0;
    sub_40C420();
    dword_41F798 = 11;
    dword_41F79C = sub_40CF10;
    sub_411780();
    sub_411760(a1: v12);
    v11 = sub_411780();
    return (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v11 + 28))(a1: v11, a2: v12);
  }
  else
  {
    if ( byte_41F6B1 == 0 && ++dword_41F6B4 > 45 )
    {
      byte_41F6B1 = 1;
      dword_41F6B4 = 0;
      v6 = dword_41F6A8 / 600;
      v7 = rand() % (v6 + 1) + v6 + 1;
      if ( v7 > 100 )
        v7 = 100;
      v8 = rand();
      v9 = sub_401340(a1: dword_41F6A8 / 1500 + 1, a2: v7, a3: v8 % 3, a4: 6, a5: 3, a6: 1);
      sub_406840(a1: dword_41F6CC, a2: v9);
      dword_41F6C8 = v9;
    }
    v10 = sub_411780();
    return (*(int (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v10 + 12))(
             a1: v10,
             a2: 35,
             a3: 380,
             a4: 20,
             a5: 250,
             a6: 60,
             a7: 0,
             a8: 0);
  }
}