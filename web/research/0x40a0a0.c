char __cdecl sub_40A0A0(int a1)
{
  int v2; // ecx
  int v3; // edi
  int v4; // eax
  int v5; // edi
  bool v6; // cc
  int v7; // eax
  int v8; // edi
  int *v9; // ebp
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // edi
  _DWORD *v13; // edi
  int v14; // edi
  int v15; // edi
  _DWORD *v16; // edi
  int v17; // edi
  int v18; // edx
  int v19; // edi
  int v20; // eax
  int v21; // et2
  int v23; // [esp+10h] [ebp+4h]

  if ( *(int *)(a1 + 8) <= 0 )
  {
    v2 = *(_DWORD *)(a1 + 36);
    v3 = *(_DWORD *)(a1 + 60);
    v4 = v2 + *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v4;
    v5 = v3 + 1;
    *(_DWORD *)(a1 + 32) = v4 >> 6;
    *(_DWORD *)(a1 + 60) = v5;
    v6 = v5 <= 32;
    if ( v5 < 32 )
    {
      v6 = v5 <= 32;
      *(_DWORD *)(a1 + 36) = v2 - *(_DWORD *)(a1 + 44);
    }
    if ( !v6 )
      *(_DWORD *)(a1 + 36) += *(_DWORD *)(a1 + 44);
    if ( *(_DWORD *)(a1 + 32) + 468 >= 429 )
    {
      if ( *(_DWORD *)(a1 + 36) > *(_DWORD *)(a1 + 44) )
      {
        sub_40AAE0();
        sub_401BC0();
      }
      v7 = *(_DWORD *)(a1 + 44);
      *(_DWORD *)(a1 + 32) = -39;
      *(_DWORD *)(a1 + 40) = -2496;
      *(_DWORD *)(a1 + 36) = -30 * v7;
    }
  }
  v8 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0() + 8);
  v9 = (int *)sub_411780();
  v23 = *v9;
  v10 = (_DWORD *)sub_40B5E0();
  (*(void (__thiscall **)(int *, int, int, int, int, int, _DWORD, _DWORD))(v23 + 12))(
    a1: v9,
    a2: 45,
    a3: -*v10,
    a4: v8,
    a5: 640,
    a6: 480,
    a7: 0,
    a8: 0);
  LOBYTE(v11) = *(_BYTE *)(a1 + 52);
  if ( (_BYTE)v11 == 1 )
  {
    v12 = *(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 48) = v12;
    if ( v12 <= 0 )
    {
      *(_DWORD *)(a1 + 28) = sub_40A850;
      *(_DWORD *)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 44) = 1;
      v13 = (_DWORD *)(sub_40B5E0() + 16);
      *v13 += 50000 * (*(_DWORD *)(sub_40B5E0() + 20) + 200);
      v14 = sub_40B5E0();
      if ( *(_DWORD *)(sub_40B5E0() + 16) > *(_DWORD *)(v14 + 60) )
      {
        v15 = sub_40B5E0();
        *(_DWORD *)(sub_40B5E0() + 16) = *(_DWORD *)(v15 + 60);
      }
      sub_4040B0(a1: 320, a2: *(_DWORD *)(a1 + 32) + 400);
      LOBYTE(v11) = sub_413610(a1: 7);
      return v11;
    }
    v16 = (_DWORD *)(sub_40B5E0() + 16);
    *v16 += 300 * *(_DWORD *)(sub_40B5E0() + 20);
    v17 = sub_40B5E0();
    v18 = *(_DWORD *)(sub_40B5E0() + 16);
    v11 = *(_DWORD *)(v17 + 60);
    if ( v18 > v11 )
    {
      v19 = sub_40B5E0();
      v11 = sub_40B5E0();
      *(_DWORD *)(v11 + 16) = *(_DWORD *)(v19 + 60);
    }
  }
  if ( *(_DWORD *)(a1 + 36) == 0 && *(int *)(a1 + 60) > 84 )
  {
    v20 = rand();
    v21 = v20 % 3;
    v11 = v20 / 3;
    if ( v21 != 0 )
    {
      v11 = rand() % 2;
      if ( v11 != 0 )
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
      *(_DWORD *)(a1 + 28) = sub_409E70;
      *(_DWORD *)(a1 + 44) = 30;
      *(_DWORD *)(a1 + 36) = -50;
      *(_DWORD *)(a1 + 60) = 0;
    }
  }
  return v11;
}