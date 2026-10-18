int __cdecl sub_4121B0(int a1)
{
  int result; // eax

  result = dword_4205D0;
  byte_4200C0[255 * dword_4205D0 + a1] = 0x80;
  return result;
}