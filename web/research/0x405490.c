void __cdecl sub_405490(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // eax
  int v4; // ecx
  int v5; // ebp
  int v6; // eax
  int v7; // ebx
  int v8; // ebx
  double v9; // st7
  int v10; // eax
  bool v11; // cc
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // edi
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // edi
  int v22; // esi
  int v23; // esi
  __int64 v24; // [esp-10h] [ebp-24h]

  v1 = *(_DWORD *)(a1 + 32);
  v2 = *(_DWORD *)(a1 + 36);
  if ( *(_BYTE *)(v2 + 24) != 0 )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v3 = *(_DWORD *)(v2 + 40);
    v4 = *(_DWORD *)(v1 + 32);
    v5 = *(_DWORD *)(v2 + 32) + 120;
    if ( v3 + 40 < v4 + 88 && v3 + 80 > v4 + 40 )
    {
      if ( *(_DWORD *)(v2 + 32) == 309 && *(_DWORD *)(v1 + 48) == 0 && *(int *)(v1 + 8) > 0 && *(int *)(v1 + 44) > 0 )
      {
        sub_4129F0(a1: 8);
        --*(_DWORD *)(v1 + 44);
        *(_DWORD *)(v1 + 48) = 180;
        v6 = *(_DWORD *)(v2 + 64);
        *(_DWORD *)(v1 + 80) = 12;
        *(_DWORD *)(v1 + 40) = v6;
        *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_4021D0;
        v7 = sub_40B5E0();
        if ( *(_DWORD *)(sub_40B5E0() + 20) > *(_DWORD *)(v7 + 24) )
        {
          v8 = sub_40B5E0();
          *(_DWORD *)(sub_40B5E0() + 24) = *(_DWORD *)(v8 + 20);
        }
        *(_DWORD *)(sub_40B5E0() + 20) = 0;
        v9 = *(float *)(v1 + 56) + 30.0;
        *(float *)(v1 + 56) = v9;
        if ( v9 > 100.0 )
          *(_DWORD *)(v1 + 56) = 1120403456;
        v10 = sub_40B5E0();
        *(_DWORD *)(v10 + 28) += 90;
        if ( *(int *)(sub_40B5E0() + 28) > 300 )
          *(_DWORD *)(sub_40B5E0() + 28) = 300;
        sub_413610(a1: 6);
        *(_BYTE *)(v2 + 52) = 1;
        if ( *(int *)(v1 + 44) <= 0 )
          sub_403F50();
      }
      switch ( *(_DWORD *)(v1 + 80) )
      {
        case 0:
        case 2:
          if ( v5 > *(_DWORD *)(v1 + 36) + 90 && *(int *)(v2 + 44) > 0 && *(_DWORD *)(v1 + 48) == 0 )
            goto LABEL_21;
          break;
        case 1:
          v12 = *(_DWORD *)(v1 + 36);
          if ( v5 <= v12 + 10 )
          {
            v11 = v5 <= v12 + 90;
            goto LABEL_37;
          }
          *(_DWORD *)(v1 + 80) = 0;
          v13 = *(_DWORD *)(v2 + 56) - 1;
          *(_BYTE *)(v2 + 60) = 1;
          *(_DWORD *)(v2 + 56) = v13;
          if ( *(int *)(v1 + 48) > 0 )
            *(_DWORD *)(v2 + 56) = 0;
          *(_DWORD *)(v1 + 48) = 0;
          *(_DWORD *)(v2 + 44) += -10 * *(_DWORD *)(v2 + 48);
          v14 = sub_40B5E0();
          ++*(_DWORD *)(v14 + 20);
          if ( *(int *)(sub_40B5E0() + 20) > 999 )
            *(_DWORD *)(sub_40B5E0() + 20) = 999;
          if ( (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2 <= 30 )
          {
            v16 = (_DWORD *)(sub_40B5E0() + 28);
            *v16 += (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2;
          }
          else
          {
            v15 = sub_40B5E0();
            *(_DWORD *)(v15 + 28) += 30;
          }
          if ( *(int *)(sub_40B5E0() + 28) > 300 )
            *(_DWORD *)(sub_40B5E0() + 28) = 300;
          goto LABEL_35;
        case 3:
        case 6:
          if ( v5 > *(_DWORD *)(v1 + 36) + 48 )
          {
            *(float *)(v1 + 68) = (double)*(int *)(v2 + 44) * 0.0078125;
            *(float *)(v1 + 64) = (float)(v5 - 48);
          }
          break;
        case 4:
          if ( *(float *)(v1 + 68) * 6.0 + (double)*(int *)(v1 + 36) < (double)v5 || v5 > *(_DWORD *)(v1 + 36) + 10 )
          {
            *(_DWORD *)(v1 + 80) = 3;
            v18 = *(_DWORD *)(v2 + 56) - 1;
            *(_BYTE *)(v2 + 60) = 1;
            *(_DWORD *)(v2 + 56) = v18;
            if ( *(int *)(v1 + 48) > 0 )
              *(_DWORD *)(v2 + 56) = 0;
            *(_DWORD *)(v1 + 48) = 0;
            *(_DWORD *)(v2 + 44) += -10 * *(_DWORD *)(v2 + 48);
            v19 = sub_40B5E0();
            ++*(_DWORD *)(v19 + 20);
            if ( *(int *)(sub_40B5E0() + 20) > 999 )
              *(_DWORD *)(sub_40B5E0() + 20) = 999;
            if ( (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2 <= 30 )
            {
              v21 = (_DWORD *)(sub_40B5E0() + 28);
              *v21 += (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2;
            }
            else
            {
              v20 = sub_40B5E0();
              *(_DWORD *)(v20 + 28) += 30;
            }
            if ( *(int *)(sub_40B5E0() + 28) > 300 )
              *(_DWORD *)(sub_40B5E0() + 28) = 300;
LABEL_35:
            sub_408C10(a1: *(_DWORD *)(v1 + 32), a2: *(_DWORD *)(v1 + 36) - 30);
            HIDWORD(v24) = *(_DWORD *)(v1 + 36) - *(_DWORD *)(sub_40B5E0() + 8) - 30;
            LODWORD(v24) = *(_DWORD *)(v1 + 32) - 70;
            sub_403110(a1: v24);
            sub_412970(a1: 127, a2: 3);
            v17 = rand();
            sub_413610(a1: v17 % 3);
          }
          break;
        case 7:
          if ( v5 > *(_DWORD *)(v1 + 36) + 50 )
          {
            *(_DWORD *)(v1 + 80) = 8;
            *(_DWORD *)(v1 + 48) = 0;
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_4024F0;
            *(_DWORD *)(v2 + 44) = -32 * *(_DWORD *)(v2 + 48);
            v22 = sub_40B5E0();
            if ( *(_DWORD *)(sub_40B5E0() + 20) > *(_DWORD *)(v22 + 24) )
            {
              v23 = sub_40B5E0();
              *(_DWORD *)(sub_40B5E0() + 24) = *(_DWORD *)(v23 + 20);
            }
            *(_DWORD *)(sub_40B5E0() + 20) = 0;
            sub_413610(a1: 5);
          }
          break;
        case 8:
          if ( v5 > *(_DWORD *)(v1 + 36) + 60 )
            *(_DWORD *)(v2 + 36) += -512 / *(_DWORD *)(v2 + 48);
          break;
        case 0xA:
          if ( v5 > *(_DWORD *)(v1 + 36) + 50 )
          {
            *(_DWORD *)(v1 + 80) = 9;
            *(_DWORD *)(v1 + 48) = 0;
            *(_DWORD *)(v1 + 68) = 1090519040;
            *(float *)(v1 + 64) = (float)(v5 - 50);
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_402590;
            *(_DWORD *)(v2 + 44) = -16 * *(_DWORD *)(v2 + 48);
            sub_413610(a1: 5);
          }
          break;
        case 0xB:
          v11 = v5 <= *(_DWORD *)(v1 + 36) + 80;
LABEL_37:
          if ( !v11 && *(int *)(v2 + 44) > 0 )
LABEL_21:
            sub_4129B0(a1: 8);
          break;
        default:
          return;
      }
    }
  }
}