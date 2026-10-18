int __cdecl sub_40ACB0(unsigned int a1, int a2, int a3)
{
  int v3; // eax
  int v5; // [esp-4h] [ebp-250h]
  _DWORD v6[9]; // [esp+8h] [ebp-244h]
  _DWORD v7[8]; // [esp+2Ch] [ebp-220h] BYREF
  _BYTE v8[512]; // [esp+4Ch] [ebp-200h]

  *(_QWORD *)v6 = a1;
  v6[4] = a2;
  v6[3] = 0;
  v6[6] = 0;
  LOBYTE(v6[7]) = 0;
  v6[8] = 0;
  v7[1] = 0;
  v7[2] = 0;
  v6[2] = 2;
  v6[5] = -90;
  v7[7] = sub_40AD50;
  v7[0] = 8;
  v7[3] = a3;
  qmemcpy(v8, v6, 36);
  v5 = sub_4128C0(a1: v7);
  v3 = sub_40B5E0();
  return sub_407640(a1: *(_DWORD *)(v3 + 68), a2: v5);
}