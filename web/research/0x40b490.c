int __cdecl sub_40B490(int a1)
{
  int v1; // esi
  int v2; // eax
  int i; // ecx
  int v5; // eax
  int v6; // eax
  _BYTE v7[3]; // [esp+5h] [ebp-803h]
  _BYTE v8[1024]; // [esp+8h] [ebp-800h] BYREF
  _BYTE v9[1024]; // [esp+408h] [ebp-400h] BYREF

  ++*(_DWORD *)(a1 + 32);
  sub_411780();
  sub_411760(a1: v8);
  v1 = *(_DWORD *)(a1 + 32);
  if ( v1 <= 32 )
  {
    for ( i = 0; i < 1024; v8[i + 1022] = v1 * (unsigned __int8)v7[i + 1] / 32 )
    {
      v5 = (unsigned __int8)v8[i];
      i += 4;
      v8[i + 1020] = v1 * v5 / 32;
      v8[i + 1021] = v1 * (unsigned __int8)v7[i] / 32;
    }
    v6 = sub_411780();
    return (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 28))(a1: v6, a2: v9);
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
    v2 = sub_411780();
    return (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 28))(a1: v2, a2: v8);
  }
}