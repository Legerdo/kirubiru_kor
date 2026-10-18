int __cdecl sub_403FC0(int a1)
{
  char v1; // al
  double v2; // st7
  double v3; // st7
  int v4; // eax

  sub_4129B0(a1: 127); /*0x403fc9*/
  v1 = *(_BYTE *)(a1 + 41); /*0x403fd4*/
  *(float *)(a1 + 32) = *(float *)(a1 + 36) + *(float *)(a1 + 32); /*0x403fde*/
  v2 = *(float *)(a1 + 36) + 0.4f; /*0x403fe4*/
  if ( v1 != 0 ) /*0x403fea*/
  {
    *(float *)(a1 + 36) = v2; /*0x40402f*/
    ++dword_41F670; /*0x404032*/
  }
  else
  {
    *(float *)(a1 + 36) = v2; /*0x403fec*/
    if ( *(float *)(a1 + 32) > 190.0 ) /*0x403ffd*/
    {
      if ( v2 < 3.0 ) /*0x404009*/
      {
        *(_BYTE *)(a1 + 41) = 1; /*0x40400b*/
        *(_DWORD *)(a1 + 36) = 1094713344; /*0x40400e*/
      }
      v3 = -*(float *)(a1 + 36) * 0.5; /*0x40401a*/
      *(_DWORD *)(a1 + 32) = 1128136704; /*0x404020*/
      *(_BYTE *)(a1 + 40) = 1; /*0x404027*/
      *(float *)(a1 + 36) = v3; /*0x40402a*/
    }
  }
  if ( dword_41F670 != 60 ) /*0x404043*/
  {
LABEL_10:
    if ( *(_BYTE *)(a1 + 48) == 0 ) /*0x404066*/
      goto LABEL_13; /*0x404066*/
    goto LABEL_11; /*0x404066*/
  }
  if ( *(_BYTE *)(a1 + 48) == 0 ) /*0x40404a*/
  {
    *(_DWORD *)(a1 + 44) = sub_40B350(); /*0x404051*/
    dword_41F670 = 0; /*0x404054*/
    *(_BYTE *)(a1 + 48) = 1; /*0x40405e*/
    goto LABEL_10; /*0x40405e*/
  }
LABEL_11:
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 44) + 24) != 0 ) /*0x404070*/
    *(_BYTE *)(sub_40B5E0() + 40) = 1; /*0x404077*/
LABEL_13:
  v4 = sub_411780(); /*0x40407a*/
  return (*(int (__fastcall **)(int, _DWORD, int, int, _DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 12))( /*0x4040a3*/
           a1: v4,
           a2: (unsigned __int64)(__int64)*(float *)(a1 + 32) >> 32,
           a3: 23,
           a4: 210,
           a5: (__int64)*(float *)(a1 + 32),
           a6: 220,
           a7: 100,
           a8: 0,
           a9: 0);
}