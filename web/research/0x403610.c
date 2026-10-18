int __cdecl sub_403610(int a1)
{
  int v1; // ecx
  int result; // eax
  int v3; // edx
  int v4; // eax
  int v5; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( v1 != 0 )
  {
    result = *(_DWORD *)(a1 + 8);
    if ( result <= 0 )
    {
      v3 = *(_DWORD *)(a1 + 36);
      v4 = v3 + *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 40) = v4;
      v4 >>= 6;
      *(_DWORD *)(a1 + 32) = v4;
      if ( v4 + 120 * v1 >= 429 )
      {
        if ( v3 > *(_DWORD *)(a1 + 44) )
        {
          sub_40AAE0();
          sub_401BC0();
        }
        v5 = *(_DWORD *)(a1 + 48);
        *(_DWORD *)(a1 + 36) = 0;
        *(_DWORD *)(a1 + 32) = 429 - 120 * v5;
        *(_DWORD *)(a1 + 40) = (429 - 120 * v5) << 6;
      }
      result = *(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 36);
      *(_DWORD *)(a1 + 36) = result;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;
}