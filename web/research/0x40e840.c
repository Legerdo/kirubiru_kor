int sub_40E840()
{
  int v0; // esi
  int v1; // edi
  int v2; // eax
  bool v3; // sf
  int v4; // ebp
  int v5; // eax
  void *v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int *i; // eax
  int v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  void *v16; // edi
  int v17; // ebx
  int v18; // ecx
  int v19; // ecx
  int *j; // eax
  int result; // eax
  int v22; // esi
  int v23; // [esp+0h] [ebp-8h] BYREF
  int v24; // [esp+4h] [ebp-4h]

  sub_412090();
  if ( (unsigned __int8)sub_412150(a1: 6) != 0 )
  {
    LOBYTE(v24) = 6;
    v23 = dword_41F6AC;
    sub_4103D0(a1: dword_41F7BC, a2: 1, a3: &v23);
  }
  if ( (unsigned __int8)sub_412150(a1: 7) != 0 )
  {
    LOBYTE(v24) = 7;
    v23 = dword_41F6AC;
    sub_4103D0(a1: dword_41F7BC, a2: 1, a3: &v23);
  }
  if ( (unsigned __int8)sub_412150(a1: 5) != 0 )
  {
    LOBYTE(v24) = 5;
    v23 = dword_41F6AC;
    sub_4103D0(a1: dword_41F7BC, a2: 1, a3: &v23);
  }
  if ( (unsigned __int8)sub_412150(a1: 8) != 0 )
  {
    LOBYTE(v24) = 8;
    v23 = dword_41F6AC;
    sub_4103D0(a1: dword_41F7BC, a2: 1, a3: &v23);
  }
  if ( (unsigned __int8)sub_412150(a1: 2) != 0 )
  {
    LOBYTE(v24) = 2;
    v23 = dword_41F6AC;
    sub_4103D0(a1: dword_41F7BC, a2: 1, a3: &v23);
  }
  if ( (unsigned __int8)sub_412150(a1: 4) != 0 )
  {
    v23 = dword_41F6AC;
    LOBYTE(v24) = 4;
    v0 = dword_41F7BC;
    if ( (dword_41F7C0 - dword_41F7BC) >> 3 != 0 )
    {
      sub_410620(a1: dword_41F7BC, a2: dword_41F7BC, a3: dword_41F7BC + 8);
      sub_410660(a1: dword_41F7BC, a2: 1 - ((dword_41F7BC - v0) >> 3), a3: &v23);
      v9 = dword_41F7BC;
      for ( i = (int *)v0; i != (int *)v9; i += 2 )
      {
        *i = v23;
        i[1] = v24;
      }
      dword_41F7BC += 8;
    }
    else
    {
      if ( Block != nullptr && (unsigned int)((dword_41F7BC - (int)Block) >> 3) > 1 )
        v1 = sub_4103A0(a1: &unk_41F7B4);
      else
        v1 = 1;
      v2 = sub_4103A0(a1: &unk_41F7B4);
      v3 = v1 + v2 < 0;
      v4 = v1 + v2;
      v5 = v1 + v2;
      if ( v3 )
        v5 = 0;
      v6 = operator new(Size: 8 * v5);
      v7 = sub_410620(a1: Block, a2: v0, a3: v6);
      sub_410660(a1: v7, a2: 1, a3: &v23);
      sub_410620(a1: v0, a2: dword_41F7BC, a3: v7 + 8);
      nullsub_2(a1: Block, a2: dword_41F7BC);
      operator delete(Block: Block);
      dword_41F7C0 = (int)v6 + 8 * v4;
      v8 = sub_4103A0(a1: &unk_41F7B4);
      Block = v6;
      dword_41F7BC = (int)v6 + 8 * v8 + 8;
    }
  }
  if ( (unsigned __int8)sub_412150(a1: 9) != 0 )
  {
    v23 = dword_41F6AC;
    LOBYTE(v24) = 9;
    v11 = dword_41F7BC;
    if ( (dword_41F7C0 - dword_41F7BC) >> 3 != 0 )
    {
      sub_410620(a1: dword_41F7BC, a2: dword_41F7BC, a3: dword_41F7BC + 8);
      sub_410660(a1: dword_41F7BC, a2: 1 - ((dword_41F7BC - v11) >> 3), a3: &v23);
      v19 = dword_41F7BC;
      for ( j = (int *)v11; j != (int *)v19; j += 2 )
      {
        *j = v23;
        j[1] = v24;
      }
      dword_41F7BC += 8;
    }
    else
    {
      if ( Block != nullptr && (unsigned int)((dword_41F7BC - (int)Block) >> 3) > 1 )
        v12 = sub_4103A0(a1: &unk_41F7B4);
      else
        v12 = 1;
      v13 = sub_4103A0(a1: &unk_41F7B4);
      v3 = v12 + v13 < 0;
      v14 = v12 + v13;
      v15 = v12 + v13;
      if ( v3 )
        v15 = 0;
      v16 = operator new(Size: 8 * v15);
      v17 = sub_410620(a1: Block, a2: v11, a3: v16);
      sub_410660(a1: v17, a2: 1, a3: &v23);
      sub_410620(a1: v11, a2: dword_41F7BC, a3: v17 + 8);
      nullsub_2(a1: Block, a2: dword_41F7BC);
      operator delete(Block: Block);
      dword_41F7C0 = (int)v16 + 8 * v14;
      v18 = (int)v16 + 8 * sub_4103A0(a1: &unk_41F7B4) + 8;
      Block = v16;
      dword_41F7BC = v18;
    }
  }
  sub_412870();
  ++dword_41F6AC;
  if ( *(_DWORD *)(dword_41F6CC + 48) == 0 )
    ++dword_41F6A8;
  if ( byte_41F6B0 != 0 )
  {
    dword_41F798 = 8;
    dword_41F79C = (int (*)(void))sub_40DF30;
    sub_412950();
    sub_412870();
    sub_412D20(a1: 0);
    dword_41F6E4 = sub_40FF80();
    sub_40B450();
    *(_DWORD *)Buffer += dword_41F6AC / 60;
    result = *(_DWORD *)Buffer;
    if ( *(int *)Buffer > 28800 && *(int *)dword_41F6DC <= 1 )
      *(_DWORD *)dword_41F6DC = 2;
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
          v22 = sub_403540();
          sub_404300(a1: dword_41F6CC, a2: v22);
          sub_408780(a1: 0);
          goto LABEL_56;
        case 1:
          v22 = sub_403A30();
          sub_4049A0(a1: dword_41F6CC, a2: v22);
          sub_408780(a1: 1);
          goto LABEL_56;
        case 2:
          v22 = sub_408330();
          sub_408780(a1: 2);
          goto LABEL_56;
        case 3:
          v22 = sub_407C50();
          sub_408780(a1: 3);
          goto LABEL_56;
        case 4:
          sub_40B350();
          sub_408F50(FileName: aData023Txt);
          *(_DWORD *)(dword_41F6CC + 28) = sub_402EE0;
          goto LABEL_55;
        case 5:
          dword_41F69C = 0;
          *(_DWORD *)(dword_41F6CC + 28) = sub_401FB0;
          *(_DWORD *)(dword_41F6CC + 44) = 3;
          dword_41F6A4 = 0;
          sub_408DF0();
          sub_40B450();
          v22 = sub_409540();
          sub_406F00(a1: dword_41F6CC, a2: v22);
          sub_408780(a1: 4);
          goto LABEL_56;
        case 6:
          sub_402FE0();
          *(_DWORD *)(dword_41F6CC + 28) = sub_402EE0;
          sub_408880();
          goto LABEL_55;
        case 7:
          sub_4129B0(a1: 127);
          sub_40B350();
          sub_408F50(FileName: aData024Txt);
          goto LABEL_55;
        case 8:
          if ( *(int *)dword_41F6DC <= 1 )
            *(_DWORD *)dword_41F6DC = 2;
          byte_41F6B0 = 1;
        default:
LABEL_55:
          v22 = v23;
LABEL_56:
          dword_41F6C8 = v22;
          ++dword_41F6BC;
          break;
      }
    }
    result = sub_412180(a1: 10);
    if ( (_BYTE)result != 0 )
      return sub_4108E0();
  }
  return result;
}