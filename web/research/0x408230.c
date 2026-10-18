int __cdecl sub_408230(__int64 a1)
{
  _DWORD v2[10]; // [esp+8h] [ebp-248h] BYREF
  _DWORD v3[8]; // [esp+30h] [ebp-220h] BYREF
  _BYTE v4[512]; // [esp+50h] [ebp-200h]

  *(_QWORD *)&v2[2] = 0;
  memset(&v2[7], 0, 12);
  *(_QWORD *)v2 = a1;
  memset(&v3[1], 0, 12);
  *(_QWORD *)&v2[4] = 64;
  v2[6] = 128;
  v3[7] = sub_4082C0;
  v3[0] = 16;
  qmemcpy(v4, v2, 40);
  return sub_4128C0(a1: v3);
}