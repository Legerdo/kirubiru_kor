int __cdecl sub_4021D0(int a1)
{
  int v1; // eax
  int result; // eax
  double v3; // st7

  v1 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 36) = 304;
  *(_DWORD *)(a1 + 64) = 1134034944;
  *(_DWORD *)(a1 + 32) = 120 * v1 + 136;
  result = *(_DWORD *)(a1 + 8);
  if ( result == 0 )
  {
    v3 = *(float *)(a1 + 56) + 2.5;
    *(float *)(a1 + 56) = v3;
    if ( v3 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    if ( (unsigned __int8)sub_412180(a1: 5) != 0 )
    {
      *(_DWORD *)(a1 + 80) = 1;
      *(_DWORD *)(a1 + 76) = 0;
      sub_402FD0(a1: &dword_41F468);
      *(_DWORD *)(a1 + 28) = sub_402770;
    }
    if ( (unsigned __int8)sub_412150(a1: 7) != 0 && *(float *)(a1 + 56) > 10.0 )
    {
      *(_DWORD *)(a1 + 80) = 7;
      *(_DWORD *)(a1 + 28) = sub_402450;
    }
    result = sub_412180(a1: 8);
    if ( (_BYTE)result != 0 )
    {
      result = sub_40B5E0();
      if ( *(int *)(result + 28) >= 300 )
      {
        *(_DWORD *)(sub_40B5E0() + 28) = 0;
        *(_DWORD *)(a1 + 80) = 5;
        *(_DWORD *)(a1 + 76) = 3;
        *(_DWORD *)(a1 + 48) = 60;
        result = sub_402FD0(a1: &dword_41F5A0);
        *(_DWORD *)(a1 + 28) = sub_402B60;
      }
    }
  }
  return result;
}