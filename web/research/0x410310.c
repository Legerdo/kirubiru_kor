FILE *sub_410310()
{
  FILE *result; // eax
  FILE *v1; // esi
  int Buffer; // [esp+4h] [ebp-4h] BYREF

  result = fopen(FileName: FileName, Mode: Mode);
  v1 = result;
  if ( result != nullptr )
  {
    fseek(Stream: result, Offset: 4, Origin: 0);
    fread(&Buffer, ElementSize: 4u, ElementCount: 1u, Stream: v1);
    fclose(Stream: v1);
    return (FILE *)Buffer;
  }
  return result;
}