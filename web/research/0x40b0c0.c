int __cdecl sub_40B0C0(__int64 a1)
{
  int v1; // ebx
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // eax
  int v9; // esi
  int v10; // eax
  int *v11; // esi
  int v12; // eax
  _QWORD v14[3]; // [esp+10h] [ebp-23Ch]
  int v15; // [esp+28h] [ebp-224h]
  int v16; // [esp+2Ch] [ebp-220h] BYREF
  int v17; // [esp+30h] [ebp-21Ch]
  int v18; // [esp+34h] [ebp-218h]
  int v19; // [esp+38h] [ebp-214h]
  int (__cdecl *v20)(int); // [esp+48h] [ebp-204h]
  _BYTE v21[512]; // [esp+4Ch] [ebp-200h]

  v14[0] = a1;
  HIDWORD(v14[1]) = 0;
  LODWORD(v14[1]) = 20;
  v20 = sub_40B2C0;
  v16 = 32;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  qmemcpy(v21, v14, 24);
  v1 = sub_4128C0(a1: &v16);
  v14[0] = a1;
  HIDWORD(v14[1]) = 1;
  LODWORD(v14[1]) = 20;
  v20 = sub_40B2C0;
  v16 = 8;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  qmemcpy(v21, v14, 24);
  v2 = sub_4128C0(a1: &v16);
  switch ( *(_DWORD *)(*(_DWORD *)(sub_40B5E0() + 64) + 4) )
  {
    case 0:
      v3 = sub_40B5E0();
      sub_406DC0(a1: v1, a2: *(_DWORD *)(v3 + 64));
      v4 = *(_DWORD *)(*(_DWORD *)(sub_40B5E0() + 64) + 32);
      break;
    case 1:
      v5 = sub_40B5E0();
      sub_404870(a1: v1, a2: *(_DWORD *)(v5 + 64));
      v4 = *(_DWORD *)(*(_DWORD *)(sub_40B5E0() + 64) + 32);
      break;
    case 2:
      v6 = sub_40B5E0();
      sub_404F30(a1: v1, a2: v2, a3: *(_DWORD *)(v6 + 64));
      v4 = *(_DWORD *)(*(_DWORD *)(sub_40B5E0() + 64) + 32);
      break;
    case 3:
      goto LABEL_6;
    case 4:
      v7 = *(_DWORD *)(sub_40B5E0() + 64) + 32;
      v8 = (_DWORD *)(*(_DWORD *)(v7 + 4 * *(_DWORD *)(*(_DWORD *)(sub_40B5E0() + 68) + 40) + 4) + 32);
      if ( *v8 != 0 )
      {
        v9 = v8[1];
        v4 = *(_DWORD *)(*v8 + 32);
        sub_405A00(a1: v1, a2: v9);
        v10 = *(_DWORD *)(v9 + 68);
        v11 = (int *)(v9 + 68);
        if ( v10 != 0 )
        {
          do
          {
            sub_405A00(a1: v1, a2: v10);
            v11 = (int *)(*v11 + 68);
            v10 = *v11;
          }
          while ( *v11 != 0 );
        }
      }
      else
      {
LABEL_6:
        v4 = *(_DWORD *)(sub_40B5E0() + 8);
      }
      break;
    case 5:
      v12 = sub_40B5E0();
      sub_4074A0(a1: v1, a2: v2, a3: *(_DWORD *)(v12 + 64));
      v4 = *(_DWORD *)(*(_DWORD *)(sub_40B5E0() + 64) + 32);
      break;
    default:
      v4 = v15;
      break;
  }
  *(_DWORD *)(v1 + 52) = sub_4019D0(a1: v4);
  return v1;
}