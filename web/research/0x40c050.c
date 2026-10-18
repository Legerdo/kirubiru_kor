int sub_40C050()
{
  int result; // eax

  sub_412090();
  result = sub_412180(a1: 10);
  if ( (_BYTE)result != 0 )
    result = sub_4108E0();
  dword_41F798 = 1;
  dword_41F79C = sub_40C080;
  return result;
}