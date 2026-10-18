int sub_403870()
{
  _DWORD v1[6]; // [esp+8h] [ebp-238h]
  _DWORD v2[8]; // [esp+20h] [ebp-220h] BYREF
  _BYTE v3[512]; // [esp+40h] [ebp-200h]

  LOBYTE(v1[5]) = 0;
  memset(&v2[1], 0, 12);
  v1[0] = 640;
  v1[1] = 180;
  v1[2] = 10240;
  v2[7] = sub_4038E0;
  v2[0] = 64;
  qmemcpy(v3, v1, 24);
  return sub_4128C0(a1: v2);
}