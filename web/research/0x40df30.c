int __usercall sub_40DF30@<eax>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int v4; // eax
  int v5; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  int i; // edi
  int v10; // eax
  int v11; // ebp
  int v12; // ebx
  int v13; // eax
  int j; // edi
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  int k; // edi
  int v19; // esi
  int v20; // eax
  int result; // eax
  int v22; // esi
  HDC v23; // esi
  int v24; // [esp+BCh] [ebp-418h]
  int v25; // [esp+C0h] [ebp-414h]
  int v26; // [esp+C0h] [ebp-414h]
  int v27; // [esp+C0h] [ebp-414h]
  int v28; // [esp+C0h] [ebp-414h]
  int v29; // [esp+C0h] [ebp-414h]
  int v30; // [esp+C0h] [ebp-414h]
  int v31; // [esp+C4h] [ebp-410h]
  int v32; // [esp+C4h] [ebp-410h]
  int v33; // [esp+C4h] [ebp-410h]
  int v34; // [esp+C4h] [ebp-410h]
  int v35; // [esp+C4h] [ebp-410h]
  int v36; // [esp+C4h] [ebp-410h]
  int v37; // [esp+C8h] [ebp-40Ch]
  int v38; // [esp+C8h] [ebp-40Ch]
  int v39; // [esp+C8h] [ebp-40Ch]
  int v40; // [esp+C8h] [ebp-40Ch]
  int v41; // [esp+C8h] [ebp-40Ch]
  int v42; // [esp+C8h] [ebp-40Ch]
  int v43; // [esp+CCh] [ebp-408h]
  int v44; // [esp+CCh] [ebp-408h]
  int v45; // [esp+CCh] [ebp-408h]
  int v46; // [esp+CCh] [ebp-408h]
  int v47; // [esp+CCh] [ebp-408h]
  int v48; // [esp+CCh] [ebp-408h]
  HDC hdc; // [esp+D0h] [ebp-404h] BYREF
  _DWORD v50[256]; // [esp+D4h] [ebp-400h] BYREF

  sub_412090();
  sub_412870();
  if ( (unsigned __int8)sub_412180(a1: 9) != 0 )
  {
    dword_41F798 = 1;
    dword_41F79C = sub_40C080;
    if ( *(int *)dword_41F6DC > sub_410280() )
      sub_4102D0(Buffer: dword_41F6DC[0]);
    sub_412950();
    sub_412870();
    ((void (*)(void))sub_411780)();
    sub_411760(a1: v50);
    v4 = ((int (*)(void))sub_411780)();
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 28))(a1: v4, a2: v50);
  }
  if ( (unsigned __int8)sub_412180(a1: 10) != 0 )
    sub_4108E0();
  v24 = sub_40B5E0()[19];
  ((void (*)(void))sub_411780)();
  sub_411370(a1: 0, a2: 0, a3: 640, a4: 480, a5: v24);
  v5 = sub_411780(a1: a3, a2: a4, a3: a2, a4: a1);
  (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD, int, int, int, int))(*(_DWORD *)v5 + 12))(
    a1: v5,
    a2: 26,
    a3: 220,
    a4: 20,
    a5: 200,
    a6: 100,
    a7: 0,
    a8: 0,
    a9: v25,
    a10: v31,
    a11: v37,
    a12: v43);
  v6 = dword_41F6A0;
  v7 = 1;
  v8 = sub_411780(a1: hdc, a2: v50[0], a3: v50[1], a4: v50[2]);
  (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v8 + 12))(
    a1: v8,
    a2: 24,
    a3: 448,
    a4: 142,
    a5: 200,
    a6: 100,
    a7: 0,
    a8: 0);
  for ( i = 384; i > 0; i -= 48 )
  {
    if ( v6 / v7 > 0 || i == 384 )
    {
      v10 = sub_411780(a1: hdc, a2: v50[0], a3: v50[1], a4: v50[2]);
      (*(void (__thiscall **)(int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v10 + 12))(
        a1: v10,
        a2: 21,
        a3: i,
        a4: 150,
        a5: 64,
        a6: 64,
        a7: (v6 / v7 % 10) << 6,
        a8: 0);
    }
    v7 *= 10;
  }
  v11 = dword_41F698;
  v12 = 1;
  v13 = sub_411780(a1: hdc, a2: v50[0], a3: v50[1], a4: v50[2]);
  v44 = 0;
  v38 = 0;
  v32 = 100;
  v26 = 100;
  (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v13 + 12))(a1: v13, a2: 25, a3: 448, a4: 242);
  for ( j = 384; j > 0; j -= 48 )
  {
    if ( v11 / v12 > 0 || j == 384 )
    {
      v15 = sub_411780(a1: v26, a2: v32, a3: v38, a4: v44);
      (*(void (__thiscall **)(int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v15 + 12))(
        a1: v15,
        a2: 21,
        a3: j,
        a4: 250,
        a5: 64,
        a6: 64,
        a7: (v11 / v12 % 10) << 6,
        a8: 0);
    }
    v12 *= 10;
  }
  if ( dword_41F6E4 < 11 )
  {
    v16 = 1;
    v17 = sub_411780(a1: v26, a2: v32, a3: v38, a4: v44);
    (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v17 + 12))(
      a1: v17,
      a2: 34,
      a3: 600,
      a4: 10,
      a5: 32,
      a6: 32,
      a7: 0,
      a8: 0);
    for ( k = 580; k > 540; k -= 20 )
    {
      v19 = dword_41F6E4 / v16 % 10;
      if ( dword_41F6E4 / v16 > 0 || k == 580 )
      {
        v20 = sub_411780(a1: v26, a2: v32, a3: v38, a4: v44);
        (*(void (__thiscall **)(int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)v20 + 12))(
          a1: v20,
          a2: 31,
          a3: k,
          a4: 12,
          a5: 20,
          a6: 24,
          a7: 20 * v19,
          a8: 0);
      }
      v16 *= 10;
    }
  }
  result = sub_410280();
  if ( *(int *)dword_41F6DC > result )
  {
    v22 = sub_411780(a1: v26, a2: v32, a3: v38, a4: v44);
    if ( *(_BYTE *)(v22 + 1564) != 0 )
    {
      (*(void (__stdcall **)(_DWORD, HDC *))(**(_DWORD **)(v22 + 12) + 68))(a1: *(_DWORD *)(v22 + 12), a2: &hdc);
      SetBkMode(hdc, mode: 1);
      SelectObject(hdc, h: *(HGDIOBJ *)(v22 + 1568));
      v23 = hdc;
      if ( hdc != nullptr )
        SetTextColor(hdc, color: 0);
    }
    else
    {
      v23 = nullptr;
    }
    if ( *(_DWORD *)dword_41F6DC == 1 )
    {
      if ( *(_BYTE *)(sub_411780(a1: v27, a2: v33, a3: v39, a4: v45) + 1564) != 0 )
        TextOutA(hdc: v23, x: 222, y: 350, lpString: String, c: strlen(String));
      if ( *(_BYTE *)(sub_411780(a1: v28, a2: v34, a3: v40, a4: v46) + 1564) != 0 )
        TextOutA(hdc: v23, x: 96, y: 400, lpString: byte_41E654, c: strlen(byte_41E654));
    }
    else
    {
      if ( *(_BYTE *)(sub_411780(a1: v27, a2: v33, a3: v39, a4: v45) + 1564) != 0 )
        TextOutA(hdc: v23, x: 222, y: 350, lpString: String, c: strlen(String));
      if ( *(_BYTE *)(sub_411780(a1: v30, a2: v36, a3: v42, a4: v48) + 1564) != 0 )
        TextOutA(hdc: v23, x: 82, y: 400, lpString: byte_41E630, c: strlen(byte_41E630));
    }
    result = sub_411780(a1: v29, a2: v35, a3: v41, a4: v47);
    if ( *(_BYTE *)(result + 1564) != 0 )
      return (*(int (__stdcall **)(_DWORD, HDC))(**(_DWORD **)(result + 12) + 104))(
               a1: *(_DWORD *)(result + 12),
               a2: v23);
  }
  return result;
}