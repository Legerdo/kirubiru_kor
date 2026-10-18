FILE *sub_410280()
{
  FILE *result; // eax
  FILE *v1; // esi
  int Buffer; // [esp+4h] [ebp-4h] BYREF

  result = fopen(FileName: FileName, Mode: Mode);
  v1 = result;
  if ( result != nullptr )
  {
    Buffer = 0;
    fread(&Buffer, ElementSize: 4u, ElementCount: 1u, Stream: result);
    fclose(Stream: v1);
    return (FILE *)Buffer;
  }
  return result;
}