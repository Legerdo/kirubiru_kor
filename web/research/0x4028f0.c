int __cdecl sub_4028F0(int a1)
{
  double v1; // st7
  __int64 v2; // rax
  int v3; // edi
  int v4; // esi
  int v5; // eax

  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v1 = *(float *)(a1 + 56) + 0.25;
    *(float *)(a1 + 56) = v1;
    if ( v1 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    *(float *)(a1 + 64) = *(float *)(a1 + 64) + *(float *)(a1 + 68);
    *(float *)(a1 + 68) = *(float *)(a1 + 68) + 0.1f;
    v2 = (__int64)*(float *)(a1 + 64);
    *(_DWORD *)(a1 + 36) = v2;
    if ( (int)v2 <= 295 )
    {
      if ( (unsigned __int8)sub_412180(a1: 5) != 0 )
      {
        *(_DWORD *)(a1 + 80) = 4;
        *(_DWORD *)(a1 + 76) = 2;
        sub_402FD0(a1: &dword_41F538);
        *(_DWORD *)(a1 + 28) = sub_402A80;
      }
      else if ( (unsigned __int8)sub_412150(a1: 8) != 0 && *(int *)(sub_40B5E0() + 28) >= 300 )
      {
        *(_DWORD *)(sub_40B5E0() + 28) = 0;
        *(_DWORD *)(a1 + 80) = 6;
        *(_DWORD *)(a1 + 76) = 4;
        *(_DWORD *)(a1 + 48) = 60;
        sub_402FD0(a1: &dword_41F608);
        *(_DWORD *)(a1 + 28) = sub_402C30;
        sub_413610(a1: 11);
      }
      else if ( (unsigned __int8)sub_412150(a1: 7) != 0 && *(float *)(a1 + 56) > 10.0 )
      {
        *(_DWORD *)(a1 + 80) = 10;
        *(_DWORD *)(a1 + 28) = sub_402670;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 36) = 304;
      *(_DWORD *)(a1 + 28) = sub_401FB0;
      sub_408230(a1: *(_DWORD *)(a1 + 32) + 25, a2: *(_DWORD *)(a1 + 36) + 60);
      sub_413610(a1: 10);
    }
  }
  v3 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0();
  v4 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8);
  v5 = sub_411780();
  return (*(int (__thiscall **)(int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v5 + 12))(
           a1: v5,
           a2: 0,
           a3: v3,
           a4: v4,
           a5: 128,
           a6: 128,
           a7: 384,
           a8: 128);
}