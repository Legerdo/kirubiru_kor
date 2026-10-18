int sub_40EF60()
{
  int v1; // eax
  _DWORD *v2; // ecx
  int v3; // edx
  int *v4; // eax
  int v5; // esi
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // [esp+8h] [ebp-404h]
  _BYTE v10[1024]; // [esp+Ch] [ebp-400h] BYREF

  sub_412090();
  ++dword_41F864;
  if ( (unsigned __int8)sub_412150(a1: 9) != 0 && dword_41F864 > 120 )
    byte_41F868 = 1;
  if ( (unsigned __int8)sub_412150(a1: 9) == 0 && byte_41F868 != 0 )
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
    v9 = v3 - 8;
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
    byte_41F868 = 0;
    dword_41F864 = 0;
    sub_40C420();
    dword_41F798 = 10;
    dword_41F79C = sub_40CA00;
    sub_411780();
    sub_411760(a1: v10);
    v8 = sub_411780();
    return (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 28))(a1: v8, a2: v10);
  }
  else
  {
    if ( byte_41F6B1 == 0 && ++dword_41F6B4 > 45 )
    {
      byte_41F6B1 = 1;
      dword_41F6B4 = 0;
      switch ( dword_41F6BC )
      {
        case 0:
          v6 = sub_403540();
          sub_404300(a1: dword_41F6CC, a2: v6);
          sub_408780(a1: 0);
          goto LABEL_34;
        case 1:
          v6 = sub_403A30();
          sub_4049A0(a1: dword_41F6CC, a2: v6);
          sub_408780(a1: 1);
          goto LABEL_34;
        case 2:
          v6 = sub_408330();
          sub_408780(a1: 2);
          goto LABEL_34;
        case 3:
          v6 = sub_407C50();
          sub_408780(a1: 3);
          goto LABEL_34;
        case 4:
          sub_40B350();
          sub_408F50(FileName: aData023Txt);
          *(_DWORD *)(dword_41F6CC + 28) = sub_402EE0;
          goto LABEL_33;
        case 5:
          dword_41F69C = 0;
          *(_DWORD *)(dword_41F6CC + 28) = sub_401FB0;
          *(_DWORD *)(dword_41F6CC + 44) = 3;
          sub_408DF0();
          sub_40B450();
          v6 = sub_409540();
          sub_406F00(a1: dword_41F6CC, a2: v6);
          sub_408780(a1: 4);
          goto LABEL_34;
        case 6:
          sub_402FE0();
          *(_DWORD *)(dword_41F6CC + 28) = sub_402EE0;
          sub_408880();
          goto LABEL_33;
        case 7:
          sub_4129B0(a1: 127);
          sub_40B350();
          sub_408F50(FileName: aData024Txt);
          goto LABEL_33;
        case 8:
          byte_41F6B0 = 1;
        default:
LABEL_33:
          v6 = v9;
LABEL_34:
          dword_41F6C8 = v6;
          ++dword_41F6BC;
          break;
      }
    }
    v7 = sub_411780();
    return (*(int (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v7 + 12))(
             a1: v7,
             a2: 35,
             a3: 380,
             a4: 20,
             a5: 250,
             a6: 60,
             a7: 0,
             a8: 0);
  }
}