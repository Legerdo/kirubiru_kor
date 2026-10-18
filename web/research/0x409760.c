int __cdecl sub_409760(int a1)
{
  int v2; // ebp
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int *v6; // ebp
  _DWORD *v7; // eax
  int result; // eax
  int v9; // edx
  _DWORD *v10; // edi
  int v11; // edi
  int v12; // edi
  _DWORD *v13; // edi
  int v14; // edi
  int v15; // ecx
  int v16; // edi
  int v17; // [esp+14h] [ebp+4h]

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
      sub_40ACB0(a1: 100, a2: 0, a3: a1);
      sub_40ACB0(a1: 190, a2: 0, a3: a1);
      v4 = rand() % 2;
      sub_40ACB0(a1: 280, a2: v4, a3: a1);
      sub_40ACB0(a1: 370, a2: 1, a3: a1);
      sub_40ACB0(a1: 460, a2: 1, a3: a1);
    }
  }
  v5 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0() + 8);
  v6 = (int *)sub_411780();
  v17 = *v6;
  v7 = (_DWORD *)sub_40B5E0();
  result = (*(int (__thiscall **)(int *, int, int, int, int, int, _DWORD, _DWORD))(v17 + 12))(
             a1: v6,
             a2: 45,
             a3: -*v7,
             a4: v5,
             a5: 640,
             a6: 480,
             a7: 0,
             a8: 0);
  if ( *(_BYTE *)(a1 + 52) == 1 )
  {
    v9 = *(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 48) = v9;
    if ( v9 <= 0 )
    {
      *(_DWORD *)(a1 + 48) = 70;
      *(_DWORD *)(a1 + 28) = sub_409E70;
      *(_DWORD *)(a1 + 44) = 30;
      *(_DWORD *)(a1 + 36) = -50;
      *(_DWORD *)(a1 + 60) = 0;
      v10 = (_DWORD *)(sub_40B5E0() + 16);
      *v10 += 25000 * (*(_DWORD *)(sub_40B5E0() + 20) + 100);
      v11 = sub_40B5E0();
      if ( *(_DWORD *)(sub_40B5E0() + 16) > *(_DWORD *)(v11 + 60) )
      {
        v12 = sub_40B5E0();
        *(_DWORD *)(sub_40B5E0() + 16) = *(_DWORD *)(v12 + 60);
      }
      sub_4040B0(a1: 320, a2: *(_DWORD *)(a1 + 32) + 400);
      return sub_413610(a1: 7);
    }
    v13 = (_DWORD *)(sub_40B5E0() + 16);
    *v13 += 150 * *(_DWORD *)(sub_40B5E0() + 20);
    v14 = sub_40B5E0();
    v15 = *(_DWORD *)(sub_40B5E0() + 16);
    result = *(_DWORD *)(v14 + 60);
    if ( v15 > result )
    {
      v16 = sub_40B5E0();
      result = sub_40B5E0();
      *(_DWORD *)(result + 16) = *(_DWORD *)(v16 + 60);
    }
  }
  if ( *(int *)(a1 + 60) > 440 )
  {
    result = rand() % 2;
    if ( result != 0 )
    {
      *(_DWORD *)(a1 + 28) = sub_409BC0;
      *(_DWORD *)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 44) = 5;
    }
    else
    {
      *(_DWORD *)(a1 + 28) = sub_4099D0;
      *(_DWORD *)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 44) = 30;
      *(_DWORD *)(a1 + 36) = 151;
    }
  }
  return result;
}