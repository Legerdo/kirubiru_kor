char __cdecl sub_409BC0(int a1)
{
  int v2; // edi
  int v3; // ecx
  int v4; // edi
  bool v5; // cc
  int v6; // eax
  bool v7; // cc
  bool v8; // cc
  int v9; // edx
  int v10; // ecx
  bool v11; // cc
  int v12; // edi
  int *v13; // ebp
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // edx
  _DWORD *v17; // edi
  int v18; // edi
  int v19; // edi
  _DWORD *v20; // edi
  int v21; // edi
  int v22; // ecx
  int v23; // edi
  int v25; // [esp-4h] [ebp-10h]
  int v26; // [esp+10h] [ebp+4h]

  if ( *(int *)(a1 + 8) > 0 )
    goto LABEL_28;
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
  v5 = v4 <= 120;
  if ( v4 < 120 )
  {
    v5 = v4 <= 120;
    *(_DWORD *)(a1 + 36) -= *(_DWORD *)(a1 + 44);
  }
  if ( !v5 && v4 < 360 && v4 % 50 == 0 )
  {
    if ( rand() % 100 >= 40 )
      v25 = rand() % 3;
    else
      v25 = *(_DWORD *)(*(_DWORD *)(sub_40B5E0() + 68) + 40);
    sub_408440(a1: v25);
    sub_403980(a1: 9698813);
  }
  v6 = *(_DWORD *)(a1 + 60);
  if ( v6 > 310 )
  {
    v7 = v6 <= 484;
    if ( v6 >= 484 )
      goto LABEL_17;
    *(_DWORD *)(a1 + 36) += *(_DWORD *)(a1 + 44);
  }
  v7 = v6 <= 484;
LABEL_17:
  if ( !v7 )
  {
    v8 = v6 <= 546;
    if ( v6 >= 546 )
      goto LABEL_22;
    v9 = *(_DWORD *)(a1 + 36);
    v10 = -8 * *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 36) = v10 + v9;
    if ( v10 + v9 < 0 )
      *(_DWORD *)(a1 + 36) = 0;
  }
  v8 = v6 <= 546;
LABEL_22:
  if ( !v8 )
  {
    v11 = v6 <= 596;
    if ( v6 >= 596 )
      goto LABEL_26;
    *(_DWORD *)(a1 + 36) -= *(_DWORD *)(a1 + 44);
  }
  v11 = v6 <= 596;
LABEL_26:
  if ( !v11 )
    *(_DWORD *)(a1 + 36) += 2 * *(_DWORD *)(a1 + 44);
LABEL_28:
  v12 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0() + 8);
  v13 = (int *)sub_411780();
  v26 = *v13;
  v14 = (_DWORD *)sub_40B5E0();
  (*(void (__thiscall **)(int *, int, int, int, int, int, _DWORD, _DWORD))(v26 + 12))(
    a1: v13,
    a2: 45,
    a3: -*v14,
    a4: v12,
    a5: 640,
    a6: 480,
    a7: 0,
    a8: 0);
  LOBYTE(v15) = *(_BYTE *)(a1 + 52);
  if ( (_BYTE)v15 == 1 )
  {
    v16 = *(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 48) = v16;
    if ( v16 <= 0 )
    {
      *(_DWORD *)(a1 + 48) = 70;
      *(_DWORD *)(a1 + 28) = sub_409E70;
      *(_DWORD *)(a1 + 44) = 30;
      *(_DWORD *)(a1 + 36) = -50;
      *(_DWORD *)(a1 + 60) = 0;
      v17 = (_DWORD *)(sub_40B5E0() + 16);
      *v17 += 25000 * (*(_DWORD *)(sub_40B5E0() + 20) + 100);
      v18 = sub_40B5E0();
      if ( *(_DWORD *)(sub_40B5E0() + 16) > *(_DWORD *)(v18 + 60) )
      {
        v19 = sub_40B5E0();
        *(_DWORD *)(sub_40B5E0() + 16) = *(_DWORD *)(v19 + 60);
      }
      sub_4040B0(a1: 320, a2: *(_DWORD *)(a1 + 32) + 400);
      LOBYTE(v15) = sub_413610(a1: 7);
      return v15;
    }
    v20 = (_DWORD *)(sub_40B5E0() + 16);
    *v20 += 150 * *(_DWORD *)(sub_40B5E0() + 20);
    v21 = sub_40B5E0();
    v22 = *(_DWORD *)(sub_40B5E0() + 16);
    v15 = *(_DWORD *)(v21 + 60);
    if ( v22 > v15 )
    {
      v23 = sub_40B5E0();
      v15 = sub_40B5E0();
      *(_DWORD *)(v15 + 16) = *(_DWORD *)(v23 + 60);
    }
  }
  if ( *(int *)(a1 + 60) > 596 && *(int *)(a1 + 36) > 0 )
  {
    v15 = rand() % 2;
    if ( v15 != 0 )
    {
      *(_DWORD *)(a1 + 28) = sub_409760;
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
  return v15;
}