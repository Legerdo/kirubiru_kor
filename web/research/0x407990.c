int __cdecl sub_407990(unsigned int a1, int a2)
{
  int v2; // eax
  int v4; // [esp-4h] [ebp-244h]
  _QWORD v5[3]; // [esp+8h] [ebp-238h]
  _DWORD v6[8]; // [esp+20h] [ebp-220h] BYREF
  _BYTE v7[512]; // [esp+40h] [ebp-200h]

  v5[0] = a1;
  HIDWORD(v5[1]) = 0;
  LOBYTE(v5[2]) = 0;
  HIDWORD(v5[2]) = 0;
  v6[1] = 0;
  v6[2] = 0;
  LODWORD(v5[1]) = 6;
  v6[7] = sub_407A20;
  v6[0] = 8;
  v6[3] = a2;
  qmemcpy(v7, v5, 24);
  v4 = sub_4128C0(a1: v6);
  v2 = sub_40B5E0();
  return sub_4050F0(a1: *(_DWORD *)(v2 + 68), a2: v4);
}