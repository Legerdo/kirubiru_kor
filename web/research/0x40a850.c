int __cdecl sub_40A850(int a1)
{
  int v1; // ecx
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  int v5; // ebx
  int result; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int *v12; // edi
  int v13; // ebx
  _DWORD *v14; // eax
  int v15; // [esp-8h] [ebp-14h]
  int v16; // [esp-8h] [ebp-14h]
  int v17; // [esp-8h] [ebp-14h]
  int v18; // [esp-8h] [ebp-14h]
  int v19; // [esp-4h] [ebp-10h]
  int v20; // [esp-4h] [ebp-10h]
  int v21; // [esp-4h] [ebp-10h]
  int v22; // [esp-4h] [ebp-10h]

  if ( *(int *)(a1 + 8) > 0 )
    goto LABEL_8;
  v1 = *(_DWORD *)(a1 + 36);
  v2 = *(_DWORD *)(a1 + 60);
  v3 = v1 + *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = v3;
  v4 = v1 - *(_DWORD *)(a1 + 44);
  v5 = v2 + 1;
  *(_DWORD *)(a1 + 32) = v3 >> 6;
  *(_DWORD *)(a1 + 60) = v5;
  *(_DWORD *)(a1 + 36) = v4;
  if ( v4 < -200 )
    *(_DWORD *)(a1 + 36) = -200;
  result = v5 / 40;
  if ( v5 % 40 == 0 )
  {
    sub_4040B0(a1: 320, a2: *(_DWORD *)(a1 + 32) + 400);
    sub_413610(a1: 7);
    v19 = rand() % 2;
    v15 = *(_DWORD *)(a1 + 32) - rand() % 200 + 380;
    v7 = rand();
    sub_40AFA0(a1: v7 % 480 + 100, a2: v15, a3: v19);
    v20 = rand() % 2;
    v16 = *(_DWORD *)(a1 + 32) - rand() % 200 + 380;
    v8 = rand();
    sub_40AFA0(a1: v8 % 480 + 100, a2: v16, a3: v20);
    v21 = rand() % 2;
    v17 = *(_DWORD *)(a1 + 32) - rand() % 200 + 380;
    v9 = rand();
    sub_40AFA0(a1: v9 % 480 + 100, a2: v17, a3: v21);
    v22 = rand() % 2;
    v18 = *(_DWORD *)(a1 + 32) - rand() % 200 + 380;
    v10 = rand();
    result = sub_40AFA0(a1: v10 % 480 + 100, a2: v18, a3: v22);
  }
  if ( *(int *)(a1 + 60) <= 540 )
  {
LABEL_8:
    if ( *(_BYTE *)(a1 + 52) == 1 )
      *(_BYTE *)(a1 + 52) = 0;
    v11 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0() + 8);
    v12 = (int *)sub_411780();
    v13 = *v12;
    v14 = (_DWORD *)sub_40B5E0();
    return (*(int (__thiscall **)(int *, int, int, int, int, int, _DWORD, _DWORD))(v13 + 12))(
             a1: v12,
             a2: 45,
             a3: -*v14,
             a4: v11,
             a5: 640,
             a6: 480,
             a7: 0,
             a8: 0);
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;
}