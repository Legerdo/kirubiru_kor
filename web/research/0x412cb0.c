int __cdecl sub_412CB0(int a1)
{
  int result; // eax

  result = a1;
  if ( dword_4A95F4[a1] != 0 )
    return (*(int (__stdcall **)(int, int, _DWORD, _DWORD, _DWORD, void *))(*(_DWORD *)dword_4A95EC + 16))(
             a1: dword_4A95EC,
             a2: dword_4A95F4[a1],
             a3: 0,
             a4: 0,
             a5: 0,
             a6: &unk_4A95F0);
  return result;
}