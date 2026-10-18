int __cdecl sub_403DB0(int a1)
{
  int v1; // eax
  bool v2; // zf
  signed int v3; // eax
  int *v4; // esi
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  int v9; // [esp-1Ch] [ebp-1Ch]
  int v10; // [esp-18h] [ebp-18h]
  int v11; // [esp-18h] [ebp-18h]
  int v12; // [esp-14h] [ebp-14h]
  int v13; // [esp-14h] [ebp-14h]
  int v14; // [esp-10h] [ebp-10h]
  int v15; // [esp-10h] [ebp-10h]
  int v16; // [esp-Ch] [ebp-Ch]

  v1 = *(_DWORD *)(a1 + 32);
  if ( v1 <= 0 )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = v1 - 1;
    v3 = rand() & 0x80000007;
    v2 = v3 == 0;
    if ( v3 < 0 )
      v2 = (((_BYTE)v3 - 1) | 0xFFFFFFF8) == -1;
    if ( v2 )
      sub_403E20();
  }
  v4 = (int *)sub_411780();
  v5 = *v4;
  v6 = sub_40B5E0(a1: 70, a2: 22, a3: 0, a4: 0);
  v7 = (_DWORD *)sub_40B5E0(a1: 184 - *(_DWORD *)(v6 + 8), a2: v10, a3: v12, a4: v14);
  return (*(int (__thiscall **)(int *, int, int, int, int, int, int, int))(v5 + 12))(
           a1: v4,
           a2: 50,
           a3: 366 - *v7,
           a4: v9,
           a5: v11,
           a6: v13,
           a7: v15,
           a8: v16);
}