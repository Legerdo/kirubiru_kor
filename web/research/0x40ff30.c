_DWORD *__cdecl sub_40FF30(void *Buffer)
{
  FILE *v1; // esi
  _DWORD *result; // eax
  int i; // ecx

  v1 = fopen(FileName: aSaveScoreSav, Mode: Mode);
  if ( v1 != nullptr )
  {
    fread(Buffer, ElementSize: 8u, ElementCount: 0xAu, Stream: v1);
    return (_DWORD *)fclose(Stream: v1);
  }
  else
  {
    result = Buffer;
    for ( i = 10; i != 0; --i )
    {
      *result = 0;
      result[1] = 0;
      result += 2;
    }
  }
  return result;
}