char *__thiscall sub_4103D0(int this, char *a2, unsigned int a3, _DWORD *a4)
{
  int v5; // edi
  char *result; // eax
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // ecx
  char *m; // eax
  _DWORD *v13; // eax
  unsigned int n; // edx
  char *v15; // edi
  _DWORD *v16; // edx
  char *v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ebx
  char *v21; // edx
  char *v22; // ecx
  char *v23; // eax
  unsigned int j; // ebp
  char *v25; // ecx
  char *k; // eax
  int v27; // ebp
  _DWORD *v28; // edx
  char *i; // ecx
  _DWORD *v30; // ecx
  char *v31; // eax
  int v32; // edx
  int v34; // [esp+14h] [ebp-4h]
  _DWORD *v35; // [esp+20h] [ebp+8h]

  v5 = this;
  result = *(char **)(this + 8);
  if ( (*(_DWORD *)(this + 12) - (int)result) >> 3 >= a3 )
  {
    if ( (result - a2) >> 3 >= a3 )
    {
      if ( a3 != 0 )
      {
        v27 = 8 * a3;
        v28 = *(_DWORD **)(this + 8);
        for ( i = &result[-8 * a3]; i != result; v28 += 2 )
        {
          if ( v28 != nullptr )
          {
            *v28 = *(_DWORD *)i;
            v28[1] = *((_DWORD *)i + 1);
          }
          i += 8;
        }
        v30 = *(_DWORD **)(v5 + 8);
        v31 = (char *)&v30[v27 / 0xFFFFFFFC];
        if ( a2 != (char *)&v30[v27 / 0xFFFFFFFC] )
        {
          do
          {
            v32 = *((_DWORD *)v31 - 2);
            v31 -= 8;
            v30 -= 2;
            *v30 = v32;
            v30[1] = *((_DWORD *)v31 + 1);
          }
          while ( v31 != a2 );
        }
        for ( result = a2; result != &a2[v27]; result += 8 )
        {
          *(_DWORD *)result = *a4;
          *((_DWORD *)result + 1) = a4[1];
        }
        *(_DWORD *)(v5 + 8) += v27;
      }
    }
    else
    {
      v20 = 8 * a3;
      v21 = &a2[8 * a3];
      if ( a2 != result )
      {
        v22 = &v21[-v20];
        do
        {
          if ( v21 != nullptr )
          {
            *(_DWORD *)v21 = *(_DWORD *)v22;
            *((_DWORD *)v21 + 1) = *((_DWORD *)v22 + 1);
            v5 = this;
          }
          v22 += 8;
          v21 += 8;
        }
        while ( v22 != result );
      }
      v23 = *(char **)(v5 + 8);
      for ( j = a3 - ((v23 - a2) >> 3); j != 0; --j )
      {
        if ( v23 != nullptr )
        {
          *(_DWORD *)v23 = *a4;
          *((_DWORD *)v23 + 1) = a4[1];
        }
        v23 += 8;
      }
      v25 = *(char **)(v5 + 8);
      for ( k = a2; k != v25; k += 8 )
      {
        *(_DWORD *)k = *a4;
        *((_DWORD *)k + 1) = a4[1];
      }
      result = (char *)(v20 + *(_DWORD *)(v5 + 8));
      *(_DWORD *)(v5 + 8) = result;
    }
  }
  else
  {
    v7 = *(_DWORD *)(this + 4);
    if ( v7 == 0 || (v8 = (int)&result[-v7] >> 3, a3 >= v8) )
      v8 = a3;
    if ( v7 != 0 )
      v9 = (int)&result[-v7] >> 3;
    else
      v9 = 0;
    v10 = v8 + v9;
    v34 = v10;
    if ( v10 < 0 )
      v10 = 0;
    v35 = operator new(Size: 8 * v10);
    v11 = v35;
    for ( m = *(char **)(v5 + 4); m != a2; v11 += 2 )
    {
      if ( v11 != nullptr )
      {
        *v11 = *(_DWORD *)m;
        v11[1] = *((_DWORD *)m + 1);
      }
      m += 8;
    }
    v13 = v11;
    if ( a3 != 0 )
    {
      for ( n = a3; n != 0; --n )
      {
        if ( v13 != nullptr )
        {
          *v13 = *a4;
          v13[1] = a4[1];
          v5 = this;
        }
        v13 += 2;
      }
    }
    v15 = *(char **)(v5 + 8);
    v16 = &v11[2 * a3];
    if ( a2 != v15 )
    {
      v17 = a2;
      do
      {
        if ( v16 != nullptr )
        {
          *v16 = *(_DWORD *)v17;
          v16[1] = *((_DWORD *)v17 + 1);
        }
        v17 += 8;
        v16 += 2;
      }
      while ( v17 != v15 );
    }
    operator delete(Block: *(void **)(this + 4));
    *(_DWORD *)(this + 12) = &v35[2 * v34];
    v18 = *(_DWORD *)(this + 4);
    if ( v18 != 0 )
    {
      v19 = *(_DWORD *)(this + 8);
      *(_DWORD *)(this + 4) = v35;
      result = (char *)&v35[2 * a3 + 2 * ((v19 - v18) >> 3)];
    }
    else
    {
      *(_DWORD *)(this + 4) = v35;
      result = (char *)&v35[2 * a3];
    }
    *(_DWORD *)(this + 8) = result;
  }
  return result;
}