int __cdecl sub_40AA80(int a1)
{
  int result; // eax
  int v2; // eax

  result = *(_DWORD *)(a1 + 60) + 1;
  *(_DWORD *)(a1 + 60) = result;
  if ( result <= 1400 )
  {
    v2 = sub_411780();
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 12))(a1: v2);
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;
}