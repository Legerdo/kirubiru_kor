int __cdecl sub_403690(const void *a1, int a2)
{
  _DWORD v3[8]; // [esp+8h] [ebp-220h] BYREF
  _BYTE v4[512]; // [esp+28h] [ebp-200h]

  v3[1] = 0;
  v3[2] = 0;
  v3[7] = sub_4036F0;
  v3[0] = 16;
  v3[3] = a2;
  qmemcpy(v4, a1, 20);
  return sub_4128C0(a1: v3);
}