FILE *__cdecl sub_408F50(char *FileName)
{
  FILE *result; // eax
  FILE *v2; // ebp
  int v3; // edi
  int v4; // ebx
  int v5; // esi
  int v6; // eax
  char v7; // al
  char *v8; // eax
  int v9; // eax
  int v10; // [esp+Ch] [ebp-258h]
  int v11; // [esp+10h] [ebp-254h]
  int v12; // [esp+14h] [ebp-250h]
  char Str[44]; // [esp+18h] [ebp-24Ch] BYREF
  _DWORD v14[136]; // [esp+44h] [ebp-220h] BYREF

  result = fopen(FileName, Mode: aR);
  v2 = result;
  if ( result != nullptr )
  {
    v14[7] = sub_4090C0;
    v14[0] = 32;
    memset(&v14[1], 0, 12);
    v14[8] = 0;
    v14[9] = 1;
    v3 = 0;
    v11 = sub_4128C0(a1: v14);
    v10 = 0;
    v4 = 0;
    while ( 2 )
    {
      v4 += 40;
      v5 = 0;
      v10 += 45;
      while ( 1 )
      {
        v6 = v2->_cnt - 1;
        v2->_cnt = v6;
        if ( v6 < 0 )
          v7 = _filbuf(File: v2);
        else
          v7 = *v2->_ptr++;
        Str[v5] = v7;
        if ( v7 == -1 )
        {
          if ( v5 == 0 )
            goto LABEL_19;
          goto LABEL_18;
        }
        if ( (v7 & 0xE0u) > 0x10 )
        {
          Str[v5] = v7;
          if ( (v7 & 0xE0u) < 0x20 )
            Str[v5] = v7;
        }
        if ( Str[v5] == -1 )
          Str[v5] = -59;
        if ( Str[v5] == 10 )
          break;
        ++v5;
      }
      if ( v5 != 0 )
LABEL_18:
        Str[v5] = 0;
LABEL_19:
      if ( Str[0] != -1 )
      {
        if ( Str[0] != 10 )
        {
          v8 = strchr(Str, Val: 10);
          if ( v8 != nullptr )
            *v8 = 0;
          if ( v3 != 0 )
          {
            v9 = sub_409220(a1: v11, a2: Str, a3: v10);
            *(_DWORD *)(v3 + 92) = v9;
            v3 = v9;
          }
          else
          {
            v3 = sub_409220(a1: v11, a2: Str, a3: v4);
            v12 = v3;
          }
        }
        continue;
      }
      break;
    }
    *(_DWORD *)(v11 + 32) = v12;
    return (FILE *)v11;
  }
  return result;
}