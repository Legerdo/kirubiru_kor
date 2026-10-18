int __cdecl sub_4095C0(int a1)
{
  int v1; // ecx
  int v2; // ebp
  int v3; // eax
  int v4; // ebp
  int v5; // eax
  int v6; // edx
  _DWORD *v7; // edi
  int v8; // edi
  int v9; // edi
  _DWORD *v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // esi
  int *v14; // edi
  int v15; // ebp
  _DWORD *v16; // eax

  if ( *(int *)(a1 + 8) <= 0 )
  {
    v1 = *(_DWORD *)(a1 + 36);
    v2 = v1 + *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v2;
    *(_DWORD *)(a1 + 32) = v2 >> 6;
    if ( (v2 >> 6) + 468 >= 429 )
    {
      if ( v1 > *(_DWORD *)(a1 + 44) )
      {
        sub_40AAE0();
        sub_401BC0();
      }
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 32) = -39;
      *(_DWORD *)(a1 + 40) = -2496;
    }
    v3 = *(_DWORD *)(a1 + 44);
    v4 = v3 + *(_DWORD *)(a1 + 36);
    v5 = 10 * v3;
    *(_DWORD *)(a1 + 36) = v4;
    if ( v4 > v5 )
      *(_DWORD *)(a1 + 36) = v5;
  }
  if ( *(_BYTE *)(a1 + 52) == 1 )
  {
    v6 = *(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 48) = v6;
    if ( v6 > 0 )
    {
      v10 = (_DWORD *)(sub_40B5E0() + 16);
      *v10 += 100 * *(_DWORD *)(sub_40B5E0() + 20);
      v11 = sub_40B5E0();
      if ( *(_DWORD *)(sub_40B5E0() + 16) > *(_DWORD *)(v11 + 60) )
      {
        v12 = sub_40B5E0();
        *(_DWORD *)(sub_40B5E0() + 16) = *(_DWORD *)(v12 + 60);
      }
    }
    else
    {
      v7 = (_DWORD *)(sub_40B5E0() + 16);
      *v7 += 15000 * (*(_DWORD *)(sub_40B5E0() + 20) + 100);
      v8 = sub_40B5E0();
      if ( *(_DWORD *)(sub_40B5E0() + 16) > *(_DWORD *)(v8 + 60) )
      {
        v9 = sub_40B5E0();
        *(_DWORD *)(sub_40B5E0() + 16) = *(_DWORD *)(v9 + 60);
      }
      sub_4040B0(a1: 320, a2: *(_DWORD *)(a1 + 32) + 380);
      sub_413610(a1: 7);
      *(_DWORD *)(a1 + 48) = 70;
      *(_DWORD *)(a1 + 28) = sub_4099D0;
      *(_DWORD *)(a1 + 44) = 30;
      *(_DWORD *)(a1 + 36) = 151;
    }
  }
  v13 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0() + 8);
  v14 = (int *)sub_411780();
  v15 = *v14;
  v16 = (_DWORD *)sub_40B5E0();
  return (*(int (__thiscall **)(int *, int, int, int, int, int, _DWORD, _DWORD))(v15 + 12))(
           a1: v14,
           a2: 45,
           a3: -*v16,
           a4: v13,
           a5: 640,
           a6: 480,
           a7: 0,
           a8: 0);
}