int sub_401BC0()
{
  _QWORD v1[8]; // [esp+8h] [ebp-260h]
  _DWORD v2[8]; // [esp+48h] [ebp-220h] BYREF
  _BYTE v3[512]; // [esp+68h] [ebp-200h]

  v1[3] = 0xFFFFFFF600000002uLL;
  v1[1] = 0x14FFFFFFF6LL;
  v1[5] = 0x4FFFFFFFELL;
  v1[6] = 0x1FFFFFFFELL;
  v1[4] = 0x800000000LL;
  v1[7] = 0;
  memset(&v2[1], 0, 12);
  v1[0] = 0x2FFFFFFECLL;
  v1[2] = 0xDFFFFFFFCLL;
  v2[7] = sub_401C80;
  v2[0] = 16;
  qmemcpy(v3, v1, 64);
  return sub_4128C0(a1: v2);
}