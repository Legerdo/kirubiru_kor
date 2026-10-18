BOOL __cdecl sub_412B90(LPCCH lpMultiByteStr, int a2)
{
  BOOL result; // eax

  if ( dword_4A95F4[a2] != 0 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_4A95F4[a2] + 8))(a1: dword_4A95F4[a2], a2: dword_4A95F4[a2]);
    dword_4A95F4[a2] = 0;
  }
  result = true;
  if ( dword_4A95E8 != 0 )
  {
    dword_4A95F4[a2] = sub_412FD0(lpMultiByteStr);
    if ( dword_4A95F4[a2] == 0 )
      return false;
  }
  return result;
}