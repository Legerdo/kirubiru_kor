char __cdecl sub_4039D0(int a1)
{
  int v1; // ecx
  char result; // al
  int v3; // eax

  v1 = *(_DWORD *)(a1 + 32) + 1;
  *(_DWORD *)(a1 + 32) = v1;
  if ( v1 % 3 == 0 )
    *(_BYTE *)(a1 + 36) = *(_BYTE *)(a1 + 36) == 0;
  if ( v1 > 9 )
    *(_BYTE *)(a1 + 24) = 1;
  result = *(_BYTE *)(a1 + 36);
  if ( result != 0 )
  {
    v3 = sub_411780();
    return (*(int (__thiscall **)(int, _DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)v3 + 20))(
             a1: v3,
             a2: 0,
             a3: 0,
             a4: 640,
             a5: 480,
             a6: *(_DWORD *)(a1 + 40));
  }
  return result;
}