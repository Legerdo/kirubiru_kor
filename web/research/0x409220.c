int __cdecl sub_409220(int a1, const char *a2, int a3)
{
  _DWORD v4[16]; // [esp+8h] [ebp-260h] BYREF
  _DWORD v5[8]; // [esp+48h] [ebp-220h] BYREF
  _BYTE v6[512]; // [esp+68h] [ebp-200h]

  v5[7] = nullsub_1;
  strcpy((char *)v4, a2);
  v5[1] = 0;
  v4[14] = 0;
  v4[13] = a3;
  v4[15] = 0;
  v5[2] = 0;
  v4[11] = 480;
  v5[0] = 32;
  v5[3] = a1;
  qmemcpy(v6, v4, 64);
  return sub_4128C0(a1: v5);
}