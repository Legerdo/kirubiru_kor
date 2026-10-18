int sub_403A30()
{
  int v0; // ebp
  _DWORD *v1; // eax
  int i; // ecx
  int j; // ebx
  _DWORD *v4; // eax
  int k; // ecx
  _DWORD *v6; // eax
  int m; // ecx
  int v9; // [esp+10h] [ebp-258h] BYREF
  int v10; // [esp+14h] [ebp-254h]
  _BYTE v11[12]; // [esp+18h] [ebp-250h] BYREF
  int v12; // [esp+24h] [ebp-244h]
  _DWORD v13[8]; // [esp+28h] [ebp-240h]
  _DWORD v14[8]; // [esp+48h] [ebp-220h] BYREF
  _BYTE v15[512]; // [esp+68h] [ebp-200h]

  v13[0] = *(_DWORD *)(sub_40B5E0() + 8) - 12982;
  v13[2] = v13[0] << 6;
  v13[1] = 0;
  v13[3] = 5;
  v13[4] = 110;
  LOBYTE(v13[5]) = 0;
  v13[6] = 0;
  v13[7] = 0;
  v14[7] = sub_401530;
  v14[0] = 16;
  v14[1] = 2;
  v14[2] = 150;
  v14[3] = 0;
  qmemcpy(v15, v13, 32);
  v0 = sub_4128C0(a1: v14);
  v1 = v11;
  for ( i = 3; i != 0; --i )
  {
    *v1++ = 20;
    v12 = 20;
    v10 = 0;
  }
  v9 = 0;
  sub_403B70(a1: &v9, a2: v0);
  for ( j = 108; j != 0; --j )
  {
    v4 = v11;
    for ( k = 3; k != 0; --k )
    {
      *v4++ = 1;
      v10 = 120;
    }
    v12 = 1;
    ++v9;
    sub_403B70(a1: &v9, a2: v0);
  }
  v6 = v11;
  for ( m = 3; m != 0; --m )
  {
    *v6++ = 10;
    v12 = 10;
    v10 = 240;
  }
  ++v9;
  sub_403B70(a1: &v9, a2: v0);
  return v0;
}