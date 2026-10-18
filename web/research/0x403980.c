int __cdecl sub_403980(int a1)
{
  int v2; // [esp+4h] [ebp-228h]
  _DWORD v3[136]; // [esp+Ch] [ebp-220h] BYREF

  v3[10] = a1;
  LOBYTE(v2) = 1;
  v3[1] = 0;
  v3[2] = 0;
  v3[8] = 0;
  v3[7] = sub_4039D0;
  v3[0] = 32;
  v3[9] = v2;
  return sub_4128C0(a1: v3);
}