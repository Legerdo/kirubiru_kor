void __cdecl sub_401C80(int a1)
{
  int v1; // edi
  int v2; // esi

  v1 = *(_DWORD *)(a1 + 92) + 1;
  *(_DWORD *)(a1 + 92) = v1;
  if ( v1 <= 14 )
  {
    *(_DWORD *)sub_40B5E0() = *(_DWORD *)(a1 + 4 * v1 + 32);
    v2 = *(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 92) + 32) + 640;
    *(_DWORD *)(sub_40B5E0() + 4) = v2;
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
}