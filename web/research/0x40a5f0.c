char __cdecl sub_40A5F0(int a1)
{
  int v2; // ebp
  int v3; // eax
  int v4; // edi
  int *v5; // ebp
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // edi
  _DWORD *v9; // edi
  int v10; // edi
  int v11; // edi
  _DWORD *v12; // edi
  int v13; // edi
  int v14; // edx
  int v15; // edi
  int v16; // eax
  int v17; // et2
  int v19; // [esp+14h] [ebp+4h]

  if ( *(int *)(a1 + 8) <= 0 )
  {
    if ( *(_DWORD *)(a1 + 32) + 468 < 200 )
      *(_DWORD *)(a1 + 40) += 32;
    if ( *(_DWORD *)(a1 + 32) + 468 > 210 )
      *(_DWORD *)(a1 + 40) -= 32;
    v2 = *(_DWORD *)(a1 + 60);
    v3 = *(int *)(a1 + 40) >> 6;
    *(_DWORD *)(a1 + 32) = v3;
    *(_DWORD *)(a1 + 36) = 5;
    *(_DWORD *)(a1 + 60) = v2 + 1;
    if ( v3 + 468 >= 429 )
    {
      if ( *(int *)(a1 + 44) < 5 )
      {
        sub_40AAE0();
        sub_401BC0();
      }
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 32) = -39;
      *(_DWORD *)(a1 + 40) = -2496;
    }
    if ( *(_DWORD *)(a1 + 60) == 60 )
    {
      sub_407990(a1: 0x8Cu, a2: a1);
      sub_407990(a1: 0x104u, a2: a1);
      sub_407990(a1: 0x17Cu, a2: a1);
    }
  }
  v4 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0() + 8);
  v5 = (int *)sub_411780();
  v19 = *v5;
  v6 = (_DWORD *)sub_40B5E0();
  (*(void (__thiscall **)(int *, int, int, int, int, int, _DWORD, _DWORD))(v19 + 12))(
    a1: v5,
    a2: 45,
    a3: -*v6,
    a4: v4,
    a5: 640,
    a6: 480,
    a7: 0,
    a8: 0);
  LOBYTE(v7) = *(_BYTE *)(a1 + 52);
  if ( (_BYTE)v7 == 1 )
  {
    v8 = *(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 48) = v8;
    if ( v8 <= 0 )
    {
      *(_DWORD *)(a1 + 28) = sub_40A850;
      *(_DWORD *)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 44) = 1;
      v9 = (_DWORD *)(sub_40B5E0() + 16);
      *v9 += 50000 * (*(_DWORD *)(sub_40B5E0() + 20) + 200);
      v10 = sub_40B5E0();
      if ( *(_DWORD *)(sub_40B5E0() + 16) > *(_DWORD *)(v10 + 60) )
      {
        v11 = sub_40B5E0();
        *(_DWORD *)(sub_40B5E0() + 16) = *(_DWORD *)(v11 + 60);
      }
      sub_4040B0(a1: 320, a2: *(_DWORD *)(a1 + 32) + 400);
      LOBYTE(v7) = sub_413610(a1: 7);
      return v7;
    }
    v12 = (_DWORD *)(sub_40B5E0() + 16);
    *v12 += 300 * *(_DWORD *)(sub_40B5E0() + 20);
    v13 = sub_40B5E0();
    v14 = *(_DWORD *)(sub_40B5E0() + 16);
    v7 = *(_DWORD *)(v13 + 60);
    if ( v14 > v7 )
    {
      v15 = sub_40B5E0();
      v7 = sub_40B5E0();
      *(_DWORD *)(v7 + 16) = *(_DWORD *)(v15 + 60);
    }
  }
  if ( *(int *)(a1 + 60) > 390 )
  {
    v16 = rand();
    v17 = v16 % 3;
    v7 = v16 / 3;
    if ( v17 != 0 )
    {
      v7 = rand() % 2;
      if ( v7 != 0 )
      {
        *(_DWORD *)(a1 + 60) = 0;
        *(_DWORD *)(a1 + 44) = 30;
        *(_DWORD *)(a1 + 36) = -30;
        *(_DWORD *)(a1 + 28) = sub_40A0A0;
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
  return v7;
}