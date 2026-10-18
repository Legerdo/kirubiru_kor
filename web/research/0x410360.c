FILE *__cdecl sub_410360(char Buffer)
{
  FILE *result; // eax
  FILE *v2; // esi

  result = fopen(FileName: FileName, Mode: Mode);
  v2 = result;
  if ( result != nullptr )
  {
    fseek(Stream: result, Offset: 4, Origin: 0);
    fwrite(&Buffer, ElementSize: 4u, ElementCount: 1u, Stream: v2);
    return (FILE *)fclose(Stream: v2);
  }
  return result;
}