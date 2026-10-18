int sub_408920()
{
  _DWORD v1[10]; // [esp+8h] [ebp-248h]
  _DWORD v2[8]; // [esp+30h] [ebp-220h] BYREF
  _BYTE v3[512]; // [esp+50h] [ebp-200h]

  v1[0] = *(_DWORD *)(sub_40B5E0() + 8) - 20;
  v1[1] = 32 * v1[0];
  v1[4] = rand() % 16 + 16;
  v1[2] = rand() % 840 - 100;
  v1[3] = 32 * v1[2];
  v1[5] = 2 * (rand() % 64) - 64;
  v1[9] = 0;
  v1[8] = 0;
  memset(&v2[1], 0, 12);
  v1[7] = v1[5] >= 0 ? 16 : 0;
  v2[7] = sub_4089F0;
  v2[0] = 32;
  qmemcpy(v3, v1, 40);
  return sub_4128C0(a1: v2);
}