int sub_40F420()
{
  int v0; // esi
  int v1; // edi
  int v2; // eax
  bool v3; // sf
  int v4; // ebp
  int v5; // eax
  void *v6; // edi
  int v7; // ebx
  int v8; // ecx
  int v9; // ecx
  int *i; // eax
  int result; // eax
  int v12; // esi
  int v13; // esi
  int v14; // eax
  int v15; // esi
  int v16; // [esp+0h] [ebp-8h] BYREF
  int v17; // [esp+4h] [ebp-4h]

  sub_412090();
  if ( (unsigned __int8)sub_412150(a1: 6) != 0 )
  {
    LOBYTE(v17) = 6;
    v16 = dword_41F6AC;
    sub_4103D0(a1: dword_41F7BC, a2: 1, a3: &v16);
  }
  if ( (unsigned __int8)sub_412150(a1: 7) != 0 )
  {
    LOBYTE(v17) = 7;
    v16 = dword_41F6AC;
    sub_4103D0(a1: dword_41F7BC, a2: 1, a3: &v16);
  }
  if ( (unsigned __int8)sub_412150(a1: 5) != 0 )
  {
    LOBYTE(v17) = 5;
    v16 = dword_41F6AC;
    sub_4103D0(a1: dword_41F7BC, a2: 1, a3: &v16);
  }
  if ( (unsigned __int8)sub_412150(a1: 8) != 0 )
  {
    LOBYTE(v17) = 8;
    v16 = dword_41F6AC;
    sub_4103D0(a1: dword_41F7BC, a2: 1, a3: &v16);
  }
  if ( (unsigned __int8)sub_412150(a1: 2) != 0 )
  {
    LOBYTE(v17) = 2;
    v16 = dword_41F6AC;
    sub_4103D0(a1: dword_41F7BC, a2: 1, a3: &v16);
  }
  if ( (unsigned __int8)sub_412150(a1: 4) != 0 )
  {
    LOBYTE(v17) = 4;
    v16 = dword_41F6AC;
    sub_4103D0(a1: dword_41F7BC, a2: 1, a3: &v16);
  }
  if ( (unsigned __int8)sub_412150(a1: 9) != 0 )
  {
    v16 = dword_41F6AC;
    LOBYTE(v17) = 9;
    v0 = dword_41F7BC;
    if ( (dword_41F7C0 - dword_41F7BC) >> 3 != 0 )
    {
      sub_410620(a1: dword_41F7BC, a2: dword_41F7BC, a3: dword_41F7BC + 8);
      sub_410660(a1: dword_41F7BC, a2: 1 - ((dword_41F7BC - v0) >> 3), a3: &v16);
      v9 = dword_41F7BC;
      for ( i = (int *)v0; i != (int *)v9; i += 2 )
      {
        *i = v16;
        i[1] = v17;
      }
      dword_41F7BC += 8;
    }
    else
    {
      if ( Block == nullptr || (unsigned int)(v1 = (dword_41F7BC - (int)Block) >> 3) <= 1 )
        v1 = 1;
      v2 = sub_4103A0(a1: &unk_41F7B4);
      v3 = v1 + v2 < 0;
      v4 = v1 + v2;
      v5 = v1 + v2;
      if ( v3 )
        v5 = 0;
      v6 = operator new(Size: 8 * v5);
      v7 = sub_410620(a1: Block, a2: v0, a3: v6);
      sub_410660(a1: v7, a2: 1, a3: &v16);
      sub_410620(a1: v0, a2: dword_41F7BC, a3: v7 + 8);
      nullsub_2(a1: Block, a2: dword_41F7BC);
      operator delete(Block: Block);
      dword_41F7C0 = (int)v6 + 8 * v4;
      v8 = (int)v6 + 8 * sub_4103A0(a1: &unk_41F7B4) + 8;
      Block = v6;
      dword_41F7BC = v8;
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
    dword_41F6E4 = sub_410100();
    return sub_40B450();
  }
  else
  {
    if ( byte_41F6B1 == 0 && ++dword_41F6B4 > 45 )
    {
      byte_41F6B1 = 1;
      dword_41F6B4 = 0;
      v12 = dword_41F6A8 / 600;
      v13 = rand() % (v12 + 1) + v12 + 1;
      if ( v13 > 100 )
        v13 = 100;
      v14 = rand();
      v15 = sub_401340(a1: dword_41F6A8 / 1500 + 1, a2: v13, a3: v14 % 3, a4: 6, a5: 3, a6: 1);
      sub_406840(a1: dword_41F6CC, a2: v15);
      dword_41F6C8 = v15;
    }
    result = sub_412180(a1: 10);
    if ( (_BYTE)result != 0 )
      return sub_4108E0();
  }
  return result;
}