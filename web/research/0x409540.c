int sub_409540()
{
  _DWORD v1[8]; // [esp+8h] [ebp-240h]
  _DWORD v2[8]; // [esp+28h] [ebp-220h] BYREF
  _BYTE v3[512]; // [esp+48h] [ebp-200h]

  v1[1] = 0;
  v1[3] = 5;
  LOBYTE(v1[5]) = 0;
  v1[6] = 0;
  v1[7] = 0;
  v2[1] = 5;
  v2[2] = 0;
  v2[3] = 0;
  v1[0] = -960;
  v1[2] = -61440;
  v1[4] = 50;
  v2[7] = sub_4095C0;
  v2[0] = 16;
  qmemcpy(v3, v1, 32);
  return sub_4128C0(a1: v2);
}