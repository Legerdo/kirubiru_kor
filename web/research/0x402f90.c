char __cdecl sub_402F90(int a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // et2
  int v4; // edx

  LOBYTE(v1) = *(_BYTE *)(a1 + 93);
  if ( (_BYTE)v1 == 0 )
  {
    v2 = *(_DWORD *)(a1 + 84) + 1;
    *(_DWORD *)(a1 + 84) = v2;
    v3 = v2 % *(_DWORD *)(a1 + 88);
    v1 = v2 / *(_DWORD *)(a1 + 88);
    if ( v3 == 0 )
    {
      v4 = *(_DWORD *)(a1 + 100);
      v1 = *(_DWORD *)(a1 + 80) + 1;
      *(_DWORD *)(a1 + 80) = v1;
      if ( v1 > v4 )
      {
        LOBYTE(v1) = *(_BYTE *)(a1 + 92);
        if ( (_BYTE)v1 != 0 )
        {
          v1 = *(_DWORD *)(a1 + 96);
          *(_DWORD *)(a1 + 80) = v1;
        }
        else
        {
          *(_BYTE *)(a1 + 93) = 1;
        }
      }
    }
  }
  return v1;
}