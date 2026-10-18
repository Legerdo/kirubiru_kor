int __cdecl sub_401850(int a1)
{
  int result; // eax
  int v3; // edx
  int v4; // esi
  int v5; // esi
  float v6; // [esp+8h] [ebp+4h]

  result = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 12) + 32;
  if ( result <= 0 )
  {
    if ( *(_BYTE *)(a1 + 40) != 0 )
    {
      *(float *)(a1 + 32) = *(float *)(*(_DWORD *)(a1 + 12) + 64) - 304.0;
    }
    else
    {
      *(float *)(a1 + 32) = *(float *)(a1 + 36) + *(float *)(a1 + 32);
      v6 = *(float *)(a1 + 36) + 0.05f;
      *(float *)(a1 + 36) = v6;
      if ( *(float *)(v3 + 32) - 304.0 <= *(float *)(a1 + 32) )
      {
        if ( *(float *)(v3 + 32) - 200.0 < *(float *)(a1 + 32) )
          *(float *)(a1 + 36) = v6 - 0.05f;
      }
      else
      {
        *(_BYTE *)(a1 + 40) = 1;
      }
    }
    if ( *(_DWORD *)(v3 + 48) == 0 )
    {
      *(_DWORD *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 24) = 1;
    }
    if ( *(float *)(a1 + 32) > 0.0 )
      *(_DWORD *)(a1 + 32) = 0;
    v4 = (__int64)*(float *)(a1 + 32);
    *(_DWORD *)(sub_40B5E0() + 8) = v4;
    v5 = *(_DWORD *)(sub_40B5E0() + 8) + 480;
    result = sub_40B5E0();
    *(_DWORD *)(result + 12) = v5;
  }
  return result;
}