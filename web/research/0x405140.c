void __cdecl sub_405140(int a1)
{
  int v1; // ecx
  int v2; // esi
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // edi
  unsigned int v6; // ebp
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // edi
  __int64 v14; // [esp-10h] [ebp-24h]

  v1 = *(_DWORD *)(a1 + 36);
  v2 = *(_DWORD *)(a1 + 32) + 32;
  v3 = (_DWORD *)(*(_DWORD *)(v1 + 12) + 32);
  if ( *(_BYTE *)(v1 + 24) != 0 )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v4 = *(_DWORD *)(v1 + 32);
    v5 = *(_DWORD *)(v1 + 36) + *v3 + 440;
    if ( v4 < *(_DWORD *)v2 + 88 && v4 + 80 > *(_DWORD *)v2 + 40 )
    {
      v6 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 80) - 1;
      if ( v6 <= 0xD )
      {
        switch ( byte_405428[v6] )
        {
          case 0:
            if ( v5 <= *(_DWORD *)(*(_DWORD *)(a1 + 32) + 36) + 10 )
              return;
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 80) = 0;
            *(_BYTE *)(v1 + 48) = 1;
            *(_DWORD *)(v1 + 52) = 1;
            v7 = sub_40B5E0();
            ++*(_DWORD *)(v7 + 20);
            if ( *(int *)(sub_40B5E0() + 20) > 999 )
              *(_DWORD *)(sub_40B5E0() + 20) = 999;
            if ( (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2 <= 30 )
            {
              v9 = (_DWORD *)(sub_40B5E0() + 28);
              *v9 += (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2;
            }
            else
            {
              v8 = sub_40B5E0();
              *(_DWORD *)(v8 + 28) += 30;
            }
            if ( *(int *)(sub_40B5E0() + 28) > 300 )
              *(_DWORD *)(sub_40B5E0() + 28) = 300;
            break;
          case 1:
            if ( v5 > *(_DWORD *)(*(_DWORD *)(a1 + 32) + 36) + 48 )
            {
              *(float *)(*(_DWORD *)(a1 + 32) + 68) = (double)*(int *)(*(_DWORD *)(v1 + 12) + 36) * 0.0078125 + 1.0;
              *(float *)(v2 + 32) = (float)(v5 - 47);
            }
            return;
          case 2:
            if ( *(float *)(*(_DWORD *)(a1 + 32) + 68) * 6.0 + (double)*(int *)(*(_DWORD *)(a1 + 32) + 36) >= (double)(*(_DWORD *)(v1 + 36) + *v3 + 440)
              && v5 <= *(_DWORD *)(*(_DWORD *)(a1 + 32) + 36) + 10 )
            {
              return;
            }
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 80) = 3;
            *(_BYTE *)(v1 + 48) = 1;
            *(_DWORD *)(v1 + 52) = 1;
            v11 = sub_40B5E0();
            ++*(_DWORD *)(v11 + 20);
            if ( *(int *)(sub_40B5E0() + 20) > 999 )
              *(_DWORD *)(sub_40B5E0() + 20) = 999;
            if ( (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2 <= 30 )
            {
              v13 = (_DWORD *)(sub_40B5E0() + 28);
              *v13 += (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2;
            }
            else
            {
              v12 = sub_40B5E0();
              *(_DWORD *)(v12 + 28) += 30;
            }
            if ( *(int *)(sub_40B5E0() + 28) > 300 )
              *(_DWORD *)(sub_40B5E0() + 28) = 300;
            break;
          case 3:
            if ( v5 > *(_DWORD *)(*(_DWORD *)(a1 + 32) + 36) + 48 )
            {
              *(float *)(*(_DWORD *)(a1 + 32) + 68) = (double)*(int *)(*(_DWORD *)(v1 + 12) + 36) * 0.0078125;
              *(float *)(v2 + 32) = (float)(v5 - 48);
            }
            return;
          case 4:
            return;
          default:
            abort();
        }
        sub_408C10(a1: *(_DWORD *)v2, a2: *(_DWORD *)(v2 + 4) - 30);
        HIDWORD(v14) = *(_DWORD *)(v2 + 4) - *(_DWORD *)(sub_40B5E0() + 8) - 30;
        LODWORD(v14) = *(_DWORD *)v2 - 70;
        sub_403110(a1: v14);
        sub_412970(a1: 127, a2: 3);
        v10 = rand();
        sub_413610(a1: v10 % 3);
      }
    }
  }
}