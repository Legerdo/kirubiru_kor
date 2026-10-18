HDC __cdecl sub_4090C0(int a1)
{
  int v1; // ebp
  int v2; // edi
  int v3; // esi
  HDC v4; // ebx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // kr04_4
  int v9; // eax
  HDC result; // eax
  HDC hdc; // [esp+10h] [ebp-4h] BYREF

  v1 = *(_DWORD *)(a1 + 32);
  v2 = 0;
  if ( (unsigned __int8)sub_412150(a1: 9) != 0 )
    *(_DWORD *)(a1 + 36) = 8;
  else
    *(_DWORD *)(a1 + 36) = 1;
  v3 = sub_411780();
  if ( *(_BYTE *)(v3 + 1564) != 0 )
  {
    (*(void (__stdcall **)(_DWORD, HDC *))(**(_DWORD **)(v3 + 12) + 68))(a1: *(_DWORD *)(v3 + 12), a2: &hdc);
    SetBkMode(hdc, mode: 1);
    SelectObject(hdc, h: *(HGDIOBJ *)(v3 + 1568));
    v4 = hdc;
  }
  else
  {
    v4 = nullptr;
  }
  SetTextColor(hdc: v4, color: 0xFFFFFFu);
  hdc = nullptr;
  while ( v1 != 0 )
  {
    v5 = *(_DWORD *)(v1 + 88);
    v6 = *(_DWORD *)(v1 + 84);
    hdc = (HDC)((char *)hdc + 1);
    if ( v5 >= v6 )
    {
      v7 = *(_DWORD *)(v1 + 76) - *(_DWORD *)(a1 + 36);
      *(_DWORD *)(v1 + 76) = v7;
      if ( v7 < -32 )
      {
        *(_BYTE *)(v1 + 24) = 1;
        if ( v2 != 0 )
          *(_DWORD *)(v2 + 92) = *(_DWORD *)(v1 + 92);
        else
          *(_DWORD *)(a1 + 32) = *(_DWORD *)(v1 + 92);
      }
      v8 = strlen((const char *)(v1 + 32)) + 1;
      TextOutA(
        hdc: v4,
        x: (int)(640 - 14 * (v8 - 1)) / 2,
        y: *(_DWORD *)(v1 + 76),
        lpString: (LPCSTR)(v1 + 32),
        c: v8 - 1);
      v2 = v1;
      v1 = *(_DWORD *)(v1 + 92);
    }
    else
    {
      v2 = v1;
      *(_DWORD *)(v1 + 88) = *(_DWORD *)(a1 + 36) + v5;
      v1 = *(_DWORD *)(v1 + 92);
    }
  }
  v9 = sub_411780();
  if ( *(_BYTE *)(v9 + 1564) != 0 )
    (*(void (__stdcall **)(_DWORD, HDC))(**(_DWORD **)(v9 + 12) + 104))(a1: *(_DWORD *)(v9 + 12), a2: v4);
  result = hdc;
  if ( hdc == nullptr )
  {
    result = (HDC)sub_40B5E0();
    *((_BYTE *)result + 41) = 0;
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;
}