int __cdecl sub_407D40(int a1, int a2)
{
  _DWORD v3[5]; // [esp+8h] [ebp-234h] BYREF
  _DWORD v4[8]; // [esp+1Ch] [ebp-220h] BYREF
  _BYTE v5[512]; // [esp+3Ch] [ebp-200h]

  memset(v3, 0, 16);
  v3[4] = a2;
  v4[1] = 0;
  v4[2] = 0;
  v4[7] = sub_407DB0;
  v4[0] = 16;
  v4[3] = a1;
  qmemcpy(v5, v3, 20);
  return sub_4128C0(a1: v4);
}