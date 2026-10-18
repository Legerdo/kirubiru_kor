int sub_412870()
{
  _DWORD *v0; // esi
  int v1; // edi
  int i; // ebx
  int v3; // eax
  void (__cdecl *v4)(_DWORD *); // eax

  v0 = *(_DWORD **)(dword_4A95E0 + 20);
  v1 = 0;
  for ( i = dword_4A95E4; v0 != (_DWORD *)i; ++v1 )
  {
    v3 = v0[2];
    if ( v3 > 0 )
      v0[2] = v3 - 1;
    v4 = (void (__cdecl *)(_DWORD *))v0[7];
    if ( v4 != nullptr )
      v4(a1: v0);
    v0 = (_DWORD *)v0[5];
  }
  sub_412A30();
  return v1;
}