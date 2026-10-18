int __cdecl sub_40AD50(int a1)
{
  int v2; // eax
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // edx
  int result; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ebp
  int v10; // edi
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // [esp-Ch] [ebp-20h]
  int v21; // [esp-8h] [ebp-1Ch]
  int v22; // [esp-8h] [ebp-1Ch]
  int v23; // [esp-8h] [ebp-1Ch]
  int v24; // [esp-4h] [ebp-18h]
  int v25; // [esp+10h] [ebp-4h]
  _DWORD *v26; // [esp+18h] [ebp+4h]

  v2 = *(_DWORD *)(a1 + 52);
  v3 = (_DWORD *)(*(_DWORD *)(a1 + 12) + 32);
  v26 = v3;
  if ( v2 < 0 )
  {
    v4 = v2 + 1;
    *(_DWORD *)(a1 + 52) = v4;
    if ( v4 == 0 )
      *(_DWORD *)(a1 + 56) = 2;
  }
  v5 = *(_DWORD *)(a1 + 44) + 1;
  *(_DWORD *)(a1 + 44) = v5;
  if ( v5 < 60 )
    ++*(_DWORD *)(a1 + 36);
  if ( v5 > 350 )
  {
    result = *(_DWORD *)(a1 + 36) - 1;
    *(_DWORD *)(a1 + 36) = result;
    if ( result < 0 )
      goto LABEL_26;
  }
  v7 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0();
  v8 = sub_40B5E0();
  v9 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(v8 + 8) + *v3 + 380 + *(_DWORD *)(a1 + 52);
  v25 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(v8 + 8) + *v3 + 380;
  v10 = v7 - 76 * *(_DWORD *)(a1 + 48) + 60;
  if ( *(_BYTE *)(a1 + 60) != 0 )
  {
    v11 = *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 60) = 0;
    if ( v11 <= 0 )
    {
      *(_DWORD *)(a1 + 40) -= *(_DWORD *)(a1 + 64);
    }
    else
    {
      v12 = v11 - *(_DWORD *)(a1 + 64);
      *(_DWORD *)(a1 + 56) = v12;
      if ( v12 <= 0 )
      {
        *(_DWORD *)(a1 + 52) = -90;
        v21 = *(_DWORD *)(sub_40B5E0() + 8) + v9 + 10;
        v13 = (_DWORD *)sub_40B5E0();
        sub_404170(a1: *v13 + v10 + 10, a2: v21, a3: 2);
        v22 = *(_DWORD *)(sub_40B5E0() + 8) + v9 + 10;
        v14 = (_DWORD *)sub_40B5E0();
        sub_404170(a1: *v14 + v10 + 10, a2: v22, a3: 2);
        v23 = *(_DWORD *)(sub_40B5E0() + 8) + v9 + 10;
        v15 = (_DWORD *)sub_40B5E0();
        sub_404170(a1: *v15 + v10 + 10, a2: v23, a3: 2);
        sub_413610(a1: 7);
      }
    }
    *(_DWORD *)(a1 + 64) = 0;
  }
  if ( *(int *)(a1 + 40) <= 0 || *(_BYTE *)(*(_DWORD *)(a1 + 12) + 24) != 0 )
  {
    v16 = v26;
LABEL_25:
    result = sub_40AFA0(a1: *(_DWORD *)(a1 + 32), a2: *(_DWORD *)(a1 + 36) + *v16 + 380, a3: *(_DWORD *)(a1 + 48));
LABEL_26:
    *(_BYTE *)(a1 + 24) = 1;
    return result;
  }
  v16 = v26;
  if ( v26[4] <= v26[6] && *((_BYTE *)v26 + 20) != 0 )
    goto LABEL_25;
  v17 = *(_DWORD *)(a1 + 44);
  if ( v17 > 200 && v17 < 240 && *(int *)(a1 + 56) > 0 && v17 % 10 == 0 )
  {
    v24 = *(_DWORD *)(a1 + 48);
    HIDWORD(v20) = *(_DWORD *)(sub_40B5E0() + 8) + v9 + 30;
    LODWORD(v20) = *(_DWORD *)sub_40B5E0() + v10 - 20 * *(_DWORD *)(a1 + 48) + 20;
    sub_4092D0(a1: v20, a2: v24);
    sub_413610(a1: 6);
  }
  v18 = sub_411780();
  (*(void (__thiscall **)(int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v18 + 12))(
    a1: v18,
    a2: 47,
    a3: v7,
    a4: v25,
    a5: 80,
    a6: 80,
    a7: 80 * *(_DWORD *)(a1 + 48),
    a8: 0);
  v19 = sub_411780();
  return (*(int (__thiscall **)(int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v19 + 12))(
           a1: v19,
           a2: 48,
           a3: v10,
           a4: v9,
           a5: 36,
           a6: 46,
           a7: 36 * *(_DWORD *)(a1 + 48),
           a8: 0);
}