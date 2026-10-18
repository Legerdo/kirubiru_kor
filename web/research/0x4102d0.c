FILE *__cdecl sub_4102D0(char Buffer)
{
  FILE *result; // eax
  FILE *v2; // esi

  result = fopen(FileName: FileName, Mode: aWb);
  v2 = result;
  if ( result != nullptr )
  {
    fwrite(&Buffer, ElementSize: 4u, ElementCount: 1u, Stream: result);
    return (FILE *)fclose(Stream: v2);
  }
  return result;
}