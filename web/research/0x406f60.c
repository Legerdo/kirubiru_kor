void __cdecl sub_406F60(int a1)
{
  int v1; // ecx
  int v2; // esi
  int v3; // edx
  int v4; // ecx
  int v5; // edi
  int v6; // edi
  double v7; // st7
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // edi
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // edi
  int v20; // esi
  int v21; // esi
  __int64 v22; // [esp-10h] [ebp-20h]

  v1 = *(_DWORD *)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 32);
  if ( *(_BYTE *)(v1 + 24) != 0 )
  {
    *(_BYTE *)(sub_40B5E0() + 41) = 0;
    *(_DWORD *)(sub_40B5E0() + 64) = 0;
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v3 = *(_DWORD *)(v1 + 32) + 468;
    if ( *(_DWORD *)(v1 + 32) != -39 || *(_DWORD *)(v2 + 48) != 0 || *(int *)(v2 + 8) <= 0 || *(int *)(v2 + 44) <= 0 )
    {
      switch ( *(_DWORD *)(v2 + 80) )
      {
        case 0:
        case 2:
          if ( v3 > *(_DWORD *)(v2 + 36) + 90 && *(int *)(v1 + 36) > 0 && *(_DWORD *)(v2 + 48) == 0 )
            goto LABEL_21;
          break;
        case 1:
          v10 = *(_DWORD *)(v2 + 36);
          if ( v3 <= v10 + 10 )
          {
            v9 = v10 + 90;
            goto LABEL_37;
          }
          *(_DWORD *)(v2 + 80) = 0;
          *(_BYTE *)(v1 + 52) = 1;
          *(_DWORD *)(v1 + 56) = 1;
          if ( *(int *)(v2 + 48) > 0 )
          {
            v11 = *(_DWORD *)(v1 + 44);
            v12 = *(_DWORD *)(v1 + 32) - 32;
            *(_DWORD *)(v1 + 56) = 5;
            *(_DWORD *)(v1 + 32) = v12;
            *(_DWORD *)(v1 + 36) = -27 * v11;
            *(_DWORD *)(v1 + 40) = v12 << 6;
          }
          *(_DWORD *)(v2 + 48) = 0;
          *(_DWORD *)(v1 + 36) += -5 * *(_DWORD *)(v1 + 44);
          v13 = sub_40B5E0();
          ++*(_DWORD *)(v13 + 20);
          if ( *(int *)(sub_40B5E0() + 20) > 999 )
            *(_DWORD *)(sub_40B5E0() + 20) = 999;
          if ( (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2 <= 30 )
          {
            v15 = (_DWORD *)(sub_40B5E0() + 28);
            *v15 += (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2;
          }
          else
          {
            v14 = sub_40B5E0();
            *(_DWORD *)(v14 + 28) += 30;
          }
          if ( *(int *)(sub_40B5E0() + 28) <= 300 )
            goto LABEL_35;
          goto LABEL_34;
        case 3:
        case 0xE:
          if ( v3 > *(_DWORD *)(v2 + 36) + 48 )
          {
            *(float *)(v2 + 68) = (double)*(int *)(v1 + 36) * 0.0078125;
            *(float *)(v2 + 64) = (float)(v3 - 45);
          }
          break;
        case 4:
          if ( *(float *)(v2 + 68) * 6.0 + (double)*(int *)(v2 + 36) < (double)(*(_DWORD *)(v1 + 32) + 468)
            || v3 > *(_DWORD *)(v2 + 36) + 10 )
          {
            *(_DWORD *)(v2 + 80) = 3;
            *(_BYTE *)(v1 + 52) = 1;
            *(_DWORD *)(v1 + 56) = 1;
            if ( *(int *)(v2 + 48) > 0 )
              *(_DWORD *)(v1 + 56) = 5;
            *(_DWORD *)(v2 + 48) = 0;
            *(_DWORD *)(v1 + 36) += -5 * *(_DWORD *)(v1 + 44);
            v17 = sub_40B5E0();
            ++*(_DWORD *)(v17 + 20);
            if ( *(int *)(sub_40B5E0() + 20) > 999 )
              *(_DWORD *)(sub_40B5E0() + 20) = 999;
            if ( (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2 <= 30 )
            {
              v19 = (_DWORD *)(sub_40B5E0() + 28);
              *v19 += (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2;
            }
            else
            {
              v18 = sub_40B5E0();
              *(_DWORD *)(v18 + 28) += 30;
            }
            if ( *(int *)(sub_40B5E0() + 28) > 300 )
LABEL_34:
              *(_DWORD *)(sub_40B5E0() + 28) = 300;
LABEL_35:
            sub_408C10(a1: *(_DWORD *)(v2 + 32), a2: *(_DWORD *)(v2 + 36) - 30);
            HIDWORD(v22) = *(_DWORD *)(v2 + 36) - *(_DWORD *)(sub_40B5E0() + 8) - 30;
            LODWORD(v22) = *(_DWORD *)(v2 + 32) - 70;
            sub_403110(a1: v22);
            sub_412970(a1: 127, a2: 3);
            v16 = rand();
            sub_413610(a1: v16 % 3);
          }
          break;
        case 6:
          if ( v3 > *(_DWORD *)(v2 + 36) + 48 )
          {
            *(float *)(v2 + 68) = (double)*(int *)(v1 + 36) * 0.0078125;
            *(float *)(v2 + 64) = (float)(v3 - 48);
          }
          break;
        case 7:
          if ( v3 > *(_DWORD *)(v2 + 36) + 50 )
          {
            *(_DWORD *)(v2 + 80) = 8;
            *(_DWORD *)(v2 + 48) = 0;
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_4024F0;
            *(_DWORD *)(v1 + 36) = -32 * *(_DWORD *)(v1 + 44);
            v20 = sub_40B5E0();
            if ( *(_DWORD *)(sub_40B5E0() + 20) > *(_DWORD *)(v20 + 24) )
            {
              v21 = sub_40B5E0();
              *(_DWORD *)(sub_40B5E0() + 24) = *(_DWORD *)(v21 + 20);
            }
            *(_DWORD *)(sub_40B5E0() + 20) = 0;
            sub_413610(a1: 5);
          }
          break;
        case 8:
          if ( v3 > *(_DWORD *)(v2 + 36) + 60 )
            *(_DWORD *)(v1 + 40) += -512 / *(_DWORD *)(v1 + 44);
          break;
        case 0xA:
          if ( v3 > *(_DWORD *)(v2 + 36) + 50 )
          {
            *(_DWORD *)(v2 + 80) = 9;
            *(_DWORD *)(v2 + 48) = 0;
            *(_DWORD *)(v2 + 68) = 1090519040;
            *(float *)(v2 + 64) = (float)(v3 - 50);
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_402590;
            *(_DWORD *)(v1 + 36) = -16 * *(_DWORD *)(v1 + 44);
            sub_413610(a1: 5);
          }
          break;
        case 0xB:
          v9 = *(_DWORD *)(v2 + 36) + 80;
LABEL_37:
          if ( v3 > v9 && *(int *)(v1 + 36) > 0 )
LABEL_21:
            sub_4129B0(a1: 8);
          break;
        case 0xC:
          if ( *(int *)(v1 + 36) < 0 )
          {
            *(_DWORD *)(v2 + 80) = 0;
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_401FB0;
            *(_DWORD *)(v2 + 48) = 0;
          }
          break;
        default:
          return;
      }
    }
    else
    {
      sub_4129F0(a1: 8);
      v4 = *(_DWORD *)(v2 + 44) - 1;
      *(_DWORD *)(v2 + 48) = 180;
      *(_DWORD *)(v2 + 44) = v4;
      *(_DWORD *)(v2 + 80) = 12;
      *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_4021D0;
      v5 = sub_40B5E0();
      if ( *(_DWORD *)(sub_40B5E0() + 20) > *(_DWORD *)(v5 + 24) )
      {
        v6 = sub_40B5E0();
        *(_DWORD *)(sub_40B5E0() + 24) = *(_DWORD *)(v6 + 20);
      }
      *(_DWORD *)(sub_40B5E0() + 20) = 0;
      v7 = *(float *)(v2 + 56) + 30.0;
      *(float *)(v2 + 56) = v7;
      if ( v7 > 100.0 )
        *(_DWORD *)(v2 + 56) = 1120403456;
      v8 = sub_40B5E0();
      *(_DWORD *)(v8 + 28) += 90;
      if ( *(int *)(sub_40B5E0() + 28) > 300 )
        *(_DWORD *)(sub_40B5E0() + 28) = 300;
      sub_413610(a1: 6);
      if ( *(int *)(v2 + 44) <= 0 )
        sub_403F50();
    }
  }
}