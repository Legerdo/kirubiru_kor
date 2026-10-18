int __cdecl sub_404F30(int a1, int a2, int a3)
{
  int v3; // ecx
  int result; // eax
  _DWORD v5[136]; // [esp+10h] [ebp-220h] BYREF

  v3 = sub_40B5E0();
  result = 0;
  if ( *(_BYTE *)(v3 + 41) != 0 )
  {
    v5[7] = sub_404FB0;
    v5[0] = 32;
    memset(&v5[1], 0, 12);
    v5[8] = a1;
    v5[9] = a2;
    v5[10] = a3;
    v5[11] = 5;
    return sub_4128C0(a1: v5);
  }
  return result;
}