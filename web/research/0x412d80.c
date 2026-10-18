int __cdecl sub_412D80(int a1, int a2, int a3)
{
  int result; // eax

  result = a1;
  if ( dword_4A95F4[a1] != 0 )
  {
    (*(void (__stdcall **)(int, int, int))(*(_DWORD *)dword_4A95F4[a1] + 92))(a1: dword_4A95F4[a1], a2, a3);
    return (*(int (__stdcall **)(int, int))(*(_DWORD *)dword_4A95F4[a1] + 24))(a1: dword_4A95F4[a1], a2: 0xFFFF);
  }
  return result;
}