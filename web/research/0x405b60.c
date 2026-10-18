void __cdecl sub_405B60(int a1)
{
  int v1; // ecx
  int v2; // esi
  int v3; // ebp
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // edi
  double v11; // st7
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // edi
  int v18; // eax
  int v19; // eax
  _DWORD *v20; // edi
  __int64 v21; // [esp-8h] [ebp-1Ch]

  v1 = *(_DWORD *)(a1 + 36);
  v2 = *(_DWORD *)(a1 + 32) + 32;
  if ( *(_BYTE *)(v1 + 24) != 0 )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v3 = *(_DWORD *)(v1 + 32);
    v4 = v3 + 320;
    switch ( *(_DWORD *)(*(_DWORD *)(a1 + 32) + 80) )
    {
      case 0:
      case 2:
      case 3:
      case 7:
      case 0xA:
      case 0xB:
        v5 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 36) + 110;
        if ( v4 > v5 && v3 < v5 && *(_DWORD *)(*(_DWORD *)(a1 + 32) + 48) == 0 )
        {
          v6 = *(_DWORD *)(v1 + 36);
          if ( v6 + 20 < *(_DWORD *)v2 + 88 && v6 + 60 > *(_DWORD *)v2 + 40 )
          {
            v7 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 44);
            if ( v7 > 0 && *(_BYTE *)(v1 + 52) == 0 )
            {
              *(_DWORD *)(*(_DWORD *)(a1 + 32) + 48) = 180;
              *(_DWORD *)(v2 + 12) = v7 - 1;
              *(_BYTE *)(v1 + 44) = 1;
              v8 = *(_DWORD *)(v2 + 48);
              if ( v8 == 3 || v8 == 10 )
              {
                *(_DWORD *)(v2 + 48) = 14;
                *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_402E00;
              }
              else
              {
                *(_DWORD *)(v2 + 48) = 13;
                *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_402D40;
              }
              v9 = sub_40B5E0();
              if ( *(_DWORD *)(sub_40B5E0() + 20) > *(_DWORD *)(v9 + 24) )
              {
                v10 = sub_40B5E0();
                *(_DWORD *)(sub_40B5E0() + 24) = *(_DWORD *)(v10 + 20);
              }
              *(_DWORD *)(sub_40B5E0() + 20) = 0;
              v11 = *(float *)(v2 + 24) + 30.0;
              *(float *)(v2 + 24) = v11;
              if ( v11 > 100.0 )
                *(_DWORD *)(v2 + 24) = 1120403456;
              v12 = sub_40B5E0();
              *(_DWORD *)(v12 + 28) += 90;
              if ( *(int *)(sub_40B5E0() + 28) > 300 )
                *(_DWORD *)(sub_40B5E0() + 28) = 300;
              sub_413610(a1: 13);
              if ( *(int *)(v2 + 12) <= 0 )
                sub_403F50();
            }
          }
        }
        break;
      case 1:
        if ( v4 > *(_DWORD *)(*(_DWORD *)(a1 + 32) + 36) + 10
          && *(_DWORD *)(v1 + 48) == *(_DWORD *)(*(_DWORD *)(a1 + 32) + 40)
          && *(_BYTE *)(v1 + 52) == 0 )
        {
          *(_DWORD *)(*(_DWORD *)(a1 + 32) + 80) = 0;
          *(_BYTE *)(v1 + 44) = 1;
          *(_DWORD *)(v2 + 16) = 0;
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
            goto LABEL_50;
          goto LABEL_49;
        }
        break;
      case 4:
        if ( (*(float *)(*(_DWORD *)(a1 + 32) + 68) * 6.0 + (double)*(int *)(*(_DWORD *)(a1 + 32) + 36) < (double)(v3 + 320)
           || v4 > *(_DWORD *)(*(_DWORD *)(a1 + 32) + 36) + 10)
          && *(_DWORD *)(*(_DWORD *)(a1 + 32) + 40) == *(_DWORD *)(v1 + 48)
          && *(_BYTE *)(v1 + 52) == 0 )
        {
          *(_DWORD *)(*(_DWORD *)(a1 + 32) + 80) = 3;
          *(_BYTE *)(v1 + 44) = 1;
          *(_DWORD *)(v2 + 16) = 0;
          v18 = sub_40B5E0();
          ++*(_DWORD *)(v18 + 20);
          if ( *(int *)(sub_40B5E0() + 20) > 999 )
            *(_DWORD *)(sub_40B5E0() + 20) = 999;
          if ( (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2 <= 30 )
          {
            v20 = (_DWORD *)(sub_40B5E0() + 28);
            *v20 += (*(_DWORD *)(sub_40B5E0() + 20) + 1) / 2;
          }
          else
          {
            v19 = sub_40B5E0();
            *(_DWORD *)(v19 + 28) += 30;
          }
          if ( *(int *)(sub_40B5E0() + 28) > 300 )
LABEL_49:
            *(_DWORD *)(sub_40B5E0() + 28) = 300;
LABEL_50:
          HIDWORD(v21) = *(_DWORD *)(v2 + 4) - *(_DWORD *)(sub_40B5E0() + 8) - 30;
          LODWORD(v21) = *(_DWORD *)v2 - 70;
          sub_403110(a1: v21);
          sub_412970(a1: 127, a2: 3);
          sub_413610(a1: 1);
        }
        break;
      case 0xD:
      case 0xE:
        v13 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 36) + 110;
        if ( v4 > v13 && v3 < v13 )
        {
          v14 = *(_DWORD *)(v1 + 36);
          if ( v14 + 20 < *(_DWORD *)v2 + 88 && v14 + 60 > *(_DWORD *)v2 + 40 && *(_BYTE *)(v1 + 52) == 0 )
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 84) = 0;
        }
        break;
      default:
        return;
    }
  }
}