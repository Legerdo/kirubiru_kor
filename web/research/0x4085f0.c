int __cdecl sub_4085F0(int a1, int a2, char a3)
{
  int v4; // [esp+8h] [ebp-224h]
  _DWORD v5[136]; // [esp+Ch] [ebp-220h] BYREF

  v5[9] = a2;
  LOBYTE(v4) = a3;
  v5[8] = 16 * a1;
  v5[7] = sub_408660;
  v5[0] = 4;
  memset(&v5[1], 0, 12);
  v5[10] = v4;
  return sub_4128C0(a1: v5);
}