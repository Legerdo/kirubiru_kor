int __cdecl sub_406F00(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-22Ch]
  int v4; // [esp+Ch] [ebp-224h]
  _DWORD v5[136]; // [esp+10h] [ebp-220h] BYREF

  v5[8] = a1;
  memset(&v5[1], 0, 12);
  v5[10] = a2;
  v5[7] = sub_406F60;
  v5[0] = 32;
  v5[9] = v3;
  v5[11] = v4;
  return sub_4128C0(a1: v5);
}