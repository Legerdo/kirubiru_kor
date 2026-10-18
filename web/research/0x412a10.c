_DWORD *__cdecl sub_4129F0(int a1)
{
  int v1; // esi
  _DWORD *result; // eax

  v1 = dword_4A95E4;
  result = *(_DWORD **)(dword_4A95E0 + 20);
  if ( result != (_DWORD *)dword_4A95E4 )
  {
    do
    {
      if ( *result > a1 )
        break;
      if ( (*result & a1) != 0 )
        result[2] = 0;
      result = (_DWORD *)result[5];
    }
    while ( result != (_DWORD *)v1 );
  }
  return result;
}