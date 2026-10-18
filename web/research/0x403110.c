int __cdecl sub_403110(__int64 a1)
{
  _DWORD v2[7]; // [esp+8h] [ebp-23Ch]
  _DWORD v3[8]; // [esp+24h] [ebp-220h] BYREF
  _BYTE v4[512]; // [esp+44h] [ebp-200h]

  v2[0] = *(_DWORD *)(sub_40B5E0() + 20);
  *(_QWORD *)&v2[1] = a1;
  v2[5] = 16 * a1;
  v2[6] = 16 * HIDWORD(a1);
  v2[3] = rand() % 256 - 128;
  v2[4] = -rand() % 64;
  v3[7] = sub_4031C0;
  v3[0] = 32;
  memset(&v3[1], 0, 12);
  qmemcpy(v4, v2, 28);
  return sub_4128C0(a1: v3);
}