int __thiscall sub_411370(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  _DWORD v8[4]; // [esp+0h] [ebp-74h] BYREF
  _DWORD v9[25]; // [esp+10h] [ebp-64h] BYREF

  if ( *(_BYTE *)(this + 1564) != 0 )
  {
    memset(v9, 0, sizeof(v9));
    v8[0] = a2;
    v9[20] = a6;
    v8[2] = a4 + a2;
    v8[1] = a3;
    v8[3] = a5 + a3;
    v7 = *(_DWORD *)(this + 12);
    v9[0] = 100;
    (*(void (__stdcall **)(int, _DWORD *, _DWORD, _DWORD, int, _DWORD *))(*(_DWORD *)v7 + 20))(
      a1: v7,
      a2: v8,
      a3: 0,
      a4: 0,
      a5: 16778240,
      a6: v9);
  }
  return 1;
}