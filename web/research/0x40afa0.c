int __cdecl sub_40AFA0(__int64 a1, int a2)
{
  _DWORD v3[5]; // [esp+8h] [ebp-234h]
  _DWORD v4[8]; // [esp+1Ch] [ebp-220h] BYREF
  _BYTE v5[512]; // [esp+3Ch] [ebp-200h]

  *(_QWORD *)v3 = a1;
  v3[4] = a2;
  memset(&v4[1], 0, 12);
  v4[7] = sub_40B030;
  v4[0] = 8;
  *(_QWORD *)&v3[2] = (unsigned int)(rand() % 80 - 40);
  qmemcpy(v5, v3, 20);
  return sub_4128C0(a1: v4);
}