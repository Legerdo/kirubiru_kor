int sub_40CA00()
{
  int v0; // esi
  FILE *v1; // eax
  FILE *v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // ebp
  int v8; // eax
  int i; // ebx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int j; // ebp
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int k; // ebp
  int v20; // ecx
  int v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  bool v27; // cc
  _DWORD *v29; // [esp+100h] [ebp-1Ch]
  int v30; // [esp+104h] [ebp-18h]
  CHAR FileName[20]; // [esp+108h] [ebp-14h] BYREF

  if ( dword_41F84C == 0 )
  {
    v0 = 1;
    dword_41F84C = 1;
    byte_41F850 = 0;
    sub_4100B0(Buffer: &unk_41F6F0);
    do
    {
      wsprintfA(a1: FileName, a2: "save/replay%d.rep", &byte_41F7A0[11 - (_DWORD)&unk_41F7A1 + v0]);
      v1 = fopen(FileName, Mode: Mode);
      if ( v1 != nullptr )
      {
        byte_41F7A0[v0] = 1;
        fclose(Stream: v1);
      }
      else
      {
        byte_41F7A0[v0] = 0;
      }
      ++v0;
    }
    while ( v0 < 11 );
    v2 = fopen(FileName: aSaveEndlessSco, Mode: Mode);
    if ( v2 != nullptr )
    {
      byte_41F850 = 1;
      fclose(Stream: v2);
    }
  }
  sub_412090();
  if ( (unsigned __int8)sub_412180(a1: 1) == 0 )
  {
    if ( (unsigned __int8)sub_412180(a1: 3) != 0 )
    {
      ++dword_41F824;
      sub_413610(a1: 3);
      v3 = dword_41F824;
      if ( dword_41F824 > 10 )
      {
        dword_41F824 = 0;
        goto LABEL_16;
      }
      if ( dword_41F824 <= 0 )
        goto LABEL_16;
      while ( byte_41F7A0[v3] == 0 )
      {
        if ( ++v3 > 10 )
        {
          dword_41F824 = 0;
          goto LABEL_16;
        }
        if ( v3 <= 0 )
          goto LABEL_15;
      }
      goto LABEL_15;
    }
    if ( (unsigned __int8)sub_412180(a1: 2) == 0 )
    {
      if ( (unsigned __int8)sub_412180(a1: 4) == 0 )
      {
        if ( (unsigned __int8)sub_412180(a1: 9) != 0 )
        {
          if ( dword_41F824 != 0 )
          {
            sub_412B90(lpMultiByteStr: aData000Mid, a2: 0);
            sub_412D80(a1: 0, a2: 31488, a3: 238848);
            sub_412CB0(a1: 0);
            sub_40D410();
            sub_412950();
            sub_412870();
            sub_40E750();
            sub_40FB90(a1: dword_41F824 + 10);
            sub_413F09(a1: dword_41F7B0);
            dword_41F798 = 6;
            dword_41F79C = sub_40EF60;
          }
          else
          {
            dword_41F798 = 1;
            dword_41F79C = sub_40C080;
          }
          sub_413610(a1: 4);
          dword_41F84C = 0;
        }
        else if ( (unsigned __int8)sub_412180(a1: 10) != 0 )
        {
          sub_4108E0();
        }
        goto LABEL_16;
      }
      if ( byte_41F850 != 0 )
      {
        sub_413610(a1: 3);
        dword_41F798 = 11;
        dword_41F79C = sub_40CF10;
        goto LABEL_16;
      }
    }
    sub_413610(a1: 3);
    dword_41F798 = 9;
    dword_41F79C = sub_40C4A0;
    goto LABEL_16;
  }
  --dword_41F824;
  sub_413610(a1: 3);
  v3 = dword_41F824;
  if ( dword_41F824 < 0 )
  {
    v3 = 10;
    dword_41F824 = 10;
    do
    {
LABEL_13:
      if ( byte_41F7A0[v3] != 0 )
        break;
      --v3;
    }
    while ( v3 > 0 );
LABEL_15:
    dword_41F824 = v3;
    goto LABEL_16;
  }
  if ( dword_41F824 > 0 )
    goto LABEL_13;
LABEL_16:
  v4 = sub_411780();
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 16))(a1: v4, a2: 3176598);
  v5 = sub_411780();
  (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, int))(*(_DWORD *)v5 + 12))(
    a1: v5,
    a2: 30,
    a3: 200,
    a4: 20,
    a5: 240,
    a6: 90,
    a7: 0,
    a8: 90);
  v30 = 1;
  v6 = 126;
  v29 = &unk_41F6F4;
  do
  {
    v7 = 1;
    v8 = sub_411780();
    (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v8 + 12))(
      a1: v8,
      a2: 34,
      a3: 80,
      a4: v6,
      a5: 32,
      a6: 32,
      a7: 0,
      a8: 0);
    for ( i = 60; i > 20; i -= 20 )
    {
      if ( v30 / v7 > 0 || i == 60 )
      {
        v10 = sub_411780();
        (*(void (__thiscall **)(int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v10 + 12))(
          a1: v10,
          a2: 31,
          a3: i,
          a4: v6 + 4,
          a5: 20,
          a6: 24,
          a7: 20 * (v30 / v7 % 10),
          a8: 0);
      }
      v7 *= 10;
    }
    v11 = 1;
    v12 = sub_411780();
    (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v12 + 12))(
      a1: v12,
      a2: 33,
      a3: 210,
      a4: v6,
      a5: 64,
      a6: 32,
      a7: 0,
      a8: 0);
    for ( j = 190; j > 130; j -= 20 )
    {
      v14 = *(v29 - 1) / v11;
      v15 = v14 % 10;
      if ( v14 > 0 || j == 190 )
      {
        v16 = sub_411780();
        (*(void (__thiscall **)(int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v16 + 12))(
          a1: v16,
          a2: 31,
          a3: j,
          a4: v6 + 4,
          a5: 20,
          a6: 24,
          a7: 20 * v15,
          a8: 0);
      }
      v11 *= 10;
    }
    v17 = 1;
    v18 = sub_411780();
    (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v18 + 12))(
      a1: v18,
      a2: 32,
      a3: 460,
      a4: v6,
      a5: 32,
      a6: 32,
      a7: 0,
      a8: 0);
    for ( k = 440; k > 280; k -= 20 )
    {
      v20 = *v29 / v17;
      v21 = v20 % 10;
      if ( v20 > 0 || k == 440 )
      {
        v22 = sub_411780();
        (*(void (__thiscall **)(int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v22 + 12))(
          a1: v22,
          a2: 31,
          a3: k,
          a4: v6 + 4,
          a5: 20,
          a6: 24,
          a7: 20 * v21,
          a8: 0);
      }
      v17 *= 10;
    }
    if ( dword_41F824 != 0 )
    {
      v24 = sub_411780();
      (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v24 + 12))(
        a1: v24,
        a2: 38,
        a3: 520,
        a4: 50,
        a5: 96,
        a6: 50,
        a7: 0,
        a8: 0);
    }
    else
    {
      v23 = sub_411780();
      (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v23 + 12))(
        a1: v23,
        a2: 39,
        a3: 520,
        a4: 50,
        a5: 96,
        a6: 50,
        a7: 0,
        a8: 0);
    }
    if ( byte_41F7A0[v30] != 0 )
    {
      if ( v30 == dword_41F824 )
      {
        v25 = sub_411780();
        (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v25 + 12))(
          a1: v25,
          a2: 37,
          a3: 520,
          a4: v6,
          a5: 96,
          a6: 32,
          a7: 0,
          a8: 0);
      }
      else
      {
        v26 = sub_411780();
        (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v26 + 12))(
          a1: v26,
          a2: 36,
          a3: 520,
          a4: v6,
          a5: 96,
          a6: 32,
          a7: 0,
          a8: 0);
      }
    }
    v6 += 32;
    v27 = (int)(v29 + 2) < (int)&unk_41F744;
    v29 += 2;
    ++v30;
  }
  while ( v27 );
  return sub_412870();
}