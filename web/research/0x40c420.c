FILE *sub_40C420()
{
  FILE *v0; // esi
  FILE *result; // eax
  FILE *v2; // esi

  v0 = fopen(FileName: aSaveDainiScore, Mode: Mode);
  if ( v0 != nullptr )
  {
    sub_4033F0(a1: 600, a2: 0);
    sub_4032A0(a1: 8, a2: 0);
    return (FILE *)fclose(Stream: v0);
  }
  else
  {
    result = fopen(FileName: aSaveEndlessSco, Mode: Mode);
    v2 = result;
    if ( result != nullptr )
    {
      sub_4033F0(a1: 598, a2: 0);
      sub_4032A0(a1: 10, a2: 0);
      return (FILE *)fclose(Stream: v2);
    }
  }
  return result;
}