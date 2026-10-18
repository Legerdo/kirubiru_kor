int __cdecl sub_4019D0(int a1)
{
  _DWORD v2[6]; // [esp+Ch] [ebp-238h]
  _DWORD v3[8]; // [esp+24h] [ebp-220h] BYREF
  _BYTE v4[512]; // [esp+44h] [ebp-200h]

  v2[0] = *(_DWORD *)sub_40B5E0();
  v2[1] = *(_DWORD *)(sub_40B5E0() + 8);
  LOBYTE(v2[4]) = 1;
  v2[2] = 0;
  v2[3] = 0;
  sub_4129B0(a1: 127);
  if ( v2[1] < a1 - 150 )
    return 0;
  v3[7] = sub_401A70;
  v3[0] = 32;
  memset(&v3[1], 0, 12);
  v2[5] = a1 - 150;
  qmemcpy(v4, v2, 24);
  return sub_4128C0(a1: v3);
}