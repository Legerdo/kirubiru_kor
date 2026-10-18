int __cdecl sub_401530(int a1)
{
  int result; // eax
  int v2; // edx
  int v3; // ecx
  int v4; // eax

  result = *(_DWORD *)(a1 + 48);
  if ( result != 0 )
  {
    if ( *(int *)(a1 + 8) <= 0 )
    {
      v2 = *(_DWORD *)(a1 + 36);
      v3 = v2 + *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 40) = v3;
      v3 >>= 6;
      *(_DWORD *)(a1 + 32) = v3;
      if ( v3 + 118 * result + 2 >= 428 )
      {
        if ( v2 > *(_DWORD *)(a1 + 44) )
        {
          sub_40AAE0();
          sub_401BC0();
        }
        v4 = *(_DWORD *)(a1 + 48);
        *(_DWORD *)(a1 + 36) = 0;
        *(_DWORD *)(a1 + 32) = 426 - 118 * v4;
        *(_DWORD *)(a1 + 40) = (426 - 118 * v4) << 6;
      }
      result = *(_DWORD *)(a1 + 44);
      *(_DWORD *)(a1 + 36) += result;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;
}