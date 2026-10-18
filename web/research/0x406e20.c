char __cdecl sub_406E20(int a1)
{
  int v1; // ecx
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  __int64 v8; // [esp-8h] [ebp-10h]

  v1 = *(_DWORD *)(a1 + 32);
  v2 = *(_DWORD *)(a1 + 36);
  LOBYTE(v3) = *(_BYTE *)(v1 + 24);
  if ( (_BYTE)v3 != 0 )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else if ( *(_BYTE *)(v2 + 24) != 0 )
  {
    *(_BYTE *)(sub_40B5E0() + 41) = 0;
    v3 = sub_40B5E0();
    *(_DWORD *)(v3 + 64) = 0;
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v4 = *(_DWORD *)(v2 + 32) + 118 * *(_DWORD *)(v2 + 48) + 2;
    v3 = *(_DWORD *)(v1 + 36) + 150;
    if ( v3 < v4 )
    {
      LOBYTE(v3) = *(_BYTE *)(v2 + 56);
      if ( (_BYTE)v3 == 0 )
      {
        *(_BYTE *)(v2 + 56) = 1;
        *(_DWORD *)(v2 + 64) = 5;
        *(_DWORD *)(v2 + 60) = *(_DWORD *)(*(_DWORD *)(sub_40B5E0() + 68) + 40);
        v5 = sub_40B5E0();
        ++*(_DWORD *)(v5 + 20);
        v6 = rand();
        sub_413610(a1: v6 % 3);
        if ( *(int *)(sub_40B5E0() + 20) > 999 )
          *(_DWORD *)(sub_40B5E0() + 20) = 999;
        HIDWORD(v8) = v4 - *(_DWORD *)(sub_40B5E0() + 8) - 30;
        LODWORD(v8) = 186;
        LOBYTE(v3) = sub_403110(a1: v8);
      }
    }
  }
  return v3;
}