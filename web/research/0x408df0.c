int sub_408DF0()
{
  int v0; // esi
  _DWORD v2[136]; // [esp+Ch] [ebp-220h] BYREF

  *(_DWORD *)(sub_40B5E0() + 8) = -960;
  v0 = *(_DWORD *)(sub_40B5E0() + 8) + 480;
  *(_DWORD *)(sub_40B5E0() + 4) = v0;
  memset(&v2[1], 0, 12);
  v2[7] = sub_408E80;
  v2[0] = 32;
  v2[8] = -999292928;
  v2[9] = 1092616192;
  sub_4128C0(a1: v2);
  return sub_412970(a1: 8, a2: 6000);
}