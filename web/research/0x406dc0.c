int __cdecl sub_406DC0(int a1, int a2)
{
  int v2; // ecx
  int result; // eax
  _DWORD v4[136]; // [esp+8h] [ebp-220h] BYREF

  v2 = sub_40B5E0();
  result = 0;
  if ( *(_BYTE *)(v2 + 41) != 0 )
  {
    v4[7] = sub_406E20;
    v4[0] = 32;
    memset(&v4[1], 0, 12);
    v4[8] = a1;
    v4[9] = a2;
    return sub_4128C0(a1: v4);
  }
  return result;
}