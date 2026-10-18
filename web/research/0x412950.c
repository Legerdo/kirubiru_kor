int sub_412950()
{
  int v0; // ecx
  int result; // eax

  v0 = dword_4A95E4;
  result = *(_DWORD *)(dword_4A95E0 + 20);
  if ( result != dword_4A95E4 )
  {
    do
    {
      *(_BYTE *)(result + 24) = 1;
      result = *(_DWORD *)(result + 20);
    }
    while ( result != v0 );
  }
  return result;
}