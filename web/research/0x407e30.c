int __cdecl sub_407E30(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  _DWORD v5[10]; // [esp+8h] [ebp-248h]
  _DWORD v6[8]; // [esp+30h] [ebp-220h] BYREF
  _BYTE v7[512]; // [esp+50h] [ebp-200h]

  v5[3] = 0;
  v5[0] = *(_DWORD *)(sub_40B5E0() + 8) - 200;
  LOBYTE(v5[7]) = 0;
  v5[1] = 16 * v5[0];
  v5[8] = a2;
  LOBYTE(v5[5]) = 0;
  v5[9] = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = a1;
  v5[6] = 2;
  v5[2] = 40 * (3 * a2 + 3);
  v5[4] = 3;
  v6[7] = sub_407EF0;
  v6[0] = 16;
  qmemcpy(v7, v5, 40);
  v2 = sub_4128C0(a1: v6);
  v3 = sub_40B5E0();
  sub_405440(a1: *(_DWORD *)(v3 + 68), a2: v2);
  return v2;
}