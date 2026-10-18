int __cdecl sub_401250(int a1)
{
  int v1; // edi
  int v2; // esi
  int v3; // eax
  int *v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v9; // [esp-10h] [ebp-18h]

  v1 = (__int64)*(float *)(*(_DWORD *)(a1 + 12) + 56);
  v2 = 50 * *(_DWORD *)(sub_40B5E0() + 28) / 300;
  if ( v2 != 50 )
  {
    v4 = (int *)sub_411780();
    v5 = *v4;
    v9 = v2;
    goto LABEL_8;
  }
  if ( ++dword_41F460 % 3 == 0 )
    byte_41E050 = byte_41E050 == 0;
  if ( byte_41E050 == 0 )
  {
    v4 = (int *)sub_411780();
    v5 = *v4;
    v9 = 50;
LABEL_8:
    (*(void (__thiscall **)(int *, int, int, int, int, int, _DWORD, _DWORD))(v5 + 12))(
      a1: v4,
      a2: 28,
      a3: 65,
      a4: 448,
      a5: v9,
      a6: 4,
      a7: 0,
      a8: 0);
    goto LABEL_9;
  }
  v3 = sub_411780();
  (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v3 + 12))(
    a1: v3,
    a2: 29,
    a3: 65,
    a4: 448,
    a5: 50,
    a6: 4,
    a7: 0,
    a8: 0);
LABEL_9:
  v6 = sub_411780();
  (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v6 + 12))(
    a1: v6,
    a2: 27,
    a3: 56,
    a4: 458,
    a5: v1,
    a6: 16,
    a7: 0,
    a8: 0);
  v7 = sub_411780();
  return (*(int (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v7 + 12))(
           a1: v7,
           a2: 7,
           a3: 2,
           a4: 434,
           a5: 160,
           a6: 48,
           a7: 0,
           a8: 0);
}