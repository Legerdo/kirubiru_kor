char __cdecl sub_40A2E0(int a1)
{
  int v2; // edi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  bool v6; // cc
  int v7; // edi
  int *v8; // ebp
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // edi
  int v13; // edi
  int v14; // edi
  _DWORD *v15; // edi
  int v16; // edi
  int v17; // ecx
  int v18; // edi
  int v19; // eax
  int v20; // et2
  int v22; // [esp+10h] [ebp+4h]

  if ( *(int *)(a1 + 8) > 0 )
    goto LABEL_30;
  v2 = *(_DWORD *)(a1 + 60);
  v3 = *(_DWORD *)(a1 + 36) + *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = v3;
  v3 >>= 6;
  v4 = v2 + 1;
  *(_DWORD *)(a1 + 32) = v3;
  *(_DWORD *)(a1 + 60) = v4;
  if ( v3 < -1440 )
  {
    *(_DWORD *)(a1 + 32) = -1440;
    *(_DWORD *)(a1 + 40) = -92160;
    *(_DWORD *)(a1 + 36) = 0;
  }
  if ( v4 < 160 )
    *(_DWORD *)(a1 + 36) += -2 * *(_DWORD *)(a1 + 44);
  if ( v4 == 130 )
  {
    sub_408440(a1: 1);
    sub_403980(a1: 9698813);
  }
  if ( *(_DWORD *)(a1 + 60) == 140 )
    sub_408440(a1: 1);
  if ( *(_DWORD *)(a1 + 60) == 150 )
    sub_408440(a1: 1);
  if ( *(_DWORD *)(a1 + 60) == 145 )
  {
    sub_408440(a1: 0);
    sub_403980(a1: 9698813);
  }
  if ( *(_DWORD *)(a1 + 60) == 155 )
    sub_408440(a1: 0);
  if ( *(_DWORD *)(a1 + 60) == 165 )
    sub_408440(a1: 0);
  if ( *(_DWORD *)(a1 + 60) == 160 )
  {
    sub_408440(a1: 2);
    sub_403980(a1: 9698813);
  }
  if ( *(_DWORD *)(a1 + 60) == 170 )
    sub_408440(a1: 2);
  if ( *(_DWORD *)(a1 + 60) == 180 )
    sub_408440(a1: 2);
  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 > 180 )
  {
    v6 = v5 <= 250;
    if ( v5 >= 250 )
      goto LABEL_28;
    *(_DWORD *)(a1 + 36) += 4 * *(_DWORD *)(a1 + 44);
  }
  v6 = v5 <= 250;
LABEL_28:
  if ( !v6 )
    *(_DWORD *)(a1 + 36) += -8 * *(_DWORD *)(a1 + 44);
LABEL_30:
  v7 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0() + 8);
  v8 = (int *)sub_411780();
  v22 = *v8;
  v9 = (_DWORD *)sub_40B5E0();
  (*(void (__thiscall **)(int *, int, int, int, int, int, _DWORD, _DWORD))(v22 + 12))(
    a1: v8,
    a2: 45,
    a3: -*v9,
    a4: v7,
    a5: 640,
    a6: 480,
    a7: 0,
    a8: 0);
  LOBYTE(v10) = *(_BYTE *)(a1 + 52);
  if ( (_BYTE)v10 == 1 )
  {
    v11 = *(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 48) = v11;
    if ( v11 <= 0 )
    {
      *(_DWORD *)(a1 + 28) = sub_40A850;
      *(_DWORD *)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 44) = 1;
      v12 = (_DWORD *)(sub_40B5E0() + 16);
      *v12 += 50000 * (*(_DWORD *)(sub_40B5E0() + 20) + 200);
      v13 = sub_40B5E0();
      if ( *(_DWORD *)(sub_40B5E0() + 16) > *(_DWORD *)(v13 + 60) )
      {
        v14 = sub_40B5E0();
        *(_DWORD *)(sub_40B5E0() + 16) = *(_DWORD *)(v14 + 60);
      }
      sub_4040B0(a1: 320, a2: *(_DWORD *)(a1 + 32) + 400);
      LOBYTE(v10) = sub_413610(a1: 7);
      return v10;
    }
    v15 = (_DWORD *)(sub_40B5E0() + 16);
    *v15 += 300 * *(_DWORD *)(sub_40B5E0() + 20);
    v16 = sub_40B5E0();
    v17 = *(_DWORD *)(sub_40B5E0() + 16);
    v10 = *(_DWORD *)(v16 + 60);
    if ( v17 > v10 )
    {
      v18 = sub_40B5E0();
      v10 = sub_40B5E0();
      *(_DWORD *)(v10 + 16) = *(_DWORD *)(v18 + 60);
    }
  }
  if ( *(int *)(a1 + 60) > 250 && *(int *)(a1 + 36) <= 0 )
  {
    v19 = rand();
    v20 = v19 % 3;
    v10 = v19 / 3;
    if ( v20 != 0 )
    {
      v10 = rand() % 2;
      *(_DWORD *)(a1 + 60) = 0;
      if ( v10 != 0 )
      {
        *(_DWORD *)(a1 + 44) = 5;
        *(_DWORD *)(a1 + 36) = 0;
        *(_DWORD *)(a1 + 28) = sub_40A5F0;
      }
      else
      {
        *(_DWORD *)(a1 + 44) = 30;
        *(_DWORD *)(a1 + 36) = -30;
        *(_DWORD *)(a1 + 28) = sub_40A0A0;
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
  return v10;
}