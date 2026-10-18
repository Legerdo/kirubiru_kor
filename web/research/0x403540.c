int sub_403540()
{
  int v0; // edi
  int v1; // ebp
  int i; // esi
  _DWORD v4[8]; // [esp+10h] [ebp-240h] BYREF
  _DWORD v5[8]; // [esp+30h] [ebp-220h] BYREF
  _BYTE v6[512]; // [esp+50h] [ebp-200h]

  v4[0] = -800;
  v4[2] = -51200;
  v4[1] = 0;
  v4[3] = 22;
  v4[4] = 6;
  LOBYTE(v4[5]) = 0;
  v4[6] = 0;
  v4[7] = 0;
  v5[7] = sub_403610;
  v5[0] = 16;
  v5[1] = 1;
  v5[2] = 150;
  v5[3] = 0;
  qmemcpy(v6, v4, 32);
  v0 = 0;
  v1 = sub_4128C0(a1: v5);
  for ( i = 0; i < 720; i += 120 )
  {
    v4[2] = 5;
    v4[3] = 5;
    v4[4] = 5;
    v4[0] = v0;
    v4[1] = i;
    sub_403690(a1: v4, a2: v1);
    ++v0;
  }
  return v1;
}