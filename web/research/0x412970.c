_DWORD *__cdecl sub_412970(int a1, int a2)
{
  _DWORD *result; // eax
  int i; // esi

  result = *(_DWORD **)(dword_4A95E0 + 20);
  for ( i = dword_4A95E4; result != (_DWORD *)i; result = (_DWORD *)result[5] )
  {
    if ( *result > a1 )
      break;
    if ( (*result & a1) != 0 )
      result[2] = a2;
  }
  return result;
}