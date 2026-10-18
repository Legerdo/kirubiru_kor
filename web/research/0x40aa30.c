int sub_40AA30()
{
  _DWORD v1[8]; // [esp+8h] [ebp-240h]
  _DWORD v2[8]; // [esp+28h] [ebp-220h] BYREF
  _BYTE v3[512]; // [esp+48h] [ebp-200h]

  v1[7] = 0;
  memset(&v2[1], 0, 12);
  v2[7] = sub_40AA80;
  v2[0] = 2;
  qmemcpy(v3, v1, 32);
  return sub_4128C0(a1: v2);
}