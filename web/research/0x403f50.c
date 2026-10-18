int sub_403F50()
{
  _DWORD v1[5]; // [esp+8h] [ebp-234h]
  _DWORD v2[8]; // [esp+1Ch] [ebp-220h] BYREF
  _BYTE v3[512]; // [esp+3Ch] [ebp-200h]

  LOWORD(v1[2]) = 0;
  LOBYTE(v1[4]) = 0;
  v2[1] = 0;
  v2[3] = 0;
  v1[0] = -1027080192;
  v1[1] = 0;
  v2[7] = sub_403FC0;
  v2[0] = 32;
  v2[2] = 2;
  qmemcpy(v3, v1, 20);
  return sub_4128C0(a1: v2);
}