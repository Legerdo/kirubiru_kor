int __cdecl sub_408B20(int a1)
{
  int v1; // ebp
  int v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int i; // ecx
  int v7; // ecx
  int v8; // edi
  int v9; // ebx
  int v10; // esi
  int v11; // eax
  int result; // eax
  int j; // [esp+10h] [ebp-8h]
  int v14; // [esp+14h] [ebp-4h]

  v1 = 7;
  v14 = 350;
  if ( *(_DWORD *)(sub_40B5E0() + 56) != 0 )
  {
    v1 = 8;
    v14 = 314;
  }
  v2 = a1;
  v3 = *(_DWORD *)(sub_40B5E0() + 16);
  v4 = 1;
  v5 = v3 - *(_DWORD *)(a1 + 32);
  for ( i = v1; i != 0; --i )
  {
    v4 *= 10;
    if ( v5 == v4 )
      --v5;
  }
  v7 = 1;
  for ( j = v1; j != 0; --j )
  {
    if ( v5 / v7 % 10 != 0 )
      *(_DWORD *)(a1 + 32) += v7;
    v7 *= 10;
  }
  v8 = 1;
  v9 = v14 + 36 * v1;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v2 + 32) / v8 % 10;
    v11 = sub_411780();
    result = (*(int (__thiscall **)(int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v11 + 12))(
               a1: v11,
               a2: 2,
               a3: v9,
               a4: 432,
               a5: 38,
               a6: 48,
               a7: 38 * v10,
               a8: 0);
    v9 -= 36;
    v8 *= 10;
    if ( --v1 == 0 )
      break;
    v2 = a1;
  }
  return result;
}