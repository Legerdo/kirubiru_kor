int __cdecl sub_4088D0(int a1)
{
  int v1; // edx
  int result; // eax
  int v3; // eax
  int v4; // et2

  v1 = *(_DWORD *)(a1 + 32) + 1;
  *(_DWORD *)(a1 + 32) = v1;
  if ( v1 <= 1200 )
  {
    if ( v1 == 200 )
      sub_40AA30();
    v3 = rand();
    v4 = v3 % 3;
    result = v3 / 3;
    if ( v4 == 0 )
      return sub_408920();
  }
  else
  {
    result = sub_40B5E0();
    *(_BYTE *)(result + 41) = 0;
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;
}