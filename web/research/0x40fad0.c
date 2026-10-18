FILE *__cdecl sub_40FAD0(int Buffer)
{
  FILE *result; // eax
  FILE *v2; // edi
  char *v3; // esi
  CHAR FileName[20]; // [esp+4h] [ebp-14h] BYREF

  wsprintfA(a1: FileName, a2: "save/replay%d.rep", Buffer);
  result = fopen(FileName, Mode: aWb);
  v2 = result;
  if ( result != nullptr )
  {
    fwrite(Buffer: &dword_41F7B0, ElementSize: 4u, ElementCount: 1u, Stream: result);
    if ( Block != nullptr )
      Buffer = (dword_41F7BC - (int)Block) >> 3;
    else
      Buffer = 0;
    fwrite(&Buffer, ElementSize: 4u, ElementCount: 1u, Stream: v2);
    v3 = (char *)Block;
    if ( Block != (void *)dword_41F7BC )
    {
      do
      {
        fwrite(Buffer: v3, ElementSize: 8u, ElementCount: 1u, Stream: v2);
        v3 += 8;
      }
      while ( v3 != (char *)dword_41F7BC );
    }
    fflush(Stream: v2);
    return (FILE *)fclose(Stream: v2);
  }
  return result;
}