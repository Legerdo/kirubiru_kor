int __cdecl sub_403BD0(int a1)
{
  int v1; // esi
  int v2; // eax
  int *v3; // edi
  int v4; // edi
  int v5; // edi
  int *v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // esi
  int v11; // ebp
  int v12; // edi
  int v13; // eax

  v1 = *(_DWORD *)(a1 + 12) + 32;
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 12) + 52) != 1 || *(_DWORD *)(*(_DWORD *)(a1 + 12) + 48) - 1 != *(_DWORD *)(a1 + 32) )
  {
LABEL_9:
    v10 = *(_DWORD *)v1;
    v11 = 80 - *(_DWORD *)sub_40B5E0();
    v12 = v10 + 118 * *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0() + 8);
    v13 = sub_411780();
    return (*(int (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v13 + 12))(
             a1: v13,
             a2: 42,
             a3: v11,
             a4: v12,
             a5: 480,
             a6: 120,
             a7: 0,
             a8: *(_DWORD *)(a1 + 36));
  }
  *(_DWORD *)(a1 + 4 * *(_DWORD *)(*(_DWORD *)(a1 + 12) + 56) + 40) -= *(_DWORD *)(*(_DWORD *)(a1 + 12) + 60);
  v2 = *(_DWORD *)(v1 + 24);
  *(_BYTE *)(v1 + 20) = 0;
  if ( *(int *)(a1 + 4 * v2 + 40) > 0 )
  {
    v7 = (int *)(sub_40B5E0() + 16);
    *v7 = (__int64)((double)*(int *)(sub_40B5E0() + 20) * ((double)*(int *)(v1 + 12) * 1.5) + (double)*v7);
    v8 = sub_40B5E0();
    if ( *(_DWORD *)(sub_40B5E0() + 16) > *(_DWORD *)(v8 + 60) )
    {
      v9 = sub_40B5E0();
      *(_DWORD *)(sub_40B5E0() + 16) = *(_DWORD *)(v9 + 60);
    }
    goto LABEL_9;
  }
  --*(_DWORD *)(v1 + 16);
  *(_BYTE *)(a1 + 24) = 1;
  v3 = (int *)(sub_40B5E0() + 16);
  *v3 = (__int64)((double)(200 * *(_DWORD *)(sub_40B5E0() + 20))
                * ((double)*(int *)(v1 + 12)
                 * 1.5)
                * (double)*(int *)(a1 + 52)
                + (double)*v3);
  v4 = sub_40B5E0();
  if ( *(_DWORD *)(sub_40B5E0() + 16) > *(_DWORD *)(v4 + 60) )
  {
    v5 = sub_40B5E0();
    *(_DWORD *)(sub_40B5E0() + 16) = *(_DWORD *)(v5 + 60);
  }
  sub_4040B0(a1: 320, a2: *(_DWORD *)v1 + 118 * *(_DWORD *)(a1 + 32));
  return sub_413610(a1: 7);
}