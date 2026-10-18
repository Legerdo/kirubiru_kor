int __cdecl sub_4017E0(int a1)
{
  int v2; // [esp+8h] [ebp-224h]
  _DWORD v3[136]; // [esp+Ch] [ebp-220h] BYREF

  LOBYTE(v2) = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[8] = 0;
  v3[3] = a1;
  v3[7] = sub_401920;
  v3[0] = 64;
  v3[9] = 0;
  v3[10] = v2;
  return sub_4128C0(a1: v3);
}