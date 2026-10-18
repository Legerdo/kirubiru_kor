int __thiscall sub_4103A0(_DWORD *this)
{
  int v1; // edx

  v1 = *(this + 1);
  if ( v1 != 0 )
    return (*(this + 2) - v1) >> 3;
  else
    return 0;
}