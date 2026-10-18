int __cdecl sub_402EE0(int a1)
{
  double v1; // st7
  double v2; // st7
  unsigned __int8 v4; // c0
  unsigned __int8 v5; // c3
  _DWORD *v6; // eax
  int v7; // esi
  int v8; // edi
  int v9; // ebx
  int v10; // eax

  if ( *(float *)(a1 + 68) < 0.0 )
    *(_DWORD *)(a1 + 68) = 0;
  v1 = *(float *)(a1 + 68) + 0.1f;
  *(float *)(a1 + 68) = v1;
  v2 = v1 + *(float *)(a1 + 64);
  *(float *)(a1 + 64) = v2;
  if ( (v4 | v5) != 0 )
  {
    *(_DWORD *)(a1 + 36) = (__int64)v2;
  }
  else
  {
    *(_DWORD *)(a1 + 64) = 1134034944;
    *(_DWORD *)(a1 + 36) = 304;
  }
  v6 = (_DWORD *)sub_40B5E0();
  v7 = *(_DWORD *)(a1 + 36);
  v8 = *(_DWORD *)(a1 + 32) - *v6;
  v9 = v7 - *(_DWORD *)(sub_40B5E0() + 8);
  v10 = sub_411780();
  if ( v7 == 304 )
    return (*(int (__thiscall **)(int, _DWORD, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v10 + 12))(
             a1: v10,
             a2: 0,
             a3: v8,
             a4: v9,
             a5: 128,
             a6: 128,
             a7: 0,
             a8: 0);
  else
    return (*(int (__thiscall **)(int, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v10 + 12))(
             a1: v10,
             a2: 0,
             a3: v8,
             a4: v9,
             a5: 128,
             a6: 128,
             a7: 384,
             a8: 128);
}