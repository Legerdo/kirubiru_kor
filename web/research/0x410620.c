_DWORD *__stdcall sub_410620(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  result = a3;
  do
  {
    if ( result != nullptr )
    {
      *result = *v3;
      result[1] = v3[1];
    }
    v3 += 2;
    result += 2;
  }
  while ( v3 != a2 );
  return result;
}