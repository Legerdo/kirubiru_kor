int __cdecl sub_404FB0(int a1)
{
  int v1; // edi
  int result; // eax
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  int v6; // eax
  __int64 v7; // [esp-8h] [ebp-18h]

  v1 = *(_DWORD *)(a1 + 32);
  result = *(_DWORD *)(a1 + 40);
  if ( *(int *)(a1 + 44) > 0 )
  {
    if ( *(_BYTE *)(v1 + 24) != 0 )
    {
      *(_BYTE *)(a1 + 24) = 1;
    }
    else if ( *(_BYTE *)(result + 24) != 0 )
    {
      *(_BYTE *)(sub_40B5E0() + 41) = 0;
      result = sub_40B5E0();
      *(_DWORD *)(result + 64) = 0;
      *(_BYTE *)(a1 + 24) = 1;
    }
    else
    {
      v4 = *(_DWORD *)(result + 32) + 118 * *(_DWORD *)(result + 48) + 2;
      if ( *(_DWORD *)(v1 + 36) + 150 < v4 && *(_BYTE *)(result + 52) == 0 )
      {
        *(_BYTE *)(result + 52) = 1;
        *(_DWORD *)(result + 60) = 1;
        *(_DWORD *)(result + 56) = 1;
        --*(_DWORD *)(a1 + 44);
        v5 = sub_40B5E0();
        ++*(_DWORD *)(v5 + 20);
        v6 = rand();
        sub_413610(a1: v6 % 3);
        if ( *(int *)(sub_40B5E0() + 20) > 999 )
          *(_DWORD *)(sub_40B5E0() + 20) = 999;
        HIDWORD(v7) = v4 - *(_DWORD *)(sub_40B5E0() + 8) - 30;
        LODWORD(v7) = 186;
        return sub_403110(a1: v7);
      }
    }
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
    *(_BYTE *)(*(_DWORD *)(a1 + 32) + 24) = 1;
    *(_BYTE *)(*(_DWORD *)(a1 + 36) + 24) = 1;
    sub_403980(a1: 0xFFFFFF);
    v3 = *(_DWORD *)(v1 + 52);
    if ( v3 != 0 )
      *(_BYTE *)(v3 + 48) = 0;
    else
      sub_4129F0(a1: 127);
    result = *(_DWORD *)(sub_40B5E0() + 68);
    *(_DWORD *)(result + 48) = 0;
  }
  return result;
}