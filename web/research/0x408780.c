int __cdecl sub_408780(int a1)
{
  _DWORD v2[136]; // [esp+8h] [ebp-220h] BYREF

  v2[10] = *(_DWORD *)(sub_40B5E0() + 52);
  v2[7] = sub_4087F0;
  v2[0] = 64;
  memset(&v2[1], 0, 12);
  v2[8] = 640;
  v2[9] = 10240;
  v2[11] = a1;
  return sub_4128C0(a1: v2);
}