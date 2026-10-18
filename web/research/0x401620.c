int __cdecl sub_401620(int a1)
{
  int v2; // esi
  int v3; // eax
  int *v4; // edi
  int v5; // edi
  int v6; // edi
  int result; // eax
  int *v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // eax
  int v12; // esi
  int v13; // ebx
  int v14; // edi
  int v15; // esi
  _DWORD *v16; // ebp
  int v17; // eax
  int v18; // [esp+10h] [ebp+4h]
  int v19; // [esp+10h] [ebp+4h]

  v2 = *(_DWORD *)(a1 + 12) + 32;
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 12) + 56) != 1 || *(_DWORD *)(*(_DWORD *)(a1 + 12) + 48) - 1 != *(_DWORD *)(a1 + 32) )
  {
LABEL_9:
    v11 = *(_DWORD *)(v2 + 20);
    v12 = *(_DWORD *)v2;
    v18 = v11;
    v13 = 80 - *(_DWORD *)sub_40B5E0();
    v14 = v12 + 118 * *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0() + 8);
    v15 = 0;
    v19 = v18 + 4;
    v16 = (_DWORD *)(a1 + 36);
    do
    {
      v17 = sub_411780();
      result = (*(int (__thiscall **)(int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v17 + 12))(
                 a1: v17,
                 a2: v19,
                 a3: v15 + v13,
                 a4: v14,
                 a5: 160,
                 a6: 120,
                 a7: v15,
                 a8: *v16);
      v15 += 160;
      ++v16;
    }
    while ( v15 < 480 );
    return result;
  }
  *(_DWORD *)(a1 + 4 * *(_DWORD *)(*(_DWORD *)(a1 + 12) + 60) + 48) -= *(_DWORD *)(*(_DWORD *)(a1 + 12) + 64);
  v3 = *(_DWORD *)(v2 + 28);
  *(_BYTE *)(v2 + 24) = 0;
  if ( *(int *)(a1 + 4 * v3 + 48) > 0 )
  {
    v8 = (int *)(sub_40B5E0() + 16);
    *v8 = (__int64)((double)*(int *)(sub_40B5E0() + 20) * ((double)*(int *)(v2 + 12) * 1.5) + (double)*v8);
    v9 = sub_40B5E0();
    if ( *(_DWORD *)(sub_40B5E0() + 16) > *(_DWORD *)(v9 + 60) )
    {
      v10 = sub_40B5E0();
      *(_DWORD *)(sub_40B5E0() + 16) = *(_DWORD *)(v10 + 60);
    }
    goto LABEL_9;
  }
  --*(_DWORD *)(v2 + 16);
  *(_BYTE *)(a1 + 24) = 1;
  v4 = (int *)(sub_40B5E0() + 16);
  *v4 = (__int64)((double)(10 * *(_DWORD *)(sub_40B5E0() + 20))
                * (double)*(int *)(a1 + 4 * *(_DWORD *)(v2 + 28) + 60)
                * ((double)*(int *)(v2 + 12)
                 * 1.5)
                + (double)*v4);
  v5 = sub_40B5E0();
  if ( *(_DWORD *)(sub_40B5E0() + 16) > *(_DWORD *)(v5 + 60) )
  {
    v6 = sub_40B5E0();
    *(_DWORD *)(sub_40B5E0() + 16) = *(_DWORD *)(v6 + 60);
  }
  sub_4040B0(a1: 320, a2: *(_DWORD *)v2 + 118 * *(_DWORD *)(a1 + 32));
  return sub_413610(a1: 7);
}