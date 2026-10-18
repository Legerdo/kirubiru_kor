int sub_40D560()
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
  int v18; // eax
  int v19; // ecx
  int *j; // eax
  int v21; // esi
  int v22; // edi
  int v23; // eax
  int v24; // ebp
  int v25; // eax
  void *v26; // edi
  int v27; // ebx
  int v28; // ecx
  int v29; // ecx
  int *k; // eax
  int result; // eax
  int v32; // esi
  int v33; // esi
  int v34; // eax
  int v35; // esi
  int v36; // [esp+0h] [ebp-8h] BYREF
  int v37; // [esp+4h] [ebp-4h]

  sub_412090();
  if ( (unsigned __int8)sub_412150(a1: 6) != 0 )
  {
    LOBYTE(v37) = 6;
    v36 = dword_41F6AC;
    sub_4103D0(a1: dword_41F7BC, a2: 1, a3: &v36);
  }
  if ( (unsigned __int8)sub_412150(a1: 7) != 0 )
  {
    LOBYTE(v37) = 7;
    v36 = dword_41F6AC;
    sub_4103D0(a1: dword_41F7BC, a2: 1, a3: &v36);
  }
  if ( (unsigned __int8)sub_412150(a1: 5) != 0 )
  {
    LOBYTE(v37) = 5;
    v36 = dword_41F6AC;
    sub_4103D0(a1: dword_41F7BC, a2: 1, a3: &v36);
  }
  if ( (unsigned __int8)sub_412150(a1: 8) != 0 )
  {
    LOBYTE(v37) = 8;
    v36 = dword_41F6AC;
    sub_4103D0(a1: dword_41F7BC, a2: 1, a3: &v36);
  }
  if ( (unsigned __int8)sub_412150(a1: 2) != 0 )
  {
    v0 = dword_41F7BC;
    LOBYTE(v37) = 2;
    v36 = dword_41F6AC;
    if ( (dword_41F7C0 - dword_41F7BC) >> 3 != 0 )
    {
      sub_410620(a1: dword_41F7BC, a2: dword_41F7BC, a3: dword_41F7BC + 8);
      sub_410660(a1: dword_41F7BC, a2: 1 - ((dword_41F7BC - v0) >> 3), a3: &v36);
      v9 = dword_41F7BC;
      for ( i = (int *)v0; i != (int *)v9; i += 2 )
      {
        *i = v36;
        i[1] = v37;
      }
      dword_41F7BC += 8;
    }
    else
    {
      if ( (unsigned int)sub_4103A0(a1: &unk_41F7B4) <= 1 )
        v1 = 1;
      else
        v1 = sub_4103A0(a1: &unk_41F7B4);
      v2 = sub_4103A0(a1: &unk_41F7B4);
      v3 = v1 + v2 < 0;
      v4 = v1 + v2;
      v5 = v1 + v2;
      if ( v3 )
        v5 = 0;
      v6 = operator new(Size: 8 * v5);
      v7 = sub_410620(a1: Block, a2: v0, a3: v6);
      sub_410660(a1: v7, a2: 1, a3: &v36);
      sub_410620(a1: v0, a2: dword_41F7BC, a3: v7 + 8);
      nullsub_2(a1: Block, a2: dword_41F7BC);
      operator delete(Block: Block);
      dword_41F7C0 = (int)v6 + 8 * v4;
      v8 = sub_4103A0(a1: &unk_41F7B4);
      Block = v6;
      dword_41F7BC = (int)v6 + 8 * v8 + 8;
    }
  }
  if ( (unsigned __int8)sub_412150(a1: 4) != 0 )
  {
    v36 = dword_41F6AC;
    LOBYTE(v37) = 4;
    v11 = dword_41F7BC;
    if ( (dword_41F7C0 - dword_41F7BC) >> 3 != 0 )
    {
      sub_410620(a1: dword_41F7BC, a2: dword_41F7BC, a3: dword_41F7BC + 8);
      sub_410660(a1: dword_41F7BC, a2: 1 - ((dword_41F7BC - v11) >> 3), a3: &v36);
      v19 = dword_41F7BC;
      for ( j = (int *)v11; j != (int *)v19; j += 2 )
      {
        *j = v36;
        j[1] = v37;
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
      sub_410660(a1: v17, a2: 1, a3: &v36);
      sub_410620(a1: v11, a2: dword_41F7BC, a3: v17 + 8);
      nullsub_2(a1: Block, a2: dword_41F7BC);
      operator delete(Block: Block);
      dword_41F7C0 = (int)v16 + 8 * v14;
      v18 = sub_4103A0(a1: &unk_41F7B4);
      Block = v16;
      dword_41F7BC = (int)v16 + 8 * v18 + 8;
    }
  }
  if ( (unsigned __int8)sub_412150(a1: 9) != 0 )
  {
    v36 = dword_41F6AC;
    LOBYTE(v37) = 9;
    v21 = dword_41F7BC;
    if ( (dword_41F7C0 - dword_41F7BC) >> 3 != 0 )
    {
      sub_410620(a1: dword_41F7BC, a2: dword_41F7BC, a3: dword_41F7BC + 8);
      sub_410660(a1: dword_41F7BC, a2: 1 - ((dword_41F7BC - v21) >> 3), a3: &v36);
      v29 = dword_41F7BC;
      for ( k = (int *)v21; k != (int *)v29; k += 2 )
      {
        *k = v36;
        k[1] = v37;
      }
      dword_41F7BC += 8;
    }
    else
    {
      if ( Block == nullptr || (unsigned int)(v22 = (dword_41F7BC - (int)Block) >> 3) <= 1 )
        v22 = 1;
      v23 = sub_4103A0(a1: &unk_41F7B4);
      v3 = v22 + v23 < 0;
      v24 = v22 + v23;
      v25 = v22 + v23;
      if ( v3 )
        v25 = 0;
      v26 = operator new(Size: 8 * v25);
      v27 = sub_410620(a1: Block, a2: v21, a3: v26);
      sub_410660(a1: v27, a2: 1, a3: &v36);
      sub_410620(a1: v21, a2: dword_41F7BC, a3: v27 + 8);
      nullsub_2(a1: Block, a2: dword_41F7BC);
      operator delete(Block: Block);
      dword_41F7C0 = (int)v26 + 8 * v24;
      v28 = (int)v26 + 8 * sub_4103A0(a1: &unk_41F7B4) + 8;
      Block = v26;
      dword_41F7BC = v28;
    }
  }
  sub_412870();
  ++dword_41F6AC;
  if ( *(_DWORD *)(dword_41F6CC + 48) == 0 )
    ++dword_41F6A8;
  if ( byte_41F6B0 != 0 )
  {
    dword_41F798 = 8;
    dword_41F79C = sub_40DF30;
    sub_412950();
    sub_412870();
    sub_412D20(a1: 0);
    dword_41F6E4 = sub_40FE10();
    sub_40B450();
    *(_DWORD *)Buffer += dword_41F6AC / 60;
    result = *(_DWORD *)Buffer;
    if ( *(int *)Buffer <= 14400 )
    {
      if ( *(int *)Buffer > 28800 && *(int *)dword_41F6DC <= 1 )
        *(_DWORD *)dword_41F6DC = 2;
    }
    else if ( *(_DWORD *)dword_41F6DC == 0 )
    {
      *(_DWORD *)dword_41F6DC = 1;
    }
  }
  else if ( dword_41F698 != 9999999 || byte_41F6B9 != 0 )
  {
    if ( byte_41F6BA != 0 )
    {
      if ( *(_DWORD *)dword_41F6DC == 0 )
        *(_DWORD *)dword_41F6DC = 1;
      byte_41F6BA = 0;
      sub_412D20(a1: 0);
      sub_412B90(lpMultiByteStr: aData000Mid, a2: 0);
      sub_412D80(a1: 0, a2: 31488, a3: 238848);
      sub_412CB0(a1: 0);
      sub_412950();
      sub_412870();
      sub_40E750();
      return sub_40B450();
    }
    else
    {
      if ( byte_41F6B1 == 0 && ++dword_41F6B4 > 45 )
      {
        byte_41F6B1 = 1;
        dword_41F6B4 = 0;
        switch ( dword_41F6BC )
        {
          case -1:
            v32 = dword_41F6A8 / 600;
            v33 = rand() % (v32 + 1) + v32 + 1;
            if ( v33 > 100 )
              v33 = 100;
            v34 = rand();
            v35 = sub_401340(a1: dword_41F6A8 / 1500 + 1, a2: v33, a3: v34 % 3, a4: 6, a5: 3, a6: 1);
            sub_406840(a1: dword_41F6CC, a2: v35);
            --dword_41F6BC;
            goto LABEL_77;
          case 0:
            v35 = sub_403540();
            sub_404300(a1: dword_41F6CC, a2: v35);
            sub_408780(a1: 0);
            goto LABEL_77;
          case 1:
            v35 = sub_403A30();
            sub_4049A0(a1: dword_41F6CC, a2: v35);
            sub_408780(a1: 1);
            goto LABEL_77;
          case 2:
            v35 = sub_408330();
            sub_408780(a1: 2);
            goto LABEL_77;
          case 3:
            v35 = sub_407C50();
            sub_408780(a1: 3);
            goto LABEL_77;
          case 4:
            sub_40B350();
            sub_408F50(FileName: aData023Txt);
            *(_DWORD *)(dword_41F6CC + 28) = sub_402EE0;
            goto LABEL_76;
          case 5:
            dword_41F69C = 0;
            *(_DWORD *)(dword_41F6CC + 28) = sub_401FB0;
            *(_DWORD *)(dword_41F6CC + 44) = 3;
            dword_41F6A4 = 0;
            sub_408DF0();
            sub_40B450();
            v35 = sub_409540();
            sub_406F00(a1: dword_41F6CC, a2: v35);
            sub_408780(a1: 4);
            goto LABEL_77;
          case 6:
            sub_402FE0();
            *(_DWORD *)(dword_41F6CC + 28) = sub_402EE0;
            sub_408880();
            goto LABEL_76;
          case 7:
            sub_4129B0(a1: 127);
            sub_40B350();
            sub_408F50(FileName: aData024Txt);
            goto LABEL_76;
          case 8:
            if ( *(int *)dword_41F6DC <= 1 )
              *(_DWORD *)dword_41F6DC = 2;
            byte_41F6B0 = 1;
          default:
LABEL_76:
            v35 = v36;
LABEL_77:
            dword_41F6C8 = v35;
            ++dword_41F6BC;
            break;
        }
      }
      result = sub_412180(a1: 10);
      if ( (_BYTE)result != 0 )
        return sub_4108E0();
    }
  }
  else
  {
    byte_41F6B9 = 1;
    return sub_403870();
  }
  return result;
}