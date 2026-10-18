int __cdecl sub_408720(int a1)
{
  int v1; // edi
  int v2; // esi
  int v3; // ebx
  int v4; // eax
  int result; // eax

  v1 = 0;
  v2 = 170;
  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 44);
  do
  {
    v4 = sub_411780();
    if ( v1 >= v3 )
      result = (*(int (__thiscall **)(int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v4 + 12))(
                 a1: v4,
                 a2: 1,
                 a3: v2,
                 a4: 432,
                 a5: 48,
                 a6: 48,
                 a7: 48,
                 a8: 0);
    else
      result = (*(int (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 12))(
                 a1: v4,
                 a2: 1,
                 a3: v2,
                 a4: 432,
                 a5: 48,
                 a6: 48,
                 a7: 0,
                 a8: 0);
    v2 += 48;
    ++v1;
  }
  while ( v2 < 314 );
  return result;
}