int __cdecl sub_401340(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebp
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  int v15; // esi
  char *v16; // esi
  int i; // ebx
  int v18; // edx
  int v19; // edx
  _DWORD *v20; // eax
  int j; // ecx
  int v23; // [esp+10h] [ebp-274h]
  int v24; // [esp+14h] [ebp-270h]
  _DWORD v25[9]; // [esp+18h] [ebp-26Ch]
  _DWORD v26[4]; // [esp+3Ch] [ebp-248h] BYREF
  char v27; // [esp+4Ch] [ebp-238h] BYREF
  _BYTE v28[12]; // [esp+58h] [ebp-22Ch] BYREF
  _DWORD v29[8]; // [esp+64h] [ebp-220h] BYREF
  _BYTE v30[512]; // [esp+84h] [ebp-200h]

  v6 = a2;
  v7 = *(_DWORD *)(sub_40B5E0() + 8);
  v25[1] = 0;
  LOBYTE(v25[6]) = 0;
  v25[7] = 0;
  v25[8] = 0;
  v29[7] = sub_401530;
  v29[0] = 16;
  v25[3] = a1;
  v25[0] = v7 - 118 * a2 - 238;
  v25[4] = a2 + 2;
  v25[2] = v25[0] << 6;
  v25[5] = a3;
  v29[1] = 0;
  v29[2] = 30;
  v29[3] = 0;
  qmemcpy(v30, v25, 36);
  v8 = a5;
  v23 = sub_4128C0(a1: v29);
  v9 = a4;
  v10 = a6 + a4 + a5;
  if ( v10 == 0 )
  {
    v10 = 1;
    v9 = 0;
    v8 = 1;
  }
  v11 = 100 * v9 / v10;
  v12 = 100 * v8 / v10;
  v13 = 3;
  v24 = v12;
  v14 = v28;
  do
  {
    *(v14 - 3) = 2;
    *v14 = 2;
    *(v14 - 6) = 0;
    ++v14;
    --v13;
  }
  while ( v13 != 0 );
  v15 = v23;
  v26[0] = 0;
  sub_4015C0(a1: v26, a2: v23);
  if ( a2 > 0 )
  {
    do
    {
      v16 = &v27;
      for ( i = 3; i != 0; --i )
      {
        v18 = rand() % 100;
        if ( v11 <= v18 )
          *(_DWORD *)v16 = (v11 + v24 <= v18) + 2;
        else
          *(_DWORD *)v16 = 1;
        v19 = 4 - *(_DWORD *)v16;
        v16 += 4;
        *((_DWORD *)v16 - 4) = 120 * v19;
        *((_DWORD *)v16 + 2) = *((_DWORD *)v16 - 1);
      }
      ++v26[0];
      sub_4015C0(a1: v26, a2: v23);
      --v6;
    }
    while ( v6 != 0 );
    v15 = v23;
  }
  v20 = v28;
  for ( j = 3; j != 0; --j )
  {
    *(v20 - 3) = 2;
    *v20 = 2;
    *(v20 - 6) = 480;
    ++v20;
  }
  ++v26[0];
  sub_4015C0(a1: v26, a2: v15);
  return v15;
}