int sub_403E20()
{
  _QWORD v1[3]; // [esp+8h] [ebp-238h]
  _DWORD v2[8]; // [esp+20h] [ebp-220h] BYREF
  _BYTE v3[512]; // [esp+40h] [ebp-200h]

  v1[0] = 0xB90000000B9LL;
  LODWORD(v1[1]) = rand() % 40 + 370;
  HIDWORD(v1[1]) = 16 * LODWORD(v1[1]);
  LODWORD(v1[2]) = -40 - rand() % 60;
  v2[7] = sub_403ED0;
  v2[0] = 4;
  memset(&v2[1], 0, 12);
  HIDWORD(v1[2]) = rand() % 40 - 20;
  qmemcpy(v3, v1, 24);
  return sub_4128C0(a1: v2);
}