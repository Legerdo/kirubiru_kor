int sub_401000()
{
  _DWORD v1[136]; // [esp+0h] [ebp-220h] BYREF

  v1[7] = sub_401040;
  memset(&v1[1], 0, 12);
  v1[0] = 1;
  return sub_4128C0(a1: v1);
}