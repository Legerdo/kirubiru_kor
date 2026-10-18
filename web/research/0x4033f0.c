int __cdecl sub_4033F0(int a1, int a2)
{
  _DWORD v3[6]; // [esp+8h] [ebp-238h]
  _DWORD v4[8]; // [esp+20h] [ebp-220h] BYREF
  _BYTE v5[512]; // [esp+40h] [ebp-200h]

  v3[1] = a1;
  v3[2] = a2;
  v3[3] = a2;
  v3[0] = a1 - 50;
  v3[4] = 3;
  LOBYTE(v3[5]) = 0;
  v4[7] = sub_403470;
  v4[0] = 16;
  memset(&v4[1], 0, 12);
  qmemcpy(v5, v3, 24);
  return sub_4128C0(a1: v4);
}