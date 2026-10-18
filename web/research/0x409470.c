char __cdecl sub_409470(int a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  __int64 v8; // [esp-Ch] [ebp-10h]

  v1 = *(_DWORD *)(a1 + 56);
  if ( v1 != 0 )
  {
    v2 = v1 - 1;
    if ( v2 != 0 )
    {
      if ( v2 == 1 )
        *(_DWORD *)(a1 + 32) += 16;
    }
    else
    {
      *(_DWORD *)(a1 + 32) -= 16;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 36) += 10;
  }
  LOBYTE(v3) = *(_BYTE *)(a1 + 48);
  *(_DWORD *)(a1 + 40) ^= 0x40u;
  if ( (_BYTE)v3 == 0 )
  {
    v4 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0();
    v5 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0() + 8);
    v6 = sub_411780();
    (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v6 + 12))(
      a1: v6,
      a2: 58,
      a3: v4,
      a4: v5,
      a5: 64,
      a6: 64,
      a7: *(_DWORD *)(a1 + 40),
      a8: 0);
    if ( *(_DWORD *)(a1 + 36) + 32 > 429 && *(_DWORD *)(a1 + 56) == 0 )
    {
      *(_BYTE *)(a1 + 24) = 1;
      HIDWORD(v8) = 397;
      LODWORD(v8) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 36) = 397;
      sub_4093E0(a1: v8, a2: 1);
      LOBYTE(v3) = sub_4093E0(a1: *(_QWORD *)(a1 + 32), a2: 2);
      return v3;
    }
    v3 = *(_DWORD *)(a1 + 32);
    if ( v3 >= -64 && v3 <= 704 )
      return v3;
  }
  *(_BYTE *)(a1 + 24) = 1;
  return v3;
}