int sub_40BF50()
{
  bool v0; // bl
  int result; // eax
  int v2; // eax

  v0 = true;
  if ( (byte_41F6E8 & 1) == 0 )
  {
    byte_41F6E8 |= 1u;
    dword_41F828 = timeGetTime();
  }
  dword_41F82C = timeGetTime();
  result = dword_41F82C - dword_41F828;
  if ( (unsigned int)(dword_41F82C - dword_41F828) > 0x10 )
  {
    if ( byte_41F6B8 != 0 )
    {
      *(_BYTE *)(sub_411780() + 1564) = 0;
      dword_41F79C();
      dword_41F79C();
      dword_41F79C();
      *(_BYTE *)(sub_411780() + 1564) = 1;
    }
    dword_41F79C();
    v2 = sub_411780();
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 40))(a1: v2);
    dword_41F828 += (dword_41F830 % 3 != 0) + 16;
    if ( dword_41F82C > (unsigned int)(dword_41F828 + 10) )
      v0 = byte_41F834 == 0;
    byte_41F834 = v0;
    *(_BYTE *)(sub_411780() + 1564) = v0;
    if ( dword_41F82C > (unsigned int)(dword_41F828 + 500) )
      dword_41F828 = dword_41F82C;
    result = ++dword_41F830;
    if ( dword_41F830 == 99999999 )
      dword_41F830 = 0;
  }
  return result;
}