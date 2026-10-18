void __cdecl sub_405F70(int a1)
{
  int v2; // ecx
  int v3; // esi
  int v4; // ebp
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // edi
  int v11; // edi
  double v12; // st7
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // edi
  int v18; // edi
  double v19; // st7
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // edi
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  _DWORD *v32; // edi
  int v33; // eax
  int v34; // esi
  int v35; // esi
  int v36; // eax
  int v37; // eax
  __int64 v38; // [esp-10h] [ebp-24h]
  int v39; // [esp+18h] [ebp+4h]

  v2 = *(_DWORD *)(a1 + 36);
  v3 = *(_DWORD *)(a1 + 32) + 32;
  if ( *(_BYTE *)(v2 + 24) != 0 )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v4 = *(_DWORD *)(v2 + 36);
    v5 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 80);
    v6 = v4 + 12;
    v39 = v4 + 12;
    switch ( v5 )
    {
      case 0:
      case 2:
      case 11:
        v7 = *(_DWORD *)(v2 + 32);
        if ( v7 + 5 < *(_DWORD *)v3 + 68 && v7 + 12 > *(_DWORD *)v3 + 38 )
        {
          v8 = *(_DWORD *)(v3 + 4);
          if ( v39 > v8 + 54 && *(_DWORD *)(v2 + 36) < v8 + 110 && *(_DWORD *)(v3 + 16) == 0 )
          {
            v9 = *(_DWORD *)(v3 + 12);
            *(_DWORD *)(v3 + 16) = 180;
            *(_DWORD *)(v3 + 48) = 13;
            *(_DWORD *)(v3 + 12) = v9 - 1;
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_402D40;
            *(_BYTE *)(v2 + 48) = 1;
            v10 = sub_40B5E0();
            if ( *(_DWORD *)(sub_40B5E0() + 20) > *(_DWORD *)(v10 + 24) )
            {
              v11 = sub_40B5E0();
              *(_DWORD *)(sub_40B5E0() + 24) = *(_DWORD *)(v11 + 20);
            }
            *(_DWORD *)(sub_40B5E0() + 20) = 0;
            v12 = *(float *)(v3 + 24) + 30.0;
            *(float *)(v3 + 24) = v12;
            if ( v12 > 100.0 )
              *(_DWORD *)(v3 + 24) = 1120403456;
            v13 = sub_40B5E0();
            *(_DWORD *)(v13 + 28) += 90;
            if ( *(int *)(sub_40B5E0() + 28) <= 300 )
              goto LABEL_25;
            goto LABEL_24;
          }
        }
        break;
      case 1:
        v23 = *(_DWORD *)(v2 + 32);
        if ( v23 + 5 < *(_DWORD *)v3 + 98 && v23 + 12 > *(_DWORD *)v3 + 8 )
        {
          v24 = *(_DWORD *)(v3 + 4);
          if ( v39 > v24 + 10 && v4 < v24 + 110 )
          {
            *(_DWORD *)(v3 + 48) = 0;
            *(_BYTE *)(v2 + 48) = 1;
            *(_DWORD *)(v2 + 52) = 1;
            v25 = sub_40B5E0();
            ++*(_DWORD *)(v25 + 20);
            if ( *(int *)(sub_40B5E0() + 20) > 999 )
              *(_DWORD *)(sub_40B5E0() + 20) = 999;
            if ( (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2 <= 30 )
            {
              v27 = (_DWORD *)(sub_40B5E0() + 28);
              *v27 += (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2;
            }
            else
            {
              v26 = sub_40B5E0();
              *(_DWORD *)(v26 + 28) += 30;
            }
            if ( *(int *)(sub_40B5E0() + 28) > 300 )
              *(_DWORD *)(sub_40B5E0() + 28) = 300;
            goto LABEL_43;
          }
        }
        break;
      case 3:
        v14 = *(_DWORD *)(v2 + 32);
        if ( v14 + 5 < *(_DWORD *)v3 + 68 && v14 + 12 > *(_DWORD *)v3 + 38 )
        {
          v15 = *(_DWORD *)(v3 + 4);
          if ( v39 > v15 + 54 && *(_DWORD *)(v2 + 36) < v15 + 110 )
          {
            v16 = *(_DWORD *)(v3 + 12);
            *(_DWORD *)(v3 + 16) = 180;
            *(_DWORD *)(v3 + 48) = 14;
            *(_DWORD *)(v3 + 12) = v16 - 1;
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_402E00;
            *(_BYTE *)(v2 + 48) = 1;
            v17 = sub_40B5E0();
            if ( *(_DWORD *)(sub_40B5E0() + 20) > *(_DWORD *)(v17 + 24) )
            {
              v18 = sub_40B5E0();
              *(_DWORD *)(sub_40B5E0() + 24) = *(_DWORD *)(v18 + 20);
            }
            *(_DWORD *)(sub_40B5E0() + 20) = 0;
            v19 = *(float *)(v3 + 24) + 30.0;
            *(float *)(v3 + 24) = v19;
            if ( v19 > 100.0 )
              *(_DWORD *)(v3 + 24) = 1120403456;
            v20 = sub_40B5E0();
            *(_DWORD *)(v20 + 28) += 90;
            if ( *(int *)(sub_40B5E0() + 28) > 300 )
LABEL_24:
              *(_DWORD *)(sub_40B5E0() + 28) = 300;
LABEL_25:
            sub_413610(a1: 13);
            if ( *(int *)(v3 + 12) <= 0 )
              sub_403F50();
          }
        }
        break;
      case 4:
        v29 = *(_DWORD *)(v2 + 32);
        if ( v29 + 5 < *(_DWORD *)v3 + 98
          && v29 + 12 > *(_DWORD *)v3 + 8
          && (*(float *)(v3 + 36) * 6.0 + (double)*(int *)(v3 + 4) < (double)v39 || v6 > *(_DWORD *)(v3 + 4) + 10) )
        {
          *(_DWORD *)(v3 + 48) = 3;
          *(_BYTE *)(v2 + 48) = 1;
          *(_DWORD *)(v2 + 52) = 1;
          v30 = sub_40B5E0();
          ++*(_DWORD *)(v30 + 20);
          if ( *(int *)(sub_40B5E0() + 20) > 999 )
            *(_DWORD *)(sub_40B5E0() + 20) = 999;
          if ( (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2 <= 30 )
          {
            v32 = (_DWORD *)(sub_40B5E0() + 28);
            *v32 += (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2;
          }
          else
          {
            v31 = sub_40B5E0();
            *(_DWORD *)(v31 + 28) += 30;
          }
          if ( *(int *)(sub_40B5E0() + 28) > 300 )
            *(_DWORD *)(sub_40B5E0() + 28) = 300;
LABEL_43:
          sub_408C10(a1: *(_DWORD *)v3, a2: *(_DWORD *)(v3 + 4) - 30);
          HIDWORD(v38) = *(_DWORD *)(v3 + 4) - *(_DWORD *)(sub_40B5E0() + 8) - 30;
          LODWORD(v38) = *(_DWORD *)v3 - 70;
          sub_403110(a1: v38);
          sub_412970(a1: 127, a2: 3);
          v28 = rand();
          sub_413610(a1: v28 % 3);
        }
        break;
      case 7:
        v33 = *(_DWORD *)(v2 + 32);
        if ( v33 + 5 < *(_DWORD *)v3 + 98 && v33 + 12 > *(_DWORD *)v3 + 8 && v39 > *(_DWORD *)(v3 + 4) + 50 )
        {
          *(_DWORD *)(v3 + 48) = 8;
          *(_DWORD *)(v3 + 16) = 0;
          *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_4024F0;
          *(_BYTE *)(v2 + 48) = 1;
          v34 = sub_40B5E0();
          if ( *(_DWORD *)(sub_40B5E0() + 20) > *(_DWORD *)(v34 + 24) )
          {
            v35 = sub_40B5E0();
            *(_DWORD *)(sub_40B5E0() + 24) = *(_DWORD *)(v35 + 20);
          }
          *(_DWORD *)(sub_40B5E0() + 20) = 0;
          sub_413610(a1: 5);
        }
        break;
      case 8:
        v36 = *(_DWORD *)(v2 + 32);
        if ( v36 + 5 < *(_DWORD *)v3 + 98 && v36 + 12 > *(_DWORD *)v3 + 8 && v6 > *(_DWORD *)(v3 + 4) + 60 )
          *(_BYTE *)(v2 + 48) = 1;
        break;
      case 10:
        v37 = *(_DWORD *)(v2 + 32);
        if ( v37 + 5 < *(_DWORD *)v3 + 98 && v37 + 12 > *(_DWORD *)v3 + 8 && v39 > *(_DWORD *)(v3 + 4) + 50 )
        {
          *(_DWORD *)(v3 + 48) = 9;
          *(_DWORD *)(v3 + 16) = 0;
          *(_DWORD *)(v3 + 36) = 1090519040;
          *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_402590;
          *(_BYTE *)(v2 + 48) = 1;
          sub_413610(a1: 5);
        }
        break;
      case 13:
      case 14:
        v21 = *(_DWORD *)(v2 + 32);
        if ( v21 + 5 < *(_DWORD *)v3 + 68 && v21 + 12 > *(_DWORD *)v3 + 38 )
        {
          v22 = *(_DWORD *)(v3 + 4);
          if ( v6 > v22 + 54 && v4 < v22 + 110 )
            *(_DWORD *)(v3 + 52) = 0;
        }
        break;
      default:
        return;
    }
  }
}