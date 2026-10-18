int sub_412A30()
{
  int v0; // ecx
  int result; // eax

  v0 = dword_4A95E4;
  result = *(_DWORD *)(dword_4A95E0 + 20);
  if ( result != dword_4A95E4 )
  {
    do
    {
      if ( *(_BYTE *)(result + 24) != 0 )
      {
        *(_DWORD *)(*(_DWORD *)(result + 16) + 20) = *(_DWORD *)(result + 20);
        *(_DWORD *)(*(_DWORD *)(result + 20) + 16) = *(_DWORD *)(result + 16);
        dword_4A85D8[dword_4A95DC] = result;
        dword_4A95DC = (dword_4A95DC + 1) % 1024;
      }
      result = *(_DWORD *)(result + 20);
    }
    while ( result != v0 );
  }
  return result;
}