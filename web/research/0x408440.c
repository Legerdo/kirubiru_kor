int __cdecl sub_408440(int a1)
{
  int v1; // eax
  int v3; // [esp-4h] [ebp-24Ch]
  _DWORD v4[8]; // [esp+8h] [ebp-240h]
  _DWORD v5[8]; // [esp+28h] [ebp-220h] BYREF
  _BYTE v6[512]; // [esp+48h] [ebp-200h]

  v4[4] = a1;
  v4[0] = *(_DWORD *)(sub_40B5E0() + 8) - 800;
  v4[1] = 130 * a1 + 150;
  v4[2] = 25;
  LOBYTE(v4[3]) = 0;
  LOBYTE(v4[5]) = 0;
  v4[7] = 0;
  v4[6] = 0;
  v5[7] = sub_4084F0;
  v5[0] = 16;
  memset(&v5[1], 0, 12);
  qmemcpy(v6, v4, 32);
  v3 = sub_4128C0(a1: v5);
  v1 = sub_40B5E0();
  sub_405B10(a1: *(_DWORD *)(v1 + 68), a2: v3);
  return sub_413610(a1: 6);
}