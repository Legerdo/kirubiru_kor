int __cdecl sub_4080A0(int a1, int a2)
{
  _DWORD v3[136]; // [esp+0h] [ebp-220h] BYREF

  v3[8] = a1;
  v3[7] = sub_4080F0;
  v3[0] = 16;
  memset(&v3[1], 0, 12);
  v3[9] = a2;
  v3[10] = 0;
  return sub_4128C0(a1: v3);
}