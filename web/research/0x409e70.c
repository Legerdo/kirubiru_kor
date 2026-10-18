char __cdecl sub_409E70(int a1)
{
  int v2; // ecx
  int v3; // ebp
  int v4; // eax
  int v5; // edi
  int *v6; // ebp
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // edi
  int v11; // edi
  int v12; // edi
  _DWORD *v13; // edi
  int v14; // edi
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // et2
  int v20; // [esp+14h] [ebp+4h]

  if ( *(int *)(a1 + 8) <= 0 )
  {
    v2 = *(_DWORD *)(a1 + 36);
    v3 = v2 + *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v3;
    *(_DWORD *)(a1 + 32) = v3 >> 6;
    if ( (v3 >> 6) + 468 >= 429 )
    {
      if ( v2 > *(_DWORD *)(a1 + 44) )
      {
        sub_40AAE0();
        sub_401BC0();
      }
      v4 = *(_DWORD *)(a1 + 44);
      *(_DWORD *)(a1 + 32) = -39;
      *(_DWORD *)(a1 + 40) = -2496;
      *(_DWORD *)(a1 + 36) = -30 * v4;
    }
    *(_DWORD *)(a1 + 36) += *(_DWORD *)(a1 + 44);
  }
  v5 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0() + 8);
  v6 = (int *)sub_411780();
  v20 = *v6;
  v7 = (_DWORD *)sub_40B5E0();
  (*(void (__thiscall **)(int *, int, int, int, int, int, _DWORD, _DWORD))(v20 + 12))(
    a1: v6,
    a2: 45,
    a3: -*v7,
    a4: v5,
    a5: 640,
    a6: 480,
    a7: 0,
    a8: 0);
  LOBYTE(v8) = *(_BYTE *)(a1 + 52);
  if ( (_BYTE)v8 == 1 )
  {
    v9 = *(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 56);
    ++*(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 48) = v9;
    *(_BYTE *)(a1 + 52) = 0;
    if ( v9 <= 0 )
    {
      *(_DWORD *)(a1 + 28) = sub_40A850;
      *(_DWORD *)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 44) = 1;
      v10 = (_DWORD *)(sub_40B5E0() + 16);
      *v10 += 50000 * (*(_DWORD *)(sub_40B5E0() + 20) + 200);
      v11 = sub_40B5E0();
      if ( *(_DWORD *)(sub_40B5E0() + 16) > *(_DWORD *)(v11 + 60) )
      {
        v12 = sub_40B5E0();
        *(_DWORD *)(sub_40B5E0() + 16) = *(_DWORD *)(v12 + 60);
      }
      sub_4040B0(a1: 320, a2: *(_DWORD *)(a1 + 32) + 400);
      LOBYTE(v8) = sub_413610(a1: 7);
      return v8;
    }
    v13 = (_DWORD *)(sub_40B5E0() + 16);
    *v13 += 300 * *(_DWORD *)(sub_40B5E0() + 20);
    v14 = sub_40B5E0();
    v15 = *(_DWORD *)(sub_40B5E0() + 16);
    v8 = *(_DWORD *)(v14 + 60);
    if ( v15 > v8 )
    {
      v16 = sub_40B5E0();
      v8 = sub_40B5E0();
      *(_DWORD *)(v8 + 16) = *(_DWORD *)(v16 + 60);
    }
  }
  if ( *(_DWORD *)(a1 + 36) == 0 && *(int *)(a1 + 60) > 4 )
  {
    v17 = rand();
    v18 = v17 % 3;
    v8 = v17 / 3;
    if ( v18 != 0 )
    {
      v8 = rand() % 2;
      if ( v8 != 0 )
      {
        *(_DWORD *)(a1 + 60) = 0;
        *(_DWORD *)(a1 + 44) = 5;
        *(_DWORD *)(a1 + 36) = 0;
        *(_DWORD *)(a1 + 28) = sub_40A5F0;
      }
      else
      {
        *(_DWORD *)(a1 + 28) = sub_40A2E0;
        *(_DWORD *)(a1 + 60) = 0;
        *(_DWORD *)(a1 + 44) = 5;
        *(_DWORD *)(a1 + 36) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 44) = 30;
      *(_DWORD *)(a1 + 36) = -30;
      *(_DWORD *)(a1 + 28) = sub_40A0A0;
    }
  }
  return v8;
}