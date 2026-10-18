int sub_401040()
{
  int v0; // ebx
  int v1; // edi
  int v2; // esi
  int v3; // ebp
  int v4; // eax
  int result; // eax
  int v6; // eax
  int v7; // et2
  int v8; // eax
  int v9; // [esp-8h] [ebp-18h]
  int v10; // [esp-4h] [ebp-14h]

  v0 = -*(_DWORD *)sub_40B5E0();
  v1 = *(_DWORD *)(sub_40B5E0() + 8);
  v2 = 0;
  v3 = v1;
  if ( v1 < 0 )
  {
    v2 = -v1;
    v3 = 0;
  }
  if ( v1 <= -480 )
  {
    v10 = *(_DWORD *)(sub_40B5E0() + 80);
    v9 = 480;
  }
  else
  {
    v4 = sub_411780();
    (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, int))(*(_DWORD *)v4 + 12))(
      a1: v4,
      a2: 11,
      a3: v0,
      a4: v2,
      a5: 640,
      a6: 480 - v2,
      a7: 0,
      a8: v3);
    v10 = *(_DWORD *)(sub_40B5E0() + 80);
    v9 = v2;
  }
  sub_411780();
  result = sub_411370(a1: 0, a2: 0, a3: 640, a4: v9, a5: v10);
  if ( v1 < -1440 )
  {
    v6 = rand();
    v7 = v6 % 10;
    result = v6 / 10;
    if ( v7 == 0 )
    {
      v8 = rand();
      return sub_4085F0(a1: v8 % 640, a2: v1 - 120, a3: 0);
    }
  }
  return result;
}