int __cdecl sub_404170(int a1, int a2, int a3)
{
  _DWORD v4[8]; // [esp+8h] [ebp-240h]
  _DWORD v5[8]; // [esp+28h] [ebp-220h] BYREF
  _BYTE v6[512]; // [esp+48h] [ebp-200h]

  v4[0] = a1;
  v4[1] = a2;
  v4[4] = 16 * a1;
  v4[5] = 16 * a2;
  v4[7] = a3;
  v4[2] = (a3 + 3) * (rand() % 128 - 64) / 3;
  v4[3] = (a3 + 3) * (-32 - rand() % 64) / 3;
  if ( a3 != 0 )
  {
    if ( a3 == 1 )
    {
      v4[6] = 30;
    }
    else if ( a3 == 2 )
    {
      v4[6] = 16;
    }
  }
  else
  {
    v4[6] = 50;
  }
  v5[0] = 16;
  v5[7] = sub_404270;
  memset(&v5[1], 0, 12);
  qmemcpy(v6, v4, 32);
  return sub_4128C0(a1: v5);
}