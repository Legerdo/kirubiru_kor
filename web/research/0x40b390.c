int __cdecl sub_40B390(int a1)
{
  int result; // eax
  int v2; // esi
  int i; // ecx
  int v4; // eax
  int v5; // eax
  _BYTE v6[3]; // [esp+1h] [ebp-803h]
  _BYTE v7[1024]; // [esp+4h] [ebp-800h] BYREF
  _BYTE v8[1024]; // [esp+404h] [ebp-400h] BYREF

  ++*(_DWORD *)(a1 + 32);
  sub_411780();
  sub_411760(a1: v7);
  result = *(_DWORD *)(a1 + 32);
  if ( result <= 32 )
  {
    v2 = 32 - result;
    for ( i = 0; i < 1024; v7[i + 1022] = v2 * (unsigned __int8)v6[i + 1] / 32 )
    {
      v4 = (unsigned __int8)v7[i];
      i += 4;
      v7[i + 1020] = v2 * v4 / 32;
      v7[i + 1021] = v2 * (unsigned __int8)v6[i] / 32;
    }
    v5 = sub_411780();
    return (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 28))(a1: v5, a2: v8);
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;
}