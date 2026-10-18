int sub_40C4A0()
{
  int v0; // esi
  FILE *v1; // eax
  FILE *v2; // eax
  FILE *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // ebp
  int v9; // eax
  int i; // ebx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int j; // ebp
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int k; // ebp
  int v21; // ecx
  int v22; // edi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  bool v28; // cc
  _DWORD *v30; // [esp+100h] [ebp-1Ch]
  int v31; // [esp+104h] [ebp-18h]
  CHAR FileName[20]; // [esp+108h] [ebp-14h] BYREF

  if ( dword_41F844 == 0 )
  {
    v0 = 1;
    dword_41F844 = 1;
    byte_41F848 = 0;
    byte_41F849 = 0;
    sub_40FF30(Buffer: &unk_41F740);
    do
    {
      wsprintfA(a1: FileName, a2: "save/replay%d.rep", v0);
      v1 = fopen(FileName, Mode: Mode);
      if ( v1 != nullptr )
      {
        byte_41F818[v0] = 1;
        fclose(Stream: v1);
      }
      else
      {
        byte_41F818[v0] = 0;
      }
      ++v0;
    }
    while ( v0 < 11 );
    v2 = fopen(FileName: aSaveDainiScore, Mode: Mode);
    if ( v2 != nullptr )
    {
      byte_41F848 = 1;
      fclose(Stream: v2);
    }
    v3 = fopen(FileName: aSaveEndlessSco, Mode: Mode);
    if ( v3 != nullptr )
    {
      byte_41F849 = 1;
      fclose(Stream: v3);
    }
  }
  sub_412090();
  if ( (unsigned __int8)sub_412180(a1: 1) == 0 )
  {
    if ( (unsigned __int8)sub_412180(a1: 3) != 0 )
    {
      ++dword_41F790;
      sub_413610(a1: 3);
      v4 = dword_41F790;
      if ( dword_41F790 > 10 )
      {
        dword_41F790 = 0;
        goto LABEL_18;
      }
      if ( dword_41F790 <= 0 )
        goto LABEL_18;
      while ( byte_41F818[v4] == 0 )
      {
        if ( ++v4 > 10 )
        {
          dword_41F790 = 0;
          goto LABEL_18;
        }
        if ( v4 <= 0 )
          goto LABEL_17;
      }
      goto LABEL_17;
    }
    if ( (unsigned __int8)sub_412180(a1: 4) != 0 )
    {
      if ( byte_41F848 != 0 )
      {
LABEL_47:
        sub_413610(a1: 3);
        dword_41F798 = 10;
        dword_41F79C = sub_40CA00;
        goto LABEL_18;
      }
      if ( byte_41F849 == 0 )
        goto LABEL_18;
    }
    else
    {
      if ( (unsigned __int8)sub_412180(a1: 2) == 0 )
      {
        if ( (unsigned __int8)sub_412180(a1: 9) != 0 )
        {
          if ( dword_41F790 != 0 )
          {
            sub_412B90(lpMultiByteStr: MultiByteStr, a2: 0);
            sub_412D80(a1: 0, a2: 0, a3: 139000);
            sub_412CB0(a1: 0);
            sub_40D410();
            sub_40FB90(a1: dword_41F790);
            sub_413F09(a1: dword_41F7B0);
            dword_41F798 = 5;
            dword_41F79C = sub_40E2D0;
          }
          else
          {
            dword_41F798 = 1;
            dword_41F79C = sub_40C080;
          }
          sub_413610(a1: 4);
          dword_41F844 = 0;
        }
        else if ( (unsigned __int8)sub_412180(a1: 10) != 0 )
        {
          sub_4108E0();
        }
        goto LABEL_18;
      }
      if ( byte_41F849 == 0 )
      {
        if ( byte_41F848 == 0 )
          goto LABEL_18;
        goto LABEL_47;
      }
    }
    sub_413610(a1: 3);
    dword_41F798 = 11;
    dword_41F79C = sub_40CF10;
    goto LABEL_18;
  }
  --dword_41F790;
  sub_413610(a1: 3);
  v4 = dword_41F790;
  if ( dword_41F790 < 0 )
  {
    v4 = 10;
    dword_41F790 = 10;
    do
    {
LABEL_15:
      if ( byte_41F818[v4] != 0 )
        break;
      --v4;
    }
    while ( v4 > 0 );
LABEL_17:
    dword_41F790 = v4;
    goto LABEL_18;
  }
  if ( dword_41F790 > 0 )
    goto LABEL_15;
LABEL_18:
  v5 = sub_411780();
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 16))(a1: v5, a2: 3176598);
  v6 = sub_411780();
  (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v6 + 12))(
    a1: v6,
    a2: 30,
    a3: 200,
    a4: 20,
    a5: 240,
    a6: 90,
    a7: 0,
    a8: 0);
  v31 = 1;
  v7 = 126;
  v30 = &unk_41F744;
  do
  {
    v8 = 1;
    v9 = sub_411780();
    (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v9 + 12))(
      a1: v9,
      a2: 34,
      a3: 80,
      a4: v7,
      a5: 32,
      a6: 32,
      a7: 0,
      a8: 0);
    for ( i = 60; i > 20; i -= 20 )
    {
      if ( v31 / v8 > 0 || i == 60 )
      {
        v11 = sub_411780();
        (*(void (__thiscall **)(int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v11 + 12))(
          a1: v11,
          a2: 31,
          a3: i,
          a4: v7 + 4,
          a5: 20,
          a6: 24,
          a7: 20 * (v31 / v8 % 10),
          a8: 0);
      }
      v8 *= 10;
    }
    v12 = 1;
    v13 = sub_411780();
    (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v13 + 12))(
      a1: v13,
      a2: 33,
      a3: 210,
      a4: v7,
      a5: 64,
      a6: 32,
      a7: 0,
      a8: 0);
    for ( j = 190; j > 130; j -= 20 )
    {
      v15 = *(v30 - 1) / v12;
      v16 = v15 % 10;
      if ( v15 > 0 || j == 190 )
      {
        v17 = sub_411780();
        (*(void (__thiscall **)(int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v17 + 12))(
          a1: v17,
          a2: 31,
          a3: j,
          a4: v7 + 4,
          a5: 20,
          a6: 24,
          a7: 20 * v16,
          a8: 0);
      }
      v12 *= 10;
    }
    v18 = 1;
    v19 = sub_411780();
    (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v19 + 12))(
      a1: v19,
      a2: 32,
      a3: 460,
      a4: v7,
      a5: 32,
      a6: 32,
      a7: 0,
      a8: 0);
    for ( k = 440; k > 280; k -= 20 )
    {
      v21 = *v30 / v18;
      v22 = v21 % 10;
      if ( v21 > 0 || k == 440 )
      {
        v23 = sub_411780();
        (*(void (__thiscall **)(int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v23 + 12))(
          a1: v23,
          a2: 31,
          a3: k,
          a4: v7 + 4,
          a5: 20,
          a6: 24,
          a7: 20 * v22,
          a8: 0);
      }
      v18 *= 10;
    }
    if ( dword_41F790 != 0 )
    {
      v25 = sub_411780();
      (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v25 + 12))(
        a1: v25,
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
      v24 = sub_411780();
      (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v24 + 12))(
        a1: v24,
        a2: 39,
        a3: 520,
        a4: 50,
        a5: 96,
        a6: 50,
        a7: 0,
        a8: 0);
    }
    if ( byte_41F818[v31] != 0 )
    {
      if ( v31 == dword_41F790 )
      {
        v26 = sub_411780();
        (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v26 + 12))(
          a1: v26,
          a2: 37,
          a3: 520,
          a4: v7,
          a5: 96,
          a6: 32,
          a7: 0,
          a8: 0);
      }
      else
      {
        v27 = sub_411780();
        (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v27 + 12))(
          a1: v27,
          a2: 36,
          a3: 520,
          a4: v7,
          a5: 96,
          a6: 32,
          a7: 0,
          a8: 0);
      }
    }
    v7 += 32;
    v28 = (int)(v30 + 2) < (int)&unk_41F794;
    v30 += 2;
    ++v31;
  }
  while ( v28 );
  return sub_412870();
}