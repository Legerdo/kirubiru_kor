int __cdecl sub_4065E0(int a1)
{
  int result; // eax
  int v2; // esi
  int v3; // edi
  int v4; // ecx
  int v5; // ecx
  int v6; // edx
  int v7; // edi
  int v8; // edi
  double v9; // st7
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // edi
  int v15; // edi
  double v16; // st7
  int v17; // eax

  result = *(_DWORD *)(a1 + 36);
  v2 = *(_DWORD *)(a1 + 32) + 32;
  if ( *(_BYTE *)(result + 24) != 0 )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v3 = *(_DWORD *)(result + 36);
    switch ( *(_DWORD *)(*(_DWORD *)(a1 + 32) + 80) )
    {
      case 0:
      case 1:
      case 2:
      case 7:
      case 8:
      case 0xB:
        v4 = *(_DWORD *)(result + 32);
        if ( v4 + 16 < *(_DWORD *)v2 + 68 && v4 + 48 > *(_DWORD *)v2 + 38 )
        {
          v5 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 36);
          if ( v3 + 48 > v5 + 54 && v3 < v5 + 110 && *(_DWORD *)(*(_DWORD *)(a1 + 32) + 48) == 0 )
          {
            v6 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 44) - 1;
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 48) = 180;
            *(_DWORD *)(v2 + 12) = v6;
            *(_DWORD *)(v2 + 48) = 13;
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_402D40;
            *(_BYTE *)(result + 48) = 1;
            v7 = sub_40B5E0();
            if ( *(_DWORD *)(sub_40B5E0() + 20) > *(_DWORD *)(v7 + 24) )
            {
              v8 = sub_40B5E0();
              *(_DWORD *)(sub_40B5E0() + 24) = *(_DWORD *)(v8 + 20);
            }
            *(_DWORD *)(sub_40B5E0() + 20) = 0;
            v9 = *(float *)(v2 + 24) + 30.0;
            *(float *)(v2 + 24) = v9;
            if ( v9 > 100.0 )
              *(_DWORD *)(v2 + 24) = 1120403456;
            v10 = sub_40B5E0();
            *(_DWORD *)(v10 + 28) += 90;
            if ( *(int *)(sub_40B5E0() + 28) > 300 )
              *(_DWORD *)(sub_40B5E0() + 28) = 300;
            sub_413610(a1: 13);
            result = *(_DWORD *)(v2 + 12);
            if ( result <= 0 )
              goto LABEL_28;
          }
        }
        break;
      case 3:
      case 4:
      case 0xA:
        v11 = *(_DWORD *)(result + 32);
        if ( v11 + 16 < *(_DWORD *)v2 + 68 && v11 + 48 > *(_DWORD *)v2 + 38 )
        {
          v12 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 36);
          if ( v3 + 48 > v12 + 54 && v3 < v12 + 110 )
          {
            v13 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 44) - 1;
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 48) = 180;
            *(_DWORD *)(v2 + 12) = v13;
            *(_DWORD *)(v2 + 48) = 14;
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_402E00;
            *(_BYTE *)(result + 48) = 1;
            v14 = sub_40B5E0();
            if ( *(_DWORD *)(sub_40B5E0() + 20) > *(_DWORD *)(v14 + 24) )
            {
              v15 = sub_40B5E0();
              *(_DWORD *)(sub_40B5E0() + 24) = *(_DWORD *)(v15 + 20);
            }
            *(_DWORD *)(sub_40B5E0() + 20) = 0;
            v16 = *(float *)(v2 + 24) + 30.0;
            *(float *)(v2 + 24) = v16;
            if ( v16 > 100.0 )
              *(_DWORD *)(v2 + 24) = 1120403456;
            v17 = sub_40B5E0();
            *(_DWORD *)(v17 + 28) += 90;
            if ( *(int *)(sub_40B5E0() + 28) > 300 )
              *(_DWORD *)(sub_40B5E0() + 28) = 300;
            sub_413610(a1: 13);
            result = *(_DWORD *)(v2 + 12);
            if ( result <= 0 )
LABEL_28:
              result = sub_403F50();
          }
        }
        break;
      default:
        return result;
    }
  }
  return result;
}