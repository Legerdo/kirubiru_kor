int __cdecl sub_4092D0(__int64 a1, int a2)
{
  int v2; // eax
  int v4; // [esp-4h] [ebp-248h]
  _DWORD v5[7]; // [esp+8h] [ebp-23Ch]
  _DWORD v6[8]; // [esp+24h] [ebp-220h] BYREF
  _BYTE v7[512]; // [esp+44h] [ebp-200h]

  *(_QWORD *)v5 = a1;
  v5[2] = 4 - 8 * a2;
  v5[3] = 4;
  LOBYTE(v5[4]) = 0;
  v5[5] = 0;
  v6[7] = sub_409370;
  v6[0] = 8;
  memset(&v6[1], 0, 12);
  qmemcpy(v7, v5, 28);
  v4 = sub_4128C0(a1: v6);
  v2 = sub_40B5E0();
  return sub_405F20(a1: *(_DWORD *)(v2 + 68), a2: v4);
}