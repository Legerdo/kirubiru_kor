void __cdecl sub_404350(int a1)
{
  int v1; // ebx
  int v2; // esi
  int v3; // edi
  int v4; // ebp
  int v5; // edx
  int v6; // ebx
  int v7; // ebx
  double v8; // st7
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // edi
  int v17; // eax
  int v18; // ebx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  _DWORD *v22; // edi
  int v23; // esi
  int v24; // esi
  __int64 v25; // [esp-10h] [ebp-24h]

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 36);
  if ( *(_BYTE *)(v3 + 24) != 0 )
  {
    *(_BYTE *)(sub_40B5E0() + 41) = 0;
    *(_DWORD *)(sub_40B5E0() + 64) = 0;
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v4 = *(_DWORD *)(v3 + 32) + 120 * *(_DWORD *)(v3 + 48);
    if ( v4 == 429 && *(_DWORD *)(v2 + 48) == 0 && *(int *)(v2 + 8) > 0 && *(int *)(v2 + 44) > 0 )
    {
      sub_4129F0(a1: 8);
      v5 = *(_DWORD *)(v2 + 44) - 1;
      *(_DWORD *)(v2 + 48) = 180;
      *(_DWORD *)(v2 + 44) = v5;
      *(_DWORD *)(v2 + 80) = 12;
      *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_4021D0;
      v6 = sub_40B5E0();
      if ( *(_DWORD *)(sub_40B5E0() + 20) > *(_DWORD *)(v6 + 24) )
      {
        v7 = sub_40B5E0();
        *(_DWORD *)(sub_40B5E0() + 24) = *(_DWORD *)(v7 + 20);
      }
      *(_DWORD *)(sub_40B5E0() + 20) = 0;
      v8 = *(float *)(v2 + 56) + 30.0;
      *(float *)(v2 + 56) = v8;
      if ( v8 > 100.0 )
        *(_DWORD *)(v2 + 56) = 1120403456;
      v9 = sub_40B5E0();
      *(_DWORD *)(v9 + 28) += 90;
      if ( *(int *)(sub_40B5E0() + 28) > 300 )
        *(_DWORD *)(sub_40B5E0() + 28) = 300;
      sub_413610(a1: 6);
      if ( *(int *)(v2 + 44) <= 0 )
        sub_403F50();
      v1 = a1;
    }
    switch ( *(_DWORD *)(v2 + 80) )
    {
      case 0:
      case 2:
        if ( v4 > *(_DWORD *)(v2 + 36) + 90 && *(int *)(v3 + 36) > 0 && *(_DWORD *)(v2 + 48) == 0 )
          goto LABEL_20;
        break;
      case 1:
        v11 = *(_DWORD *)(v2 + 36);
        if ( v4 <= v11 + 10 )
        {
          v10 = v11 + 90;
          goto LABEL_36;
        }
        *(_DWORD *)(v2 + 80) = 0;
        *(_BYTE *)(v3 + 52) = 1;
        *(_DWORD *)(v3 + 60) = 1;
        if ( *(int *)(v2 + 48) > 0 )
          *(_DWORD *)(v3 + 60) = 5;
        *(_DWORD *)(v2 + 48) = 0;
        v12 = *(_DWORD *)(v3 + 36);
        v13 = -5 * *(_DWORD *)(v3 + 44);
        *(_DWORD *)(v3 + 56) = *(_DWORD *)(v2 + 40);
        *(_DWORD *)(v3 + 36) = 2 * v13 + v12;
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
        if ( *(int *)(sub_40B5E0() + 28) <= 300 )
          goto LABEL_34;
        goto LABEL_33;
      case 3:
      case 6:
        if ( v4 > *(_DWORD *)(v2 + 36) + 48 )
        {
          *(float *)(v2 + 68) = (double)*(int *)(v3 + 36) * 0.0078125;
          *(float *)(v2 + 64) = (float)(v4 - 48);
        }
        break;
      case 4:
        if ( *(float *)(v2 + 68) * 6.0 + (double)*(int *)(v2 + 36) < (double)v4 || v4 > *(_DWORD *)(v2 + 36) + 10 )
        {
          *(_DWORD *)(v2 + 80) = 3;
          *(_BYTE *)(v3 + 52) = 1;
          *(_DWORD *)(v3 + 60) = 1;
          if ( *(int *)(v2 + 48) > 0 )
            *(_DWORD *)(v3 + 60) = 5;
          *(_DWORD *)(v2 + 48) = 0;
          v18 = *(_DWORD *)(v3 + 36);
          v19 = -5 * *(_DWORD *)(v3 + 44);
          *(_DWORD *)(v3 + 56) = *(_DWORD *)(v2 + 40);
          *(_DWORD *)(v3 + 36) = 2 * v19 + v18;
          v20 = sub_40B5E0();
          ++*(_DWORD *)(v20 + 20);
          if ( *(int *)(sub_40B5E0() + 20) > 999 )
            *(_DWORD *)(sub_40B5E0() + 20) = 999;
          if ( (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2 <= 30 )
          {
            v22 = (_DWORD *)(sub_40B5E0() + 28);
            *v22 += (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2;
          }
          else
          {
            v21 = sub_40B5E0();
            *(_DWORD *)(v21 + 28) += 30;
          }
          if ( *(int *)(sub_40B5E0() + 28) > 300 )
LABEL_33:
            *(_DWORD *)(sub_40B5E0() + 28) = 300;
LABEL_34:
          sub_408C10(a1: *(_DWORD *)(v2 + 32), a2: *(_DWORD *)(v2 + 36) - 30);
          HIDWORD(v25) = *(_DWORD *)(v2 + 36) - *(_DWORD *)(sub_40B5E0() + 8) - 30;
          LODWORD(v25) = *(_DWORD *)(v2 + 32) - 70;
          sub_403110(a1: v25);
          sub_412970(a1: 127, a2: 3);
          v17 = rand();
          sub_413610(a1: v17 % 3);
        }
        break;
      case 7:
        if ( v4 > *(_DWORD *)(v2 + 36) + 50 )
        {
          *(_DWORD *)(v2 + 80) = 8;
          *(_DWORD *)(v2 + 48) = 0;
          *(_DWORD *)(*(_DWORD *)(v1 + 32) + 28) = sub_4024F0;
          *(_DWORD *)(v3 + 36) = -32 * *(_DWORD *)(v3 + 44);
          v23 = sub_40B5E0();
          if ( *(_DWORD *)(sub_40B5E0() + 20) > *(_DWORD *)(v23 + 24) )
          {
            v24 = sub_40B5E0();
            *(_DWORD *)(sub_40B5E0() + 24) = *(_DWORD *)(v24 + 20);
          }
          *(_DWORD *)(sub_40B5E0() + 20) = 0;
          sub_413610(a1: 5);
        }
        break;
      case 8:
        if ( v4 > *(_DWORD *)(v2 + 36) + 60 )
          *(_DWORD *)(v3 + 40) += -512 / *(_DWORD *)(v3 + 44);
        break;
      case 0xA:
        if ( v4 > *(_DWORD *)(v2 + 36) + 50 )
        {
          *(_DWORD *)(v2 + 80) = 9;
          *(_DWORD *)(v2 + 48) = 0;
          *(_DWORD *)(v2 + 68) = 1090519040;
          *(float *)(v2 + 64) = (float)(v4 - 50);
          *(_DWORD *)(*(_DWORD *)(v1 + 32) + 28) = sub_402590;
          *(_DWORD *)(v3 + 36) = -16 * *(_DWORD *)(v3 + 44);
          sub_413610(a1: 5);
        }
        break;
      case 0xB:
        v10 = *(_DWORD *)(v2 + 36) + 80;
LABEL_36:
        if ( v4 > v10 && *(int *)(v3 + 36) > 0 )
LABEL_20:
          sub_4129B0(a1: 8);
        break;
      default:
        return;
    }
  }
}