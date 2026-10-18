int sub_40C080()
{
  int result; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax

  if ( byte_41E058 != 0 )
  {
    byte_41E058 = 0;
    if ( *(_DWORD *)dword_41F6DC != 0 && dword_41F838 == 0 )
    {
      sub_4032A0(a1: 10, a2: 285);
      sub_4033F0(a1: 598, a2: 285);
    }
  }
  sub_412090();
  ++dword_41F840;
  if ( (unsigned __int8)sub_412180(a1: 1) != 0 )
  {
    dword_41F840 = 0;
    if ( dword_41F838 == 1 )
    {
      if ( *(_DWORD *)dword_41F6DC != 0 )
      {
        sub_4032A0(a1: 10, a2: 285);
        sub_4033F0(a1: 598, a2: 285);
      }
      sub_413610(a1: 3);
    }
    dword_41F838 = 0;
  }
  else if ( (unsigned __int8)sub_412180(a1: 3) != 0 )
  {
    dword_41F840 = 0;
    if ( dword_41F838 == 0 )
    {
      sub_412950();
      sub_413610(a1: 3);
    }
    dword_41F838 = 1;
  }
  else if ( (unsigned __int8)sub_412180(a1: 4) == 0 || dword_41F838 != 0 )
  {
    if ( (unsigned __int8)sub_412180(a1: 2) == 0 || dword_41F838 != 0 )
    {
      if ( (unsigned __int8)sub_412180(a1: 9) != 0 )
      {
        byte_41E058 = 1;
        dword_41F840 = 0;
        sub_413610(a1: 4);
        if ( dword_41F838 != 0 )
        {
          result = sub_40C420();
          dword_41F798 = 9;
          dword_41F79C = sub_40C4A0;
          return result;
        }
        if ( dword_41F83C != 0 )
        {
          if ( dword_41F83C == 1 )
          {
            sub_412B90(lpMultiByteStr: aData000Mid, a2: 0);
            sub_412D80(a1: 0, a2: 31488, a3: 238848);
            sub_412CB0(a1: 0);
            sub_40D410();
            sub_412950();
            sub_412870();
            sub_40E750();
            dword_41F798 = 3;
            dword_41F79C = sub_40E840;
            dword_41F7B0 = time(Time: nullptr);
            sub_413F09(a1: dword_41F7B0);
          }
          else if ( dword_41F83C == 2 )
          {
            sub_412B90(lpMultiByteStr: MultiByteStr, a2: 0);
            sub_412D80(a1: 0, a2: 0, a3: 139000);
            sub_412CB0(a1: 0);
            sub_40F2D0();
            dword_41F7B0 = time(Time: nullptr);
            sub_413F09(a1: dword_41F7B0);
          }
        }
        else
        {
          sub_412B90(lpMultiByteStr: MultiByteStr, a2: 0);
          sub_412D80(a1: 0, a2: 0, a3: 139000);
          sub_412CB0(a1: 0);
          sub_40D410();
          dword_41F7B0 = time(Time: nullptr);
          sub_413F09(a1: dword_41F7B0);
        }
      }
      else if ( (unsigned __int8)sub_412180(a1: 10) != 0 )
      {
        sub_4108E0();
      }
    }
    else if ( *(int *)dword_41F6DC > 0 )
    {
      dword_41F840 = 0;
      sub_413610(a1: 3);
      if ( --dword_41F83C < 0 )
      {
        if ( *(_DWORD *)dword_41F6DC == 2 )
        {
          dword_41F83C = 2;
        }
        else if ( *(_DWORD *)dword_41F6DC == 1 )
        {
          dword_41F83C = 1;
        }
      }
    }
  }
  else if ( *(_DWORD *)dword_41F6DC != 0 && dword_41F83C <= *(int *)dword_41F6DC )
  {
    dword_41F840 = 0;
    sub_413610(a1: 3);
    dword_41F83C = (dword_41F83C + 1) % (*(_DWORD *)dword_41F6DC + 1);
  }
  v1 = sub_411780();
  (*(void (__thiscall **)(int, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)v1 + 12))(
    a1: v1,
    a2: 12,
    a3: 0,
    a4: 0,
    a5: 640,
    a6: 480,
    a7: 0,
    a8: 0);
  v2 = sub_411780();
  (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v2 + 12))(
    a1: v2,
    a2: 16,
    a3: 90,
    a4: 85 * dword_41F838 + 280,
    a5: 84,
    a6: 66,
    a7: 0,
    a8: 0);
  if ( dword_41F83C == 1 )
  {
    v3 = sub_411780();
    (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v3 + 12))(
      a1: v3,
      a2: 53,
      a3: 186,
      a4: 260,
      a5: 220,
      a6: 80,
      a7: 0,
      a8: 0);
    return sub_412870();
  }
  else
  {
    if ( dword_41F83C == 2 )
    {
      v4 = sub_411780();
      (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 12))(
        a1: v4,
        a2: 54,
        a3: 186,
        a4: 260,
        a5: 220,
        a6: 80,
        a7: 0,
        a8: 0);
    }
    return sub_412870();
  }
}