int sub_40AAE0()
{
  _QWORD v1[17]; // [esp+8h] [ebp-2A8h] BYREF
  _DWORD v2[8]; // [esp+90h] [ebp-220h] BYREF
  _BYTE v3[512]; // [esp+B0h] [ebp-200h]

  memset(&v1[1], 0, 12);
  v1[3] = 0x20000000000LL;
  v1[4] = 0x30000000000LL;
  v1[5] = 0x40000000000LL;
  v1[6] = 0x50000000000LL;
  v1[7] = 0x60000000000LL;
  v1[8] = 0x70000000000LL;
  v1[9] = 0x80000000000LL;
  v1[10] = 0x90000000000LL;
  v1[11] = 0xA0000000000LL;
  v1[12] = 0xB0000000000LL;
  v1[13] = 0xC0000000000LL;
  v1[14] = 0xD0000000000LL;
  v1[15] = 0xE0000000000LL;
  v1[16] = 0;
  memset(&v2[1], 0, 12);
  HIDWORD(v1[2]) = 256;
  v1[0] = 0xAC00000040LL;
  v2[7] = sub_40AC20;
  v2[0] = 16;
  qmemcpy(v3, v1, 136);
  return sub_4128C0(a1: v2);
}