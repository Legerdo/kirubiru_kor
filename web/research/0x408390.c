int __cdecl sub_408390(int a1)
{
  int result; // eax
  int v2; // edx
  int v3; // ecx
  int v4; // eax
  int v5; // et2
  int v6; // [esp-4h] [ebp-8h]

  result = *(_DWORD *)(a1 + 8);
  if ( result <= 0 )
  {
    v2 = *(_DWORD *)(a1 + 32) + 1;
    result = v2;
    *(_DWORD *)(a1 + 32) = v2;
    if ( v2 <= 1800 )
    {
      v3 = *(_DWORD *)(a1 + 36) + 1;
      *(_DWORD *)(a1 + 36) = v3;
      if ( v2 < 1700 && v3 > 40 )
      {
        v4 = rand();
        v5 = v4 % 40;
        result = v4 / 40;
        if ( v5 == 0 )
        {
          if ( rand() % 100 >= 40 )
            v6 = rand() % 3;
          else
            v6 = *(_DWORD *)(*(_DWORD *)(sub_40B5E0() + 68) + 40);
          sub_408440(a1: v6);
          result = sub_403980(a1: 9698813);
          *(_DWORD *)(a1 + 36) = 0;
        }
      }
    }
    else
    {
      *(_BYTE *)(a1 + 24) = 1;
      *(_BYTE *)(sub_40B5E0() + 41) = 0;
      result = sub_40B5E0();
      *(_DWORD *)(result + 64) = 0;
    }
  }
  return result;
}