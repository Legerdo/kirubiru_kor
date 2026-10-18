void __cdecl sub_404A00(int a1)
{
  int v1; // ebx
  int v2; // esi
  int v3; // edi
  int v4; // ecx
  int v5; // ebp
  int v6; // edx
  int v7; // ebx
  int v8; // ebx
  double v9; // st7
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // edi
  int v18; // eax
  int v19; // ebx
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  _DWORD *v23; // edi
  int v24; // esi
  int v25; // esi
  __int64 v26; // [esp-10h] [ebp-24h]

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 40);
  if ( *(_BYTE *)(v3 + 24) != 0 )
  {
    *(_BYTE *)(sub_40B5E0() + 41) = 0;
    *(_DWORD *)(sub_40B5E0() + 64) = 0;
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v4 = *(_DWORD *)(v3 + 32);
    v5 = v4 + 118 * *(_DWORD *)(v3 + 48) + 2;
    if ( v4 + 118 * *(_DWORD *)(v3 + 48) == 426
      && *(_DWORD *)(v2 + 48) == 0
      && *(int *)(v2 + 8) > 0
      && *(int *)(v2 + 44) > 0 )
    {
      sub_4129F0(a1: 8);
      v6 = *(_DWORD *)(v2 + 44) - 1;
      *(_DWORD *)(v2 + 48) = 180;
      *(_DWORD *)(v2 + 44) = v6;
      *(_DWORD *)(v2 + 80) = 12;
      *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_4021D0;
      v7 = sub_40B5E0();
      if ( *(_DWORD *)(sub_40B5E0() + 20) > *(_DWORD *)(v7 + 24) )
      {
        v8 = sub_40B5E0();
        *(_DWORD *)(sub_40B5E0() + 24) = *(_DWORD *)(v8 + 20);
      }
      *(_DWORD *)(sub_40B5E0() + 20) = 0;
      v9 = *(float *)(v2 + 56) + 30.0;
      *(float *)(v2 + 56) = v9;
      if ( v9 > 100.0 )
        *(_DWORD *)(v2 + 56) = 1120403456;
      v10 = sub_40B5E0();
      *(_DWORD *)(v10 + 28) += 90;
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
        if ( v5 > *(_DWORD *)(v2 + 36) + 90 && *(int *)(v3 + 36) > 0 && *(_DWORD *)(v2 + 48) == 0 )
          goto LABEL_20;
        break;
      case 1:
        v12 = *(_DWORD *)(v2 + 36);
        if ( v5 <= v12 + 10 )
        {
          v11 = v12 + 90;
          goto LABEL_36;
        }
        *(_DWORD *)(v2 + 80) = 0;
        *(_BYTE *)(v3 + 52) = 1;
        *(_DWORD *)(v3 + 60) = 1;
        if ( *(int *)(v2 + 48) > 0 )
          *(_DWORD *)(v3 + 60) = 5;
        *(_DWORD *)(v2 + 48) = 0;
        v13 = *(_DWORD *)(v3 + 36);
        v14 = -5 * *(_DWORD *)(v3 + 44);
        *(_DWORD *)(v3 + 56) = *(_DWORD *)(v2 + 40);
        *(_DWORD *)(v3 + 36) = 2 * v14 + v13;
        v15 = sub_40B5E0();
        ++*(_DWORD *)(v15 + 20);
        if ( *(int *)(sub_40B5E0() + 20) > 999 )
          *(_DWORD *)(sub_40B5E0() + 20) = 999;
        if ( (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2 <= 30 )
        {
          v17 = (_DWORD *)(sub_40B5E0() + 28);
          *v17 += (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2;
        }
        else
        {
          v16 = sub_40B5E0();
          *(_DWORD *)(v16 + 28) += 30;
        }
        if ( *(int *)(sub_40B5E0() + 28) <= 300 )
          goto LABEL_34;
        goto LABEL_33;
      case 3:
      case 6:
        if ( v5 > *(_DWORD *)(v2 + 36) + 48 )
        {
          *(float *)(v2 + 68) = (double)*(int *)(v3 + 36) * 0.0078125;
          *(float *)(v2 + 64) = (float)(v5 - 48);
        }
        break;
      case 4:
        if ( *(float *)(v2 + 68) * 6.0 + (double)*(int *)(v2 + 36) < (double)v5 || v5 > *(_DWORD *)(v2 + 36) + 10 )
        {
          *(_DWORD *)(v2 + 80) = 3;
          *(_BYTE *)(v3 + 52) = 1;
          *(_DWORD *)(v3 + 60) = 1;
          if ( *(int *)(v2 + 48) > 0 )
            *(_DWORD *)(v3 + 60) = 5;
          *(_DWORD *)(v2 + 48) = 0;
          v19 = *(_DWORD *)(v3 + 36);
          v20 = -5 * *(_DWORD *)(v3 + 44);
          *(_DWORD *)(v3 + 56) = *(_DWORD *)(v2 + 40);
          *(_DWORD *)(v3 + 36) = 2 * v20 + v19;
          v21 = sub_40B5E0();
          ++*(_DWORD *)(v21 + 20);
          if ( *(int *)(sub_40B5E0() + 20) > 999 )
            *(_DWORD *)(sub_40B5E0() + 20) = 999;
          if ( (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2 <= 30 )
          {
            v23 = (_DWORD *)(sub_40B5E0() + 28);
            *v23 += (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2;
          }
          else
          {
            v22 = sub_40B5E0();
            *(_DWORD *)(v22 + 28) += 30;
          }
          if ( *(int *)(sub_40B5E0() + 28) > 300 )
LABEL_33:
            *(_DWORD *)(sub_40B5E0() + 28) = 300;
LABEL_34:
          sub_408C10(a1: *(_DWORD *)(v2 + 32), a2: *(_DWORD *)(v2 + 36) - 30);
          HIDWORD(v26) = *(_DWORD *)(v2 + 36) - *(_DWORD *)(sub_40B5E0() + 8) - 30;
          LODWORD(v26) = *(_DWORD *)(v2 + 32) - 70;
          sub_403110(a1: v26);
          sub_412970(a1: 127, a2: 3);
          v18 = rand();
          sub_413610(a1: v18 % 3);
        }
        break;
      case 7:
        if ( v5 > *(_DWORD *)(v2 + 36) + 50 )
        {
          *(_DWORD *)(v2 + 80) = 8;
          *(_DWORD *)(v2 + 48) = 0;
          *(_DWORD *)(*(_DWORD *)(v1 + 32) + 28) = sub_4024F0;
          *(_DWORD *)(v3 + 36) = -32 * *(_DWORD *)(v3 + 44);
          v24 = sub_40B5E0();
          if ( *(_DWORD *)(sub_40B5E0() + 20) > *(_DWORD *)(v24 + 24) )
          {
            v25 = sub_40B5E0();
            *(_DWORD *)(sub_40B5E0() + 24) = *(_DWORD *)(v25 + 20);
          }
          *(_DWORD *)(sub_40B5E0() + 20) = 0;
          sub_413610(a1: 5);
        }
        break;
      case 8:
        if ( v5 > *(_DWORD *)(v2 + 36) + 60 )
          *(_DWORD *)(v3 + 40) += -512 / *(_DWORD *)(v3 + 44);
        break;
      case 0xA:
        if ( v5 > *(_DWORD *)(v2 + 36) + 50 )
        {
          *(_DWORD *)(v2 + 80) = 9;
          *(_DWORD *)(v2 + 48) = 0;
          *(_DWORD *)(v2 + 68) = 1090519040;
          *(float *)(v2 + 64) = (float)(v5 - 50);
          *(_DWORD *)(*(_DWORD *)(v1 + 32) + 28) = sub_402590;
          *(_DWORD *)(v3 + 36) = -16 * *(_DWORD *)(v3 + 44);
          sub_413610(a1: 5);
        }
        break;
      case 0xB:
        v11 = *(_DWORD *)(v2 + 36) + 80;
LABEL_36:
        if ( v5 > v11 && *(int *)(v3 + 36) > 0 )
LABEL_20:
          sub_4129B0(a1: 8);
        break;
      default:
        return;
    }
  }
}