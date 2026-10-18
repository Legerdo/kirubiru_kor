// Derived static logic. See tools/lift.py and PORTING.md.
#include "platform.h"
#include "globals.h"
#include "prototypes.h"
int sub_401000(int ignored)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v1 ((_DWORD *)(frame + 32))


  v1[7] = sub_401040;
  memset(&v1[1], 0, 12);
  v1[0] = 1;
  return sub_4128C0(v1);

  return 0;
}
#undef v1

int sub_401040(int ignored)
{
  _Alignas(16) unsigned char frame[1080] = {0};
#define v9 (*((int *)(frame + 32)))
#define v10 (*((int *)(frame + 36)))
  int v0; // ebx
  int v1; // edi
  int v2; // esi
  int v3; // ebp
  int v4; // eax
  int result; // eax
  int v6; // eax
  int v7; // et2
  int v8; // eax



  v0 = -*(_DWORD *)sub_40B5E0(0);
  v1 = *(_DWORD *)(sub_40B5E0(0) + 8);
  v2 = 0;
  v3 = v1;
  if ( v1 < 0 )
  {
    v2 = -v1;
    v3 = 0;
  }
  if ( v1 <= -480 )
  {
    v10 = *(_DWORD *)(sub_40B5E0(0) + 80);
    v9 = 480;
  }
  else
  {
    v4 = sub_411780();
    host_blit(11, v0, v2, 640, 480 - v2, 0, v3);
    v10 = *(_DWORD *)(sub_40B5E0(0) + 80);
    v9 = v2;
  }
  sub_411780();
  result = sub_411370(0, 0, 640, v9, v10);
  if ( v1 < -1440 )
  {
    v6 = rand();
    v7 = v6 % 10;
    result = v6 / 10;
    if ( v7 == 0 )
    {
      v8 = rand();
      return sub_4085F0(v8 % 640, v1 - 120, 0);
    }
  }
  return result;

  return 0;
}
#undef v9
#undef v10

int sub_401100(int ignored)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v1 ((_DWORD *)(frame + 32))


  v1[7] = sub_401140;
  memset(&v1[1], 0, 12);
  v1[0] = 2;
  return sub_4128C0(v1);

  return 0;
}
#undef v1

int sub_401140(int ignored)
{
  _Alignas(16) unsigned char frame[1076] = {0};
#define v9 (*((int *)(frame + 32)))
#define v10 (*((int *)(frame + 32)))
  int v0; // ebx
  int v1; // ebp
  int v2; // esi
  int v3; // edi
  int v4; // eax
  int result; // eax
  int v6; // eax
  int v7; // et2
  int v8; // eax



  v0 = -*(_DWORD *)sub_40B5E0(0);
  v1 = *(_DWORD *)(sub_40B5E0(0) + 8);
  v2 = 0;
  v3 = v1 + 960;
  if ( v1 + 960 < 0 )
  {
    v2 = -v3;
    v3 = 0;
  }
  if ( v1 <= -1440 )
  {
    v10 = *(_DWORD *)(sub_40B5E0(0) + 72);
    sub_411780();
    sub_411370(0, 0, 640, 480, v10);
    v6 = rand();
    v7 = v6 % 10;
    result = v6 / 10;
    if ( v7 == 0 )
    {
      v8 = rand();
      return sub_4085F0(v8 % 640, v1 - 120, 0);
    }
  }
  else
  {
    v4 = sub_411780();
    host_blit(10, v0, v2, 640, 480 - v2, 0, v3);
    v9 = *(_DWORD *)(sub_40B5E0(0) + 72);
    sub_411780();
    return sub_411370(0, 0, 640, v2, v9);
  }
  return result;

  return 0;
}
#undef v9
#undef v10

int sub_401210(int a1)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v2 ((_DWORD *)(frame + 32))
#define v3 (*((char *)(frame + 64)))



  v2[7] = sub_401250;
  v2[0] = 32;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = a1;
  v3 = 0;
  return sub_4128C0(v2);

  return 0;
}
#undef v2
#undef v3

int sub_401250(int a1)
{
  _Alignas(16) unsigned char frame[1080] = {0};
#define v9 (*((int *)(frame + 32)))
  int v1; // edi
  int v2; // esi
  int v3; // eax
  int *v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // eax


  v1 = (__int64)*(float *)(*(_DWORD *)(a1 + 12) + 56);
  v2 = 50 * *(_DWORD *)(sub_40B5E0(0) + 28) / 300;
  if ( v2 != 50 )
  {
    v4 = (int *)sub_411780();
    v5 = *v4;
    v9 = v2;
    goto LABEL_8;
  }
  if ( ++dword_41F460 % 3 == 0 )
    byte_41E050 = byte_41E050 == 0;
  if ( byte_41E050 == 0 )
  {
    v4 = (int *)sub_411780();
    v5 = *v4;
    v9 = 50;
LABEL_8:
    host_blit(28, 65, 448, v9, 4, 0, 0);
    goto LABEL_9;
  }
  v3 = sub_411780();
  host_blit(29, 65, 448, 50, 4, 0, 0);
LABEL_9:
  v6 = sub_411780();
  host_blit(27, 56, 458, v1, 16, 0, 0);
  v7 = sub_411780();
  return host_blit(7, 2, 434, 160, 48, 0, 0);

  return 0;
}
#undef v9

int sub_401340(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _Alignas(16) unsigned char frame[1684] = {0};
#define v23 (*((int *)(frame + 32)))
#define v24 (*((int *)(frame + 36)))
#define v25 ((_DWORD *)(frame + 40))
#define v26 ((_DWORD *)(frame + 76))
#define v27 (*((char *)(frame + 92)))
#define v28 ((_BYTE *)(frame + 104))
#define v29 ((_DWORD *)(frame + 116))
#define v30 ((_BYTE *)(frame + 148))
  int v6; // ebp
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  int v15; // esi
  char *v16; // esi
  int i; // ebx
  int v18; // edx
  int v19; // edx
  _DWORD *v20; // eax
  int j; // ecx









  v6 = a2;
  v7 = *(_DWORD *)(sub_40B5E0(0) + 8);
  v25[1] = 0;
  LOBYTE(v25[6]) = 0;
  v25[7] = 0;
  v25[8] = 0;
  v29[7] = sub_401530;
  v29[0] = 16;
  v25[3] = a1;
  v25[0] = v7 - 118 * a2 - 238;
  v25[4] = a2 + 2;
  v25[2] = v25[0] << 6;
  v25[5] = a3;
  v29[1] = 0;
  v29[2] = 30;
  v29[3] = 0;
  qmemcpy(v30, v25, 36);
  v8 = a5;
  v23 = sub_4128C0(v29);
  v9 = a4;
  v10 = a6 + a4 + a5;
  if ( v10 == 0 )
  {
    v10 = 1;
    v9 = 0;
    v8 = 1;
  }
  v11 = 100 * v9 / v10;
  v12 = 100 * v8 / v10;
  v13 = 3;
  v24 = v12;
  v14 = v28;
  do
  {
    *(v14 - 3) = 2;
    *v14 = 2;
    *(v14 - 6) = 0;
    ++v14;
    --v13;
  }
  while ( v13 != 0 );
  v15 = v23;
  v26[0] = 0;
  sub_4015C0(v26, v23);
  if ( a2 > 0 )
  {
    do
    {
      v16 = &v27;
      for ( i = 3; i != 0; --i )
      {
        v18 = rand() % 100;
        if ( v11 <= v18 )
          *(_DWORD *)v16 = (v11 + v24 <= v18) + 2;
        else
          *(_DWORD *)v16 = 1;
        v19 = 4 - *(_DWORD *)v16;
        v16 += 4;
        *((_DWORD *)v16 - 4) = 120 * v19;
        *((_DWORD *)v16 + 2) = *((_DWORD *)v16 - 1);
      }
      ++v26[0];
      sub_4015C0(v26, v23);
      --v6;
    }
    while ( v6 != 0 );
    v15 = v23;
  }
  v20 = v28;
  for ( j = 3; j != 0; --j )
  {
    *(v20 - 3) = 2;
    *v20 = 2;
    *(v20 - 6) = 480;
    ++v20;
  }
  ++v26[0];
  sub_4015C0(v26, v15);
  return v15;

  return 0;
}
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28
#undef v29
#undef v30

int sub_401530(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int result; // eax
  int v2; // edx
  int v3; // ecx
  int v4; // eax

  result = *(_DWORD *)(a1 + 48);
  if ( result != 0 )
  {
    if ( *(int *)(a1 + 8) <= 0 )
    {
      v2 = *(_DWORD *)(a1 + 36);
      v3 = v2 + *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 40) = v3;
      v3 >>= 6;
      *(_DWORD *)(a1 + 32) = v3;
      if ( v3 + 118 * result + 2 >= 428 )
      {
        if ( v2 > *(_DWORD *)(a1 + 44) )
        {
          sub_40AAE0(0);
          sub_401BC0(0);
        }
        v4 = *(_DWORD *)(a1 + 48);
        *(_DWORD *)(a1 + 36) = 0;
        *(_DWORD *)(a1 + 32) = 426 - 118 * v4;
        *(_DWORD *)(a1 + 40) = (426 - 118 * v4) << 6;
      }
      result = *(_DWORD *)(a1 + 44);
      *(_DWORD *)(a1 + 36) += result;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;

  return 0;
}


int sub_4015C0(const void *a1, int a2)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v3 ((_DWORD *)(frame + 32))
#define v4 ((_BYTE *)(frame + 64))



  v3[1] = 0;
  v3[2] = 0;
  v3[7] = sub_401620;
  v3[0] = 16;
  v3[3] = a2;
  qmemcpy(v4, a1, 40);
  return sub_4128C0(v3);

  return 0;
}
#undef v3
#undef v4

int sub_401620(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v2; // esi
  int v3; // eax
  int *v4; // edi
  int v5; // edi
  int v6; // edi
  int result; // eax
  int *v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // eax
  int v12; // esi
  int v13; // ebx
  int v14; // edi
  int v15; // esi
  _DWORD *v16; // ebp
  int v17; // eax
  int v18; // [esp+10h] [ebp+4h]
  int v19; // [esp+10h] [ebp+4h]

  v2 = *(_DWORD *)(a1 + 12) + 32;
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 12) + 56) != 1 || *(_DWORD *)(*(_DWORD *)(a1 + 12) + 48) - 1 != *(_DWORD *)(a1 + 32) )
  {
LABEL_9:
    v11 = *(_DWORD *)(v2 + 20);
    v12 = *(_DWORD *)v2;
    v18 = v11;
    v13 = 80 - *(_DWORD *)sub_40B5E0(0);
    v14 = v12 + 118 * *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0(0) + 8);
    v15 = 0;
    v19 = v18 + 4;
    v16 = (_DWORD *)(a1 + 36);
    do
    {
      v17 = sub_411780();
      result = host_blit(v19, v15 + v13, v14, 160, 120, v15, *v16);
      v15 += 160;
      ++v16;
    }
    while ( v15 < 480 );
    return result;
  }
  *(_DWORD *)(a1 + 4 * *(_DWORD *)(*(_DWORD *)(a1 + 12) + 60) + 48) -= *(_DWORD *)(*(_DWORD *)(a1 + 12) + 64);
  v3 = *(_DWORD *)(v2 + 28);
  *(_BYTE *)(v2 + 24) = 0;
  if ( *(int *)(a1 + 4 * v3 + 48) > 0 )
  {
    v8 = (int *)(sub_40B5E0(0) + 16);
    *v8 = (__int64)((double)*(int *)(sub_40B5E0(0) + 20) * ((double)*(int *)(v2 + 12) * 1.5) + (double)*v8);
    v9 = sub_40B5E0(0);
    if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v9 + 60) )
    {
      v10 = sub_40B5E0(0);
      *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v10 + 60);
    }
    goto LABEL_9;
  }
  --*(_DWORD *)(v2 + 16);
  *(_BYTE *)(a1 + 24) = 1;
  v4 = (int *)(sub_40B5E0(0) + 16);
  *v4 = (__int64)((double)(10 * *(_DWORD *)(sub_40B5E0(0) + 20))
                * (double)*(int *)(a1 + 4 * *(_DWORD *)(v2 + 28) + 60)
                * ((double)*(int *)(v2 + 12)
                 * 1.5)
                + (double)*v4);
  v5 = sub_40B5E0(0);
  if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v5 + 60) )
  {
    v6 = sub_40B5E0(0);
    *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v6 + 60);
  }
  sub_4040B0(320, *(_DWORD *)v2 + 118 * *(_DWORD *)(a1 + 32));
  return sub_413610(7);

  return 0;
}


int sub_4017E0(int a1)
{
  _Alignas(16) unsigned char frame[1604] = {0};
#define v2 (*((int *)(frame + 32)))
#define v3 ((_DWORD *)(frame + 36))



  LOBYTE(v2) = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[8] = 0;
  v3[3] = a1;
  v3[7] = sub_401920;
  v3[0] = 64;
  v3[9] = 0;
  v3[10] = v2;
  return sub_4128C0(v3);

  return 0;
}
#undef v2
#undef v3

int sub_401850(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int result; // eax
  int v3; // edx
  int v4; // esi
  int v5; // esi
  float v6; // [esp+8h] [ebp+4h]

  result = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 12) + 32;
  if ( result <= 0 )
  {
    if ( *(_BYTE *)(a1 + 40) != 0 )
    {
      *(float *)(a1 + 32) = *(float *)(*(_DWORD *)(a1 + 12) + 64) - 304.0;
    }
    else
    {
      *(float *)(a1 + 32) = *(float *)(a1 + 36) + *(float *)(a1 + 32);
      v6 = *(float *)(a1 + 36) + 0.05f;
      *(float *)(a1 + 36) = v6;
      if ( *(float *)(v3 + 32) - 304.0 <= *(float *)(a1 + 32) )
      {
        if ( *(float *)(v3 + 32) - 200.0 < *(float *)(a1 + 32) )
          *(float *)(a1 + 36) = v6 - 0.05f;
      }
      else
      {
        *(_BYTE *)(a1 + 40) = 1;
      }
    }
    if ( *(_DWORD *)(v3 + 48) == 0 )
    {
      *(_DWORD *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 24) = 1;
    }
    if ( *(float *)(a1 + 32) > 0.0 )
      *(_DWORD *)(a1 + 32) = 0;
    v4 = (__int64)*(float *)(a1 + 32);
    *(_DWORD *)(sub_40B5E0(0) + 8) = v4;
    v5 = *(_DWORD *)(sub_40B5E0(0) + 8) + 480;
    result = sub_40B5E0(0);
    *(_DWORD *)(result + 12) = v5;
  }
  return result;

  return 0;
}


int sub_4019D0(int a1)
{
  _Alignas(16) unsigned char frame[1624] = {0};
#define v2 ((_DWORD *)(frame + 32))
#define v3 ((_DWORD *)(frame + 56))
#define v4 ((_BYTE *)(frame + 88))




  v2[0] = *(_DWORD *)sub_40B5E0(0);
  v2[1] = *(_DWORD *)(sub_40B5E0(0) + 8);
  LOBYTE(v2[4]) = 1;
  v2[2] = 0;
  v2[3] = 0;
  sub_4129B0(127);
  if ( v2[1] < a1 - 150 )
    return 0;
  v3[7] = sub_401A70;
  v3[0] = 32;
  memset(&v3[1], 0, 12);
  v2[5] = a1 - 150;
  qmemcpy(v4, v2, 24);
  return sub_4128C0(v3);

  return 0;
}
#undef v2
#undef v3
#undef v4

int sub_401BC0(int ignored)
{
  _Alignas(16) unsigned char frame[1664] = {0};
#define v1 ((_QWORD *)(frame + 32))
#define v2 ((_DWORD *)(frame + 96))
#define v3 ((_BYTE *)(frame + 128))




  v1[3] = 0xFFFFFFF600000002uLL;
  v1[1] = 0x14FFFFFFF6LL;
  v1[5] = 0x4FFFFFFFELL;
  v1[6] = 0x1FFFFFFFELL;
  v1[4] = 0x800000000LL;
  v1[7] = 0;
  memset(&v2[1], 0, 12);
  v1[0] = 0x2FFFFFFECLL;
  v1[2] = 0xDFFFFFFFCLL;
  v2[7] = sub_401C80;
  v2[0] = 16;
  qmemcpy(v3, v1, 64);
  return sub_4128C0(v2);

  return 0;
}
#undef v1
#undef v2
#undef v3

int sub_401C80(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // edi
  int v2; // esi

  v1 = *(_DWORD *)(a1 + 92) + 1;
  *(_DWORD *)(a1 + 92) = v1;
  if ( v1 <= 14 )
  {
    *(_DWORD *)sub_40B5E0(0) = *(_DWORD *)(a1 + 4 * v1 + 32);
    v2 = *(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 92) + 32) + 640;
    *(_DWORD *)(sub_40B5E0(0) + 4) = v2;
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }

  return 0;
}


int sub_401CC0(int ignored)
{
  _Alignas(16) unsigned char frame[1656] = {0};
#define v2 ((_DWORD *)(frame + 32))
#define v3 ((_DWORD *)(frame + 88))
#define v4 ((_BYTE *)(frame + 120))
  int v0; // esi




  v2[3] = 3;
  dword_41F528 = 3;
  v2[0] = 256;
  v2[7] = 1132462080;
  v2[1] = 304;
  v2[8] = 1134034944;
  v2[5] = 0;
  v2[2] = 1;
  v2[4] = 0;
  v2[6] = 1120403456;
  v2[12] = 0;
  v2[13] = 0;
  v2[9] = 0;
  v2[10] = 0;
  dword_41F468 = 0;
  dword_41F46C = 0;
  dword_41F470 = 128;
  dword_41F474 = 0;
  dword_41F478 = 256;
  dword_41F47C = 0;
  dword_41F480 = 384;
  dword_41F484 = 0;
  dword_41F488 = 512;
  dword_41F48C = 0;
  dword_41F4BC = 0;
  dword_41F4B8 = 0;
  dword_41F4C0 = 1;
  byte_41F4C4 = 0;
  byte_41F4C5 = 0;
  dword_41F4C8 = 0;
  dword_41F4CC = 4;
  dword_41F4D0 = 0;
  dword_41F4D4 = 128;
  dword_41F4D8 = 128;
  dword_41F4DC = 128;
  dword_41F4E0 = 256;
  dword_41F4E4 = 128;
  dword_41F524 = 0;
  dword_41F520 = 0;
  byte_41F52C = 0;
  byte_41F52D = 0;
  dword_41F530 = 0;
  dword_41F534 = 2;
  dword_41F538 = 0;
  dword_41F53C = 256;
  dword_41F540 = 128;
  dword_41F544 = 256;
  dword_41F548 = 256;
  dword_41F54C = 256;
  dword_41F550 = 384;
  dword_41F554 = 256;
  dword_41F558 = 512;
  dword_41F55C = 256;
  dword_41F58C = 0;
  dword_41F588 = 0;
  dword_41F590 = 1;
  byte_41F594 = 0;
  byte_41F595 = 0;
  dword_41F598 = 0;
  dword_41F59C = 4;
  dword_41F5A0 = 0;
  dword_41F5A4 = 0;
  dword_41F5A8 = 128;
  dword_41F5AC = 0;
  dword_41F5B0 = 256;
  dword_41F5B4 = 0;
  dword_41F5B8 = 384;
  dword_41F5BC = 0;
  dword_41F5C0 = 512;
  dword_41F5C4 = 0;
  dword_41F5C8 = 0;
  dword_41F5D0 = 128;
  dword_41F5D8 = 256;
  dword_41F5F4 = 0;
  dword_41F5F0 = 0;
  byte_41F5FC = 0;
  byte_41F5FD = 0;
  dword_41F600 = 0;
  dword_41F608 = 0;
  dword_41F60C = 256;
  dword_41F610 = 128;
  dword_41F614 = 256;
  dword_41F618 = 256;
  dword_41F61C = 256;
  dword_41F624 = 256;
  dword_41F628 = 512;
  dword_41F62C = 256;
  dword_41F630 = 0;
  dword_41F638 = 128;
  dword_41F640 = 256;
  dword_41F65C = 0;
  dword_41F658 = 0;
  byte_41F664 = 0;
  byte_41F665 = 0;
  dword_41F668 = 0;
  memset(&v3[1], 0, 12);
  v3[7] = sub_401FB0;
  v3[0] = 8;
  qmemcpy(v4, v2, 56);
  dword_41F5CC = 384;
  dword_41F5D4 = 384;
  dword_41F5DC = 384;
  dword_41F5E0 = 384;
  dword_41F5E4 = 384;
  dword_41F5F8 = 2;
  dword_41F604 = 8;
  dword_41F620 = 384;
  dword_41F634 = 384;
  dword_41F63C = 384;
  dword_41F644 = 384;
  dword_41F648 = 384;
  dword_41F64C = 384;
  dword_41F660 = 2;
  dword_41F66C = 8;
  v0 = sub_4128C0(v3);
  sub_4086E0(v0);
  sub_401210(v0);
  return v0;

  return 0;
}
#undef v2
#undef v3
#undef v4

int sub_401FB0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  double v1; // st7
  double v2; // st7
  double v3; // st7
  int v4; // edi
  double v5; // st7
  int v6; // ecx
  int v7; // edi
  int v8; // esi
  int v9; // eax

  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v1 = *(float *)(a1 + 56) + 0.25;
    *(float *)(a1 + 56) = v1;
    if ( v1 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    if ( (unsigned __int8)sub_412180(5) != 0 )
    {
      *(_DWORD *)(a1 + 80) = 1;
      *(_DWORD *)(a1 + 76) = 0;
      sub_402FD0(&dword_41F468);
      *(_DWORD *)(a1 + 28) = sub_402770;
    }
    if ( (unsigned __int8)sub_412150(7) != 0 && *(float *)(a1 + 56) > 10.0 )
    {
      *(_DWORD *)(a1 + 80) = 7;
      *(_DWORD *)(a1 + 28) = sub_402450;
    }
    else if ( (unsigned __int8)sub_412150(6) != 0 )
    {
      v2 = (double)*(int *)(a1 + 32);
      *(_DWORD *)(a1 + 80) = 2;
      *(_DWORD *)(a1 + 76) = 1;
      *(_DWORD *)(a1 + 68) = -1050673152;
      *(float *)(a1 + 60) = v2;
      *(float *)(a1 + 64) = (float)*(int *)(a1 + 36);
      sub_402FD0(&dword_41F4D0);
      *(_DWORD *)(a1 + 28) = sub_402820;
    }
    else if ( *(int *)(a1 + 40) > 0 && (unsigned __int8)sub_412180(2) != 0 )
    {
      v3 = (double)*(int *)(a1 + 32);
      v4 = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 80) = 11;
      *(_DWORD *)(a1 + 72) = -1065353216;
      *(float *)(a1 + 60) = v3;
      *(_DWORD *)(a1 + 40) = v4 - 1;
      *(_DWORD *)(a1 + 28) = sub_4022D0;
      sub_408230(*(_DWORD *)(a1 + 32) + 25, *(_DWORD *)(a1 + 36) + 60);
      sub_413610(8);
    }
    else if ( *(int *)(a1 + 40) < 2 && (unsigned __int8)sub_412180(4) != 0 )
    {
      v5 = (double)*(int *)(a1 + 32);
      v6 = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 80) = 11;
      *(_DWORD *)(a1 + 72) = 1082130432;
      *(float *)(a1 + 60) = v5;
      *(_DWORD *)(a1 + 40) = v6 + 1;
      *(_DWORD *)(a1 + 28) = sub_402390;
      sub_408230(*(_DWORD *)(a1 + 32) + 25, *(_DWORD *)(a1 + 36) + 60);
      sub_413610(8);
    }
    else if ( (unsigned __int8)sub_412150(8) != 0 && *(int *)(sub_40B5E0(0) + 28) >= 300 )
    {
      *(_DWORD *)(sub_40B5E0(0) + 28) = 0;
      *(_DWORD *)(a1 + 80) = 5;
      *(_DWORD *)(a1 + 76) = 3;
      *(_DWORD *)(a1 + 48) = 60;
      sub_402FD0(&dword_41F5A0);
      *(_DWORD *)(a1 + 28) = sub_402B60;
      sub_413610(11);
    }
  }
  v7 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
  v8 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v9 = sub_411780();
  return host_blit(0, v7, v8, 128, 128, 0, 0);

  return 0;
}


int sub_4021D0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // eax
  int result; // eax
  double v3; // st7

  v1 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 36) = 304;
  *(_DWORD *)(a1 + 64) = 1134034944;
  *(_DWORD *)(a1 + 32) = 120 * v1 + 136;
  result = *(_DWORD *)(a1 + 8);
  if ( result == 0 )
  {
    v3 = *(float *)(a1 + 56) + 2.5;
    *(float *)(a1 + 56) = v3;
    if ( v3 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    if ( (unsigned __int8)sub_412180(5) != 0 )
    {
      *(_DWORD *)(a1 + 80) = 1;
      *(_DWORD *)(a1 + 76) = 0;
      sub_402FD0(&dword_41F468);
      *(_DWORD *)(a1 + 28) = sub_402770;
    }
    if ( (unsigned __int8)sub_412150(7) != 0 && *(float *)(a1 + 56) > 10.0 )
    {
      *(_DWORD *)(a1 + 80) = 7;
      *(_DWORD *)(a1 + 28) = sub_402450;
    }
    result = sub_412180(8);
    if ( (_BYTE)result != 0 )
    {
      result = sub_40B5E0(0);
      if ( *(int *)(result + 28) >= 300 )
      {
        *(_DWORD *)(sub_40B5E0(0) + 28) = 0;
        *(_DWORD *)(a1 + 80) = 5;
        *(_DWORD *)(a1 + 76) = 3;
        *(_DWORD *)(a1 + 48) = 60;
        result = sub_402FD0(&dword_41F5A0);
        *(_DWORD *)(a1 + 28) = sub_402B60;
      }
    }
  }
  return result;

  return 0;
}


int sub_4022D0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  double v1; // st7
  __int64 v2; // rax
  int v3; // ecx
  int v4; // ecx
  int v5; // edi
  int v6; // esi
  int v7; // eax

  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v1 = *(float *)(a1 + 56) + 0.25;
    *(float *)(a1 + 56) = v1;
    if ( v1 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    *(float *)(a1 + 60) = *(float *)(a1 + 60) - *(float *)(a1 + 72);
    *(float *)(a1 + 72) = *(float *)(a1 + 72) + 5.0;
    v2 = (__int64)*(float *)(a1 + 60);
    v3 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 32) = v2;
    v4 = 120 * v3 + 136;
    if ( (int)v2 < v4 )
    {
      *(_DWORD *)(a1 + 32) = v4;
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 28) = sub_401FB0;
    }
  }
  v5 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
  v6 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v7 = sub_411780();
  return host_blit(0, v5, v6, 128, 128, 512, 128);

  return 0;
}


int sub_402390(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  double v1; // st7
  __int64 v2; // rax
  int v3; // ecx
  int v4; // ecx
  int v5; // edi
  int v6; // esi
  int v7; // eax

  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v1 = *(float *)(a1 + 56) + 0.25;
    *(float *)(a1 + 56) = v1;
    if ( v1 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    *(float *)(a1 + 60) = *(float *)(a1 + 60) + *(float *)(a1 + 72);
    *(float *)(a1 + 72) = *(float *)(a1 + 72) + 5.0;
    v2 = (__int64)*(float *)(a1 + 60);
    v3 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 32) = v2;
    v4 = 120 * v3 + 136;
    if ( (int)v2 > v4 )
    {
      *(_DWORD *)(a1 + 32) = v4;
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 28) = sub_401FB0;
    }
  }
  v5 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
  v6 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v7 = sub_411780();
  return host_blit(0, v5, v6, 128, 128, 512, 128);

  return 0;
}


int sub_402450(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  double v1; // st7
  int v2; // esi
  int v3; // edi
  int v4; // eax

  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v1 = *(float *)(a1 + 56) - 1.0;
    *(float *)(a1 + 56) = v1;
    if ( v1 < 0.0 )
      *(_DWORD *)(a1 + 56) = 0;
    if ( (unsigned __int8)sub_412150(7) == 0 || *(float *)(a1 + 56) == 0.0 )
    {
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 28) = sub_401FB0;
    }
  }
  v2 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
  v3 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v4 = sub_411780();
  return host_blit(0, v2, v3, 128, 128, 512, 384);

  return 0;
}


int sub_4024F0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  double v1; // st7
  int v2; // eax
  int v3; // edi
  int v4; // esi
  int v5; // eax

  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v1 = *(float *)(a1 + 56) - 4.0;
    *(float *)(a1 + 56) = v1;
    if ( v1 < 0.0 )
    {
      *(_DWORD *)(a1 + 56) = 0;
      *(_DWORD *)(a1 + 52) = 0;
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 28) = sub_401FB0;
    }
    v2 = *(_DWORD *)(a1 + 52) + 1;
    *(_DWORD *)(a1 + 52) = v2;
    if ( v2 > 8 )
    {
      *(_DWORD *)(a1 + 52) = 0;
      *(_DWORD *)(a1 + 80) = 7;
      *(_DWORD *)(a1 + 28) = sub_402450;
    }
  }
  v3 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
  v4 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v5 = sub_411780();
  return host_blit(0, v3, v4, 128, 128, 0, 512);

  return 0;
}


int sub_402590(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  double v1; // st7
  int v2; // ecx
  int v3; // edi
  int v4; // esi
  int v5; // eax

  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v1 = *(float *)(a1 + 56) - 4.0;
    *(float *)(a1 + 56) = v1;
    if ( v1 < 0.0 )
    {
      *(_DWORD *)(a1 + 56) = 0;
      *(_DWORD *)(a1 + 52) = 0;
      *(_DWORD *)(a1 + 80) = 3;
      *(_DWORD *)(a1 + 28) = sub_4028F0;
    }
    *(float *)(a1 + 64) = *(float *)(a1 + 64) + *(float *)(a1 + 68);
    *(float *)(a1 + 68) = *(float *)(a1 + 68) + 0.1f;
    if ( *(float *)(a1 + 64) > 304.0 )
      *(_DWORD *)(a1 + 64) = 1134034944;
    v2 = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 36) = (__int64)*(float *)(a1 + 64);
    *(_DWORD *)(a1 + 52) = v2 + 1;
    if ( v2 + 1 > 8 )
    {
      *(_DWORD *)(a1 + 52) = 0;
      *(_DWORD *)(a1 + 80) = 10;
      *(_DWORD *)(a1 + 28) = sub_402670;
    }
  }
  v3 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
  v4 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v5 = sub_411780();
  return host_blit(0, v3, v4, 128, 128, 0, 512);

  return 0;
}


int sub_402670(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  double v1; // st7
  int v2; // edi
  int v3; // esi
  int v4; // eax

  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v1 = *(float *)(a1 + 56) - 1.0;
    *(float *)(a1 + 56) = v1;
    if ( v1 < 0.0 )
      *(_DWORD *)(a1 + 56) = 0;
    *(float *)(a1 + 64) = *(float *)(a1 + 64) + *(float *)(a1 + 68);
    *(float *)(a1 + 68) = *(float *)(a1 + 68) + 0.1f;
    *(_DWORD *)(a1 + 36) = (__int64)*(float *)(a1 + 64);
    if ( (unsigned __int8)sub_412150(7) == 0 || *(float *)(a1 + 56) == 0.0 )
    {
      *(_DWORD *)(a1 + 80) = 3;
      *(_DWORD *)(a1 + 28) = sub_4028F0;
    }
    if ( *(int *)(a1 + 36) > 295 )
    {
      *(_DWORD *)(a1 + 80) = 7;
      *(_DWORD *)(a1 + 36) = 304;
      *(_DWORD *)(a1 + 28) = sub_402450;
      sub_408230(*(_DWORD *)(a1 + 32) + 25, *(_DWORD *)(a1 + 36) + 60);
      sub_413610(10);
    }
  }
  v2 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
  v3 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v4 = sub_411780();
  return host_blit(0, v2, v3, 128, 128, 512, 384);

  return 0;
}


int sub_402770(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // eax
  int v2; // ebx
  double v3; // st7
  int v4; // esi
  int v5; // edi
  int v6; // eax

  v1 = *(_DWORD *)(a1 + 76);
  v2 = 104 * v1 + ((int)(image + 13416));
  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v3 = *(float *)(a1 + 56) + 0.25;
    *(float *)(a1 + 56) = v3;
    if ( v3 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    sub_402F90(104 * v1 + ((int)(image + 13416)));
    if ( *(_BYTE *)(v2 + 93) != 0 )
    {
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 28) = sub_401FB0;
      --*(_DWORD *)(v2 + 80);
    }
  }
  v4 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
  v5 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v6 = sub_411780();
  return host_blit(0, v4, v5, 128, 128, *(_DWORD *)(v2 + 8 * *(_DWORD *)(v2 + 80)), *(_DWORD *)(v2 + 8 * *(_DWORD *)(v2 + 80) + 4));

  return 0;
}


int sub_402820(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // eax
  int v2; // ebx
  double v3; // st7
  int v4; // edi
  int v5; // esi
  int v6; // eax

  v1 = *(_DWORD *)(a1 + 76);
  v2 = 104 * v1 + ((int)(image + 13416));
  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v3 = *(float *)(a1 + 56) + 0.25;
    *(float *)(a1 + 56) = v3;
    if ( v3 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    sub_402F90(104 * v1 + ((int)(image + 13416)));
    if ( *(_BYTE *)(v2 + 93) != 0 )
    {
      *(_DWORD *)(a1 + 80) = 3;
      *(_DWORD *)(a1 + 28) = sub_4028F0;
      sub_408230(*(_DWORD *)(a1 + 32) + 25, *(_DWORD *)(a1 + 36) + 60);
      sub_4017E0(a1);
      --*(_DWORD *)(v2 + 80);
      sub_413610(9);
    }
  }
  v4 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
  v5 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v6 = sub_411780();
  return host_blit(0, v4, v5, 128, 128, *(_DWORD *)(v2 + 8 * *(_DWORD *)(v2 + 80)), *(_DWORD *)(v2 + 8 * *(_DWORD *)(v2 + 80) + 4));

  return 0;
}


int sub_4028F0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  double v1; // st7
  __int64 v2; // rax
  int v3; // edi
  int v4; // esi
  int v5; // eax

  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v1 = *(float *)(a1 + 56) + 0.25;
    *(float *)(a1 + 56) = v1;
    if ( v1 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    *(float *)(a1 + 64) = *(float *)(a1 + 64) + *(float *)(a1 + 68);
    *(float *)(a1 + 68) = *(float *)(a1 + 68) + 0.1f;
    v2 = (__int64)*(float *)(a1 + 64);
    *(_DWORD *)(a1 + 36) = v2;
    if ( (int)v2 <= 295 )
    {
      if ( (unsigned __int8)sub_412180(5) != 0 )
      {
        *(_DWORD *)(a1 + 80) = 4;
        *(_DWORD *)(a1 + 76) = 2;
        sub_402FD0(&dword_41F538);
        *(_DWORD *)(a1 + 28) = sub_402A80;
      }
      else if ( (unsigned __int8)sub_412150(8) != 0 && *(int *)(sub_40B5E0(0) + 28) >= 300 )
      {
        *(_DWORD *)(sub_40B5E0(0) + 28) = 0;
        *(_DWORD *)(a1 + 80) = 6;
        *(_DWORD *)(a1 + 76) = 4;
        *(_DWORD *)(a1 + 48) = 60;
        sub_402FD0(&dword_41F608);
        *(_DWORD *)(a1 + 28) = sub_402C30;
        sub_413610(11);
      }
      else if ( (unsigned __int8)sub_412150(7) != 0 && *(float *)(a1 + 56) > 10.0 )
      {
        *(_DWORD *)(a1 + 80) = 10;
        *(_DWORD *)(a1 + 28) = sub_402670;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 36) = 304;
      *(_DWORD *)(a1 + 28) = sub_401FB0;
      sub_408230(*(_DWORD *)(a1 + 32) + 25, *(_DWORD *)(a1 + 36) + 60);
      sub_413610(10);
    }
  }
  v3 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
  v4 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v5 = sub_411780();
  return host_blit(0, v3, v4, 128, 128, 384, 128);

  return 0;
}


int sub_402A80(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // ebx
  double v2; // st7
  int v3; // edi
  int v4; // esi
  int v5; // eax

  v1 = 104 * *(_DWORD *)(a1 + 76) + ((int)(image + 13416));
  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v2 = *(float *)(a1 + 56) + 0.25;
    *(float *)(a1 + 56) = v2;
    if ( v2 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    *(float *)(a1 + 64) = *(float *)(a1 + 68) + *(float *)(a1 + 64);
    *(float *)(a1 + 68) = *(float *)(a1 + 68) + 0.1f;
    if ( *(float *)(a1 + 64) > 304.0 )
      *(_DWORD *)(a1 + 64) = 1134034944;
    *(_DWORD *)(a1 + 36) = (__int64)*(float *)(a1 + 64);
    sub_402F90(v1);
    if ( *(_BYTE *)(v1 + 93) != 0 )
    {
      *(_DWORD *)(a1 + 80) = 3;
      *(_DWORD *)(a1 + 28) = sub_4028F0;
      --*(_DWORD *)(v1 + 80);
    }
  }
  v3 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
  v4 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v5 = sub_411780();
  return host_blit(0, v3, v4, 128, 128, *(_DWORD *)(v1 + 8 * *(_DWORD *)(v1 + 80)), *(_DWORD *)(v1 + 8 * *(_DWORD *)(v1 + 80) + 4));

  return 0;
}


int sub_402B60(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // eax
  int v2; // ebx
  double v3; // st7
  int v4; // edi
  int v5; // esi
  int v6; // eax

  v1 = *(_DWORD *)(a1 + 76);
  v2 = 104 * v1 + ((int)(image + 13416));
  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v3 = *(float *)(a1 + 56) + 0.25;
    *(float *)(a1 + 56) = v3;
    if ( v3 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    sub_402F90(104 * v1 + ((int)(image + 13416)));
    if ( *(_BYTE *)(v2 + 93) != 0 )
    {
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 28) = sub_401FB0;
      --*(_DWORD *)(v2 + 80);
      if ( *(_BYTE *)(sub_40B5E0(0) + 41) != 0 )
        sub_40B0C0(*(_DWORD *)(a1 + 32) + 10, *(_DWORD *)(a1 + 36) - 50);
    }
  }
  v4 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
  v5 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v6 = sub_411780();
  return host_blit(0, v4, v5, 128, 128, *(_DWORD *)(v2 + 8 * *(_DWORD *)(v2 + 80)), *(_DWORD *)(v2 + 8 * *(_DWORD *)(v2 + 80) + 4));

  return 0;
}


int sub_402C30(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // eax
  int v2; // ebx
  double v3; // st7
  int v4; // edi
  int v5; // esi
  int v6; // eax

  v1 = *(_DWORD *)(a1 + 76);
  v2 = 104 * v1 + ((int)(image + 13416));
  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v3 = *(float *)(a1 + 56) + 0.25;
    *(float *)(a1 + 56) = v3;
    if ( v3 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    sub_402F90(104 * v1 + ((int)(image + 13416)));
    *(float *)(a1 + 64) = *(float *)(a1 + 68) + *(float *)(a1 + 64);
    *(float *)(a1 + 68) = *(float *)(a1 + 68) + 0.1f;
    if ( *(float *)(a1 + 64) > 304.0 )
      *(_DWORD *)(a1 + 64) = 1134034944;
    *(_DWORD *)(a1 + 36) = (__int64)*(float *)(a1 + 64);
    if ( *(_BYTE *)(v2 + 93) != 0 )
    {
      *(_DWORD *)(a1 + 80) = 3;
      *(_DWORD *)(a1 + 28) = sub_4028F0;
      --*(_DWORD *)(v2 + 80);
      if ( *(_BYTE *)(sub_40B5E0(0) + 41) != 0 )
        sub_40B0C0(*(_DWORD *)(a1 + 32) + 10, *(_DWORD *)(a1 + 36) - 50);
    }
  }
  v4 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
  v5 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v6 = sub_411780();
  return host_blit(0, v4, v5, 128, 128, *(_DWORD *)(v2 + 8 * *(_DWORD *)(v2 + 80)), *(_DWORD *)(v2 + 8 * *(_DWORD *)(v2 + 80) + 4));

  return 0;
}


int sub_402D40(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // eax
  double v2; // st7
  int v3; // eax
  int v4; // edi
  int v5; // esi
  int v6; // eax

  v1 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 36) = 304;
  *(_DWORD *)(a1 + 64) = 1134034944;
  *(_DWORD *)(a1 + 32) = 120 * v1 + 136;
  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v2 = *(float *)(a1 + 56) + 2.5;
    *(float *)(a1 + 56) = v2;
    if ( v2 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    v3 = *(_DWORD *)(a1 + 84) + 1;
    *(_DWORD *)(a1 + 84) = v3;
    if ( v3 > 30 )
    {
      *(_DWORD *)(a1 + 84) = 0;
      *(_DWORD *)(a1 + 48) = 0;
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 28) = sub_401FB0;
    }
  }
  v4 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
  v5 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v6 = sub_411780();
  return host_blit(0, v4, v5, 128, 128, 128, 512);

  return 0;
}


int sub_402E00(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  double v1; // st7
  int v2; // ecx
  int v3; // edi
  int v4; // esi
  int v5; // eax

  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    v1 = *(float *)(a1 + 56) + 2.5;
    *(float *)(a1 + 56) = v1;
    if ( v1 > 100.0 )
      *(_DWORD *)(a1 + 56) = 1120403456;
    v2 = *(_DWORD *)(a1 + 84) + 1;
    *(_DWORD *)(a1 + 84) = v2;
    if ( v2 > 30 )
    {
      *(_DWORD *)(a1 + 84) = 0;
      *(_DWORD *)(a1 + 48) = 0;
      *(_DWORD *)(a1 + 80) = 3;
      *(_DWORD *)(a1 + 28) = sub_4028F0;
    }
    *(float *)(a1 + 64) = *(float *)(a1 + 64) + *(float *)(a1 + 68);
    *(float *)(a1 + 68) = *(float *)(a1 + 68) + 0.1f;
    if ( *(float *)(a1 + 64) > 304.0 )
      *(_DWORD *)(a1 + 64) = 1134034944;
    *(_DWORD *)(a1 + 36) = (__int64)*(float *)(a1 + 64);
  }
  v3 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
  v4 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v5 = sub_411780();
  return host_blit(0, v3, v4, 128, 128, 128, 512);

  return 0;
}


int sub_402EE0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  double v1; // st7
  double v2; // st7
  _DWORD *v6; // eax
  int v7; // esi
  int v8; // edi
  int v9; // ebx
  int v10; // eax

  if ( *(float *)(a1 + 68) < 0.0 )
    *(_DWORD *)(a1 + 68) = 0;
  v1 = *(float *)(a1 + 68) + 0.1f;
  *(float *)(a1 + 68) = v1;
  v2 = v1 + *(float *)(a1 + 64);
  *(float *)(a1 + 64) = v2;
  if ( !(v2 > 304.0) )
  {
    *(_DWORD *)(a1 + 36) = (__int64)v2;
  }
  else
  {
    *(_DWORD *)(a1 + 64) = 1134034944;
    *(_DWORD *)(a1 + 36) = 304;
  }
  v6 = (_DWORD *)sub_40B5E0(0);
  v7 = *(_DWORD *)(a1 + 36);
  v8 = *(_DWORD *)(a1 + 32) - *v6;
  v9 = v7 - *(_DWORD *)(sub_40B5E0(0) + 8);
  v10 = sub_411780();
  if ( v7 == 304 )
    return host_blit(0, v8, v9, 128, 128, 0, 0);
  else
    return host_blit(0, v8, v9, 128, 128, 384, 128);

  return 0;
}


int sub_402F90(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // eax
  int v2; // eax
  int v3; // et2
  int v4; // edx

  LOBYTE(v1) = *(_BYTE *)(a1 + 93);
  if ( (_BYTE)v1 == 0 )
  {
    v2 = *(_DWORD *)(a1 + 84) + 1;
    *(_DWORD *)(a1 + 84) = v2;
    v3 = v2 % *(_DWORD *)(a1 + 88);
    v1 = v2 / *(_DWORD *)(a1 + 88);
    if ( v3 == 0 )
    {
      v4 = *(_DWORD *)(a1 + 100);
      v1 = *(_DWORD *)(a1 + 80) + 1;
      *(_DWORD *)(a1 + 80) = v1;
      if ( v1 > v4 )
      {
        LOBYTE(v1) = *(_BYTE *)(a1 + 92);
        if ( (_BYTE)v1 != 0 )
        {
          v1 = *(_DWORD *)(a1 + 96);
          *(_DWORD *)(a1 + 80) = v1;
        }
        else
        {
          *(_BYTE *)(a1 + 93) = 1;
        }
      }
    }
  }
  return v1;

  return 0;
}


int sub_402FD0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 93) = 0;
  return a1;

  return 0;
}


int sub_402FE0(int ignored)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v1 ((_DWORD *)(frame + 32))


  v1[9] = 640;
  v1[7] = sub_403040;
  v1[0] = 32;
  memset(&v1[1], 0, 12);
  v1[8] = 190;
  v1[10] = 10240;
  v1[11] = 0;
  return sub_4128C0(v1);

  return 0;
}
#undef v1

int sub_403040(_DWORD *a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // eax
  int v2; // eax
  int v3; // eax

  v1 = 30 * (a1[10] - 1600) / 31 + 1600;
  a1[10] = v1;
  v1 >>= 4;
  a1[9] = v1;
  if ( v1 == 100 )
  {
    v2 = a1[11] + 1;
    a1[11] = v2;
    if ( v2 > 180 )
      a1[7] = sub_4030C0;
  }
  v3 = sub_411780();
  return host_blit(56, a1[9], a1[8], 440, 100, 0, 0);

  return 0;
}


int sub_4030C0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // eax
  int v2; // eax

  v1 = *(_DWORD *)(a1 + 40) - 160;
  *(_DWORD *)(a1 + 40) = v1;
  v1 >>= 4;
  *(_DWORD *)(a1 + 36) = v1;
  if ( v1 <= -440 )
    *(_BYTE *)(a1 + 24) = 1;
  v2 = sub_411780();
  return host_blit(56, *(_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 32), 440, 100, 0, 0);

  return 0;
}


int sub_403110(unsigned int pair_lo, int pair_hi)
{
  _Alignas(16) unsigned char frame[1628] = {0};
#define v2 ((_DWORD *)(frame + 32))
#define v3 ((_DWORD *)(frame + 60))
#define v4 ((_BYTE *)(frame + 92))
  __int64 a1 = (unsigned __int64)(unsigned int)pair_hi << 32 | pair_lo;




  v2[0] = *(_DWORD *)(sub_40B5E0(0) + 20);
  *(_QWORD *)&v2[1] = a1;
  v2[5] = 16 * a1;
  v2[6] = 16 * HIDWORD(a1);
  v2[3] = rand() % 256 - 128;
  v2[4] = -rand() % 64;
  v3[7] = sub_4031C0;
  v3[0] = 32;
  memset(&v3[1], 0, 12);
  qmemcpy(v4, v2, 28);
  return sub_4128C0(v3);

  return 0;
}
#undef v2
#undef v3
#undef v4

int sub_4031C0(int a1)
{
  _Alignas(16) unsigned char frame[1060] = {0};
#define v12 (*((int *)(frame + 32)))
  int v2; // ebp
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int result; // eax
  int v9; // eax
  int i; // ebx
  int v11; // ecx

  int v13; // [esp+38h] [ebp+4h]

  v2 = 1;
  v13 = 1;
  v3 = *(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 52);
  v4 = *(_DWORD *)(a1 + 56);
  v12 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 52) = v3;
  v5 = v3;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = v6 + v4;
  *(_DWORD *)(a1 + 56) = v7;
  *(_DWORD *)(a1 + 48) = v6 + 4;
  *(_DWORD *)(a1 + 36) = v5 >> 4;
  result = v7 >> 4;
  *(_DWORD *)(a1 + 40) = v7 >> 4;
  if ( v7 >> 4 <= 480 )
  {
    v9 = sub_411780();
    host_blit(22, *(_DWORD *)(a1 + 36) + 160, *(_DWORD *)(a1 + 40) - 8, 80, 80, 0, 0);
    for ( i = 108; i > 0; i -= 36 )
    {
      result = v12 / v2;
      if ( v12 / v2 > 0 )
      {
        v11 = sub_411780();
        result = host_blit(21, i + *(_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 40), 64, 64, (v12 / v2 % 10) << 6, 0);
        v2 = v13;
      }
      v2 *= 10;
      v13 = v2;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;

  return 0;
}
#undef v12

int sub_4032A0(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1624] = {0};
#define v3 ((_DWORD *)(frame + 32))
#define v4 ((_DWORD *)(frame + 56))
#define v5 ((_BYTE *)(frame + 88))




  v3[1] = a1;
  v3[2] = a2;
  v3[3] = a2;
  v3[0] = a1 + 50;
  v3[4] = 3;
  LOBYTE(v3[5]) = 0;
  v4[7] = sub_403320;
  v4[0] = 16;
  memset(&v4[1], 0, 12);
  qmemcpy(v5, v3, 24);
  return sub_4128C0(v4);

  return 0;
}
#undef v3
#undef v4
#undef v5

int sub_403320(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // eax
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax

  if ( *(_DWORD *)(a1 + 48) == 3 )
  {
    v1 = *(_DWORD *)(a1 + 32) - 8;
    *(_DWORD *)(a1 + 32) = v1;
    v2 = v1;
    v3 = *(_DWORD *)(a1 + 36);
    if ( v2 < v3 )
    {
      *(_DWORD *)(a1 + 32) = v3;
      *(_DWORD *)(a1 + 48) = 0;
    }
  }
  if ( (unsigned __int8)sub_412180(2) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 48) = 1;
    *(_DWORD *)(a1 + 32) = v4;
  }
  if ( (unsigned __int8)sub_412180(9) != 0 )
    *(_BYTE *)(a1 + 52) = 1;
  if ( *(_BYTE *)(a1 + 52) != 0 && *(_DWORD *)(a1 + 48) == 0 )
    *(_BYTE *)(a1 + 24) = 1;
  v5 = *(_DWORD *)(a1 + 48);
  if ( v5 == 1 )
  {
    v6 = *(_DWORD *)(a1 + 32) - 2;
    v7 = *(_DWORD *)(a1 + 36) - 10;
    *(_DWORD *)(a1 + 32) = v6;
    if ( v6 < v7 )
      *(_DWORD *)(a1 + 48) = 2;
  }
  else if ( v5 == 2 )
  {
    v8 = *(_DWORD *)(a1 + 32) + 2;
    *(_DWORD *)(a1 + 32) = v8;
    v9 = v8;
    v10 = *(_DWORD *)(a1 + 36);
    if ( v9 > v10 )
    {
      *(_DWORD *)(a1 + 32) = v10;
      *(_DWORD *)(a1 + 48) = 0;
    }
  }
  v11 = sub_411780();
  return host_blit(55, *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 40), 32, 32, 0, 32);

  return 0;
}


int sub_4033F0(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1624] = {0};
#define v3 ((_DWORD *)(frame + 32))
#define v4 ((_DWORD *)(frame + 56))
#define v5 ((_BYTE *)(frame + 88))




  v3[1] = a1;
  v3[2] = a2;
  v3[3] = a2;
  v3[0] = a1 - 50;
  v3[4] = 3;
  LOBYTE(v3[5]) = 0;
  v4[7] = sub_403470;
  v4[0] = 16;
  memset(&v4[1], 0, 12);
  qmemcpy(v5, v3, 24);
  return sub_4128C0(v4);

  return 0;
}
#undef v3
#undef v4
#undef v5

int sub_403470(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // eax
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax

  if ( *(_DWORD *)(a1 + 48) == 3 )
  {
    v1 = *(_DWORD *)(a1 + 32) + 8;
    *(_DWORD *)(a1 + 32) = v1;
    v2 = v1;
    v3 = *(_DWORD *)(a1 + 36);
    if ( v2 > v3 )
    {
      *(_DWORD *)(a1 + 32) = v3;
      *(_DWORD *)(a1 + 48) = 0;
    }
  }
  if ( (unsigned __int8)sub_412180(4) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 48) = 1;
    *(_DWORD *)(a1 + 32) = v4;
  }
  if ( (unsigned __int8)sub_412180(9) != 0 )
    *(_BYTE *)(a1 + 52) = 1;
  if ( *(_BYTE *)(a1 + 52) != 0 && *(_DWORD *)(a1 + 48) == 0 )
    *(_BYTE *)(a1 + 24) = 1;
  v5 = *(_DWORD *)(a1 + 48);
  if ( v5 == 1 )
  {
    v6 = *(_DWORD *)(a1 + 36) + 10;
    v7 = *(_DWORD *)(a1 + 32) + 2;
    *(_DWORD *)(a1 + 32) = v7;
    if ( v7 > v6 )
      *(_DWORD *)(a1 + 48) = 2;
  }
  else if ( v5 == 2 )
  {
    v8 = *(_DWORD *)(a1 + 32) - 2;
    *(_DWORD *)(a1 + 32) = v8;
    v9 = v8;
    v10 = *(_DWORD *)(a1 + 36);
    if ( v9 < v10 )
    {
      *(_DWORD *)(a1 + 32) = v10;
      *(_DWORD *)(a1 + 48) = 0;
    }
  }
  v11 = sub_411780();
  return host_blit(55, *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 40), 32, 32, 0, 0);

  return 0;
}


int sub_403540(int ignored)
{
  _Alignas(16) unsigned char frame[1632] = {0};
#define v4 ((_DWORD *)(frame + 32))
#define v5 ((_DWORD *)(frame + 64))
#define v6 ((_BYTE *)(frame + 96))
  int v0; // edi
  int v1; // ebp
  int i; // esi




  v4[0] = -800;
  v4[2] = -51200;
  v4[1] = 0;
  v4[3] = 22;
  v4[4] = 6;
  LOBYTE(v4[5]) = 0;
  v4[6] = 0;
  v4[7] = 0;
  v5[7] = sub_403610;
  v5[0] = 16;
  v5[1] = 1;
  v5[2] = 150;
  v5[3] = 0;
  qmemcpy(v6, v4, 32);
  v0 = 0;
  v1 = sub_4128C0(v5);
  for ( i = 0; i < 720; i += 120 )
  {
    v4[2] = 5;
    v4[3] = 5;
    v4[4] = 5;
    v4[0] = v0;
    v4[1] = i;
    sub_403690(v4, v1);
    ++v0;
  }
  return v1;

  return 0;
}
#undef v4
#undef v5
#undef v6

int sub_403610(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // ecx
  int result; // eax
  int v3; // edx
  int v4; // eax
  int v5; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( v1 != 0 )
  {
    result = *(_DWORD *)(a1 + 8);
    if ( result <= 0 )
    {
      v3 = *(_DWORD *)(a1 + 36);
      v4 = v3 + *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 40) = v4;
      v4 >>= 6;
      *(_DWORD *)(a1 + 32) = v4;
      if ( v4 + 120 * v1 >= 429 )
      {
        if ( v3 > *(_DWORD *)(a1 + 44) )
        {
          sub_40AAE0(0);
          sub_401BC0(0);
        }
        v5 = *(_DWORD *)(a1 + 48);
        *(_DWORD *)(a1 + 36) = 0;
        *(_DWORD *)(a1 + 32) = 429 - 120 * v5;
        *(_DWORD *)(a1 + 40) = (429 - 120 * v5) << 6;
      }
      result = *(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 36);
      *(_DWORD *)(a1 + 36) = result;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;

  return 0;
}


int sub_403690(const void *a1, int a2)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v3 ((_DWORD *)(frame + 32))
#define v4 ((_BYTE *)(frame + 64))



  v3[1] = 0;
  v3[2] = 0;
  v3[7] = sub_4036F0;
  v3[0] = 16;
  v3[3] = a2;
  qmemcpy(v4, a1, 20);
  return sub_4128C0(v3);

  return 0;
}
#undef v3
#undef v4

int sub_4036F0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // esi
  int v2; // eax
  int *v3; // edi
  int v4; // edi
  int v5; // edi
  int *v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // esi
  int v11; // ebp
  int v12; // edi
  int v13; // eax

  v1 = *(_DWORD *)(a1 + 12) + 32;
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 12) + 52) != 1 || *(_DWORD *)(*(_DWORD *)(a1 + 12) + 48) - 1 != *(_DWORD *)(a1 + 32) )
  {
LABEL_9:
    v10 = *(_DWORD *)v1;
    v11 = 80 - *(_DWORD *)sub_40B5E0(0);
    v12 = v10 + 120 * *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0(0) + 8);
    v13 = sub_411780();
    return host_blit(41, v11, v12, 480, 120, 0, *(_DWORD *)(a1 + 36));
  }
  *(_DWORD *)(a1 + 4 * *(_DWORD *)(*(_DWORD *)(a1 + 12) + 56) + 40) -= *(_DWORD *)(*(_DWORD *)(a1 + 12) + 60);
  v2 = *(_DWORD *)(v1 + 24);
  *(_BYTE *)(v1 + 20) = 0;
  if ( *(int *)(a1 + 4 * v2 + 40) > 0 )
  {
    v7 = (int *)(sub_40B5E0(0) + 16);
    *v7 = (__int64)((double)*(int *)(sub_40B5E0(0) + 20) * ((double)*(int *)(v1 + 12) * 1.5) + (double)*v7);
    v8 = sub_40B5E0(0);
    if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v8 + 60) )
    {
      v9 = sub_40B5E0(0);
      *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v9 + 60);
    }
    goto LABEL_9;
  }
  --*(_DWORD *)(v1 + 16);
  *(_BYTE *)(a1 + 24) = 1;
  v3 = (int *)(sub_40B5E0(0) + 16);
  *v3 = (__int64)((double)(10 * *(_DWORD *)(sub_40B5E0(0) + 20)) * ((double)*(int *)(v1 + 12) * 1.5) * 100.0 + (double)*v3);
  v4 = sub_40B5E0(0);
  if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v4 + 60) )
  {
    v5 = sub_40B5E0(0);
    *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v5 + 60);
  }
  sub_4040B0(320, *(_DWORD *)v1 + 120 * *(_DWORD *)(a1 + 32));
  return sub_413610(7);

  return 0;
}


int sub_403870(int ignored)
{
  _Alignas(16) unsigned char frame[1624] = {0};
#define v1 ((_DWORD *)(frame + 32))
#define v2 ((_DWORD *)(frame + 56))
#define v3 ((_BYTE *)(frame + 88))




  LOBYTE(v1[5]) = 0;
  memset(&v2[1], 0, 12);
  v1[0] = 640;
  v1[1] = 180;
  v1[2] = 10240;
  v2[7] = sub_4038E0;
  v2[0] = 64;
  qmemcpy(v3, v1, 24);
  return sub_4128C0(v2);

  return 0;
}
#undef v1
#undef v2
#undef v3

int sub_4038E0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // eax
  int v2; // eax

  sub_4129B0(127);
  v1 = 15 * (*(_DWORD *)(a1 + 40) - 320) / 16 + 320;
  *(_DWORD *)(a1 + 40) = v1;
  v1 >>= 4;
  *(_DWORD *)(a1 + 32) = v1;
  if ( v1 != 20 || (unsigned __int8)sub_412180(9) == 0 )
  {
LABEL_5:
    if ( *(_BYTE *)(a1 + 52) == 0 )
      goto LABEL_8;
    goto LABEL_6;
  }
  if ( *(_BYTE *)(a1 + 52) == 0 )
  {
    *(_BYTE *)(a1 + 52) = 1;
    *(_DWORD *)(a1 + 48) = sub_40B350(0);
    goto LABEL_5;
  }
LABEL_6:
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 48) + 24) != 0 )
  {
    *(_BYTE *)(a1 + 24) = 1;
    *(_BYTE *)(sub_40B5E0(0) + 50) = 1;
  }
LABEL_8:
  v2 = sub_411780();
  return host_blit(40, *(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 36), 600, 120, 0, 0);

  return 0;
}


int sub_403980(int a1)
{
  _Alignas(16) unsigned char frame[1608] = {0};
#define v2 (*((int *)(frame + 32)))
#define v3 ((_DWORD *)(frame + 40))



  v3[10] = a1;
  LOBYTE(v2) = 1;
  v3[1] = 0;
  v3[2] = 0;
  v3[8] = 0;
  v3[7] = sub_4039D0;
  v3[0] = 32;
  v3[9] = v2;
  return sub_4128C0(v3);

  return 0;
}
#undef v2
#undef v3

int sub_4039D0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // ecx
  char result; // al
  int v3; // eax

  v1 = *(_DWORD *)(a1 + 32) + 1;
  *(_DWORD *)(a1 + 32) = v1;
  if ( v1 % 3 == 0 )
    *(_BYTE *)(a1 + 36) = *(_BYTE *)(a1 + 36) == 0;
  if ( v1 > 9 )
    *(_BYTE *)(a1 + 24) = 1;
  result = *(_BYTE *)(a1 + 36);
  if ( result != 0 )
  {
    v3 = sub_411780();
    return host_rect(0, 0, 640, 480, *(_DWORD *)(a1 + 40));
  }
  return result;

  return 0;
}


int sub_403A30(int ignored)
{
  _Alignas(16) unsigned char frame[1656] = {0};
#define v9 (*((int *)(frame + 32)))
#define v10 (*((int *)(frame + 36)))
#define v11 ((_BYTE *)(frame + 40))
#define v12 (*((int *)(frame + 52)))
#define v13 ((_DWORD *)(frame + 56))
#define v14 ((_DWORD *)(frame + 88))
#define v15 ((_BYTE *)(frame + 120))
  int v0; // ebp
  _DWORD *v1; // eax
  int i; // ecx
  int j; // ebx
  _DWORD *v4; // eax
  int k; // ecx
  _DWORD *v6; // eax
  int m; // ecx








  v13[0] = *(_DWORD *)(sub_40B5E0(0) + 8) - 12982;
  v13[2] = v13[0] << 6;
  v13[1] = 0;
  v13[3] = 5;
  v13[4] = 110;
  LOBYTE(v13[5]) = 0;
  v13[6] = 0;
  v13[7] = 0;
  v14[7] = sub_401530;
  v14[0] = 16;
  v14[1] = 2;
  v14[2] = 150;
  v14[3] = 0;
  qmemcpy(v15, v13, 32);
  v0 = sub_4128C0(v14);
  v1 = v11;
  for ( i = 3; i != 0; --i )
  {
    *v1++ = 20;
    v12 = 20;
    v10 = 0;
  }
  v9 = 0;
  sub_403B70(&v9, v0);
  for ( j = 108; j != 0; --j )
  {
    v4 = v11;
    for ( k = 3; k != 0; --k )
    {
      *v4++ = 1;
      v10 = 120;
    }
    v12 = 1;
    ++v9;
    sub_403B70(&v9, v0);
  }
  v6 = v11;
  for ( m = 3; m != 0; --m )
  {
    *v6++ = 10;
    v12 = 10;
    v10 = 240;
  }
  ++v9;
  sub_403B70(&v9, v0);
  return v0;

  return 0;
}
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15

int sub_403B70(const void *a1, int a2)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v3 ((_DWORD *)(frame + 32))
#define v4 ((_BYTE *)(frame + 64))



  v3[1] = 0;
  v3[2] = 0;
  v3[7] = sub_403BD0;
  v3[0] = 16;
  v3[3] = a2;
  qmemcpy(v4, a1, 24);
  return sub_4128C0(v3);

  return 0;
}
#undef v3
#undef v4

int sub_403BD0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // esi
  int v2; // eax
  int *v3; // edi
  int v4; // edi
  int v5; // edi
  int *v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // esi
  int v11; // ebp
  int v12; // edi
  int v13; // eax

  v1 = *(_DWORD *)(a1 + 12) + 32;
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 12) + 52) != 1 || *(_DWORD *)(*(_DWORD *)(a1 + 12) + 48) - 1 != *(_DWORD *)(a1 + 32) )
  {
LABEL_9:
    v10 = *(_DWORD *)v1;
    v11 = 80 - *(_DWORD *)sub_40B5E0(0);
    v12 = v10 + 118 * *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0(0) + 8);
    v13 = sub_411780();
    return host_blit(42, v11, v12, 480, 120, 0, *(_DWORD *)(a1 + 36));
  }
  *(_DWORD *)(a1 + 4 * *(_DWORD *)(*(_DWORD *)(a1 + 12) + 56) + 40) -= *(_DWORD *)(*(_DWORD *)(a1 + 12) + 60);
  v2 = *(_DWORD *)(v1 + 24);
  *(_BYTE *)(v1 + 20) = 0;
  if ( *(int *)(a1 + 4 * v2 + 40) > 0 )
  {
    v7 = (int *)(sub_40B5E0(0) + 16);
    *v7 = (__int64)((double)*(int *)(sub_40B5E0(0) + 20) * ((double)*(int *)(v1 + 12) * 1.5) + (double)*v7);
    v8 = sub_40B5E0(0);
    if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v8 + 60) )
    {
      v9 = sub_40B5E0(0);
      *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v9 + 60);
    }
    goto LABEL_9;
  }
  --*(_DWORD *)(v1 + 16);
  *(_BYTE *)(a1 + 24) = 1;
  v3 = (int *)(sub_40B5E0(0) + 16);
  *v3 = (__int64)((double)(200 * *(_DWORD *)(sub_40B5E0(0) + 20))
                * ((double)*(int *)(v1 + 12)
                 * 1.5)
                * (double)*(int *)(a1 + 52)
                + (double)*v3);
  v4 = sub_40B5E0(0);
  if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v4 + 60) )
  {
    v5 = sub_40B5E0(0);
    *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v5 + 60);
  }
  sub_4040B0(320, *(_DWORD *)v1 + 118 * *(_DWORD *)(a1 + 32));
  return sub_413610(7);

  return 0;
}


int sub_403D60(int ignored)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v1 ((_DWORD *)(frame + 32))


  v1[7] = sub_403DB0;
  v1[2] = 0;
  v1[3] = 0;
  v1[0] = 2;
  v1[1] = 4;
  v1[8] = 1800;
  return sub_4128C0(v1);

  return 0;
}
#undef v1

int sub_403DB0(int a1)
{
  _Alignas(16) unsigned char frame[1084] = {0};
#define v9 (*((int *)(frame + 32)))
#define v10 (*((int *)(frame + 36)))
#define v11 (*((int *)(frame + 36)))
#define v12 (*((int *)(frame + 40)))
#define v13 (*((int *)(frame + 40)))
#define v14 (*((int *)(frame + 44)))
#define v15 (*((int *)(frame + 44)))
#define v16 (*((int *)(frame + 48)))
  int v1; // eax
  bool v2; // zf
  signed int v3; // eax
  int *v4; // esi
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax









  v1 = *(_DWORD *)(a1 + 32);
  if ( v1 <= 0 )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = v1 - 1;
    v3 = rand() & 0x80000007;
    v2 = v3 == 0;
    if ( v3 < 0 )
      v2 = (((_BYTE)v3 - 1) | 0xFFFFFFF8) == -1;
    if ( v2 )
      sub_403E20(0);
  }
  v4 = (int *)sub_411780();
  v5 = *v4;
  v6 = sub_40B5E0(0);
  v7 = (_DWORD *)sub_40B5E0(0);
  return host_blit(50, 366 - *v7, v9, v11, v13, v15, v16);

  return 0;
}
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16

int sub_403E20(int ignored)
{
  _Alignas(16) unsigned char frame[1624] = {0};
#define v1 ((_QWORD *)(frame + 32))
#define v2 ((_DWORD *)(frame + 56))
#define v3 ((_BYTE *)(frame + 88))




  v1[0] = 0xB90000000B9LL;
  LODWORD(v1[1]) = rand() % 40 + 370;
  HIDWORD(v1[1]) = 16 * LODWORD(v1[1]);
  LODWORD(v1[2]) = -40 - rand() % 60;
  v2[7] = sub_403ED0;
  v2[0] = 4;
  memset(&v2[1], 0, 12);
  HIDWORD(v1[2]) = rand() % 40 - 20;
  qmemcpy(v3, v1, 24);
  return sub_4128C0(v2);

  return 0;
}
#undef v1
#undef v2
#undef v3

int sub_403ED0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // edx
  int v2; // eax
  int v3; // edi
  int v4; // esi
  int v5; // eax

  v1 = *(_DWORD *)(a1 + 48) + *(_DWORD *)(a1 + 36); 
  v2 = (*(_DWORD *)(a1 + 52) + *(_DWORD *)(a1 + 44)) >> 4; 
  *(_DWORD *)(a1 + 44) += *(_DWORD *)(a1 + 52); 
  *(_DWORD *)(a1 + 36) = v1; 
  *(_DWORD *)(a1 + 40) = v2; 
  *(_DWORD *)(a1 + 32) = v1 >> 4; 
  if ( *(_DWORD *)(a1 + 32) < *(_DWORD *)(sub_40B5E0(0) + 8) - 60 ) 
    *(_BYTE *)(a1 + 24) = 1; 
  v3 = *(_DWORD *)(a1 + 40) - *(_DWORD *)sub_40B5E0(0); 
  v4 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0(0) + 8); 
  v5 = sub_411780(); 
  return host_blit(51, v3, v4, 16, 12, 0, 0);

  return 0;
}


int sub_403F50(int ignored)
{
  _Alignas(16) unsigned char frame[1620] = {0};
#define v1 ((_DWORD *)(frame + 32))
#define v2 ((_DWORD *)(frame + 52))
#define v3 ((_BYTE *)(frame + 84))




  LOWORD(v1[2]) = 0;
  LOBYTE(v1[4]) = 0;
  v2[1] = 0;
  v2[3] = 0;
  v1[0] = -1027080192;
  v1[1] = 0;
  v2[7] = sub_403FC0;
  v2[0] = 32;
  v2[2] = 2;
  qmemcpy(v3, v1, 20);
  return sub_4128C0(v2);

  return 0;
}
#undef v1
#undef v2
#undef v3

int sub_403FC0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  char v1; // al
  double v2; // st7
  double v3; // st7
  int v4; // eax

  sub_4129B0(127); 
  v1 = *(_BYTE *)(a1 + 41); 
  *(float *)(a1 + 32) = *(float *)(a1 + 36) + *(float *)(a1 + 32); 
  v2 = *(float *)(a1 + 36) + 0.4f; 
  if ( v1 != 0 ) 
  {
    *(float *)(a1 + 36) = v2; 
    ++dword_41F670; 
  }
  else
  {
    *(float *)(a1 + 36) = v2; 
    if ( *(float *)(a1 + 32) > 190.0 ) 
    {
      if ( v2 < 3.0 ) 
      {
        *(_BYTE *)(a1 + 41) = 1; 
        *(_DWORD *)(a1 + 36) = 1094713344; 
      }
      v3 = -*(float *)(a1 + 36) * 0.5; 
      *(_DWORD *)(a1 + 32) = 1128136704; 
      *(_BYTE *)(a1 + 40) = 1; 
      *(float *)(a1 + 36) = v3; 
    }
  }
  if ( dword_41F670 != 60 ) 
  {
LABEL_10:
    if ( *(_BYTE *)(a1 + 48) == 0 ) 
      goto LABEL_13; 
    goto LABEL_11; 
  }
  if ( *(_BYTE *)(a1 + 48) == 0 ) 
  {
    *(_DWORD *)(a1 + 44) = sub_40B350(0); 
    dword_41F670 = 0; 
    *(_BYTE *)(a1 + 48) = 1; 
    goto LABEL_10; 
  }
LABEL_11:
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 44) + 24) != 0 ) 
    *(_BYTE *)(sub_40B5E0(0) + 40) = 1; 
LABEL_13:
  v4 = sub_411780(); 
  return host_blit(23, 210, (__int64)*(float *)(a1 + 32), 220, 100, 0, 0);

  return 0;
}


int sub_4040B0(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v3 ((_DWORD *)(frame + 32))


  v3[8] = a1;
  v3[7] = sub_404100;
  v3[0] = 16;
  memset(&v3[1], 0, 12);
  v3[9] = a2;
  v3[10] = 0;
  return sub_4128C0(v3);

  return 0;
}
#undef v3

int sub_404170(int a1, int a2, int a3)
{
  _Alignas(16) unsigned char frame[1632] = {0};
#define v4 ((_DWORD *)(frame + 32))
#define v5 ((_DWORD *)(frame + 64))
#define v6 ((_BYTE *)(frame + 96))




  v4[0] = a1;
  v4[1] = a2;
  v4[4] = 16 * a1;
  v4[5] = 16 * a2;
  v4[7] = a3;
  v4[2] = (a3 + 3) * (rand() % 128 - 64) / 3;
  v4[3] = (a3 + 3) * (-32 - rand() % 64) / 3;
  if ( a3 != 0 )
  {
    if ( a3 == 1 )
    {
      v4[6] = 30;
    }
    else if ( a3 == 2 )
    {
      v4[6] = 16;
    }
  }
  else
  {
    v4[6] = 50;
  }
  v5[0] = 16;
  v5[7] = sub_404270;
  memset(&v5[1], 0, 12);
  qmemcpy(v6, v4, 32);
  return sub_4128C0(v5);

  return 0;
}
#undef v4
#undef v5
#undef v6

int sub_404270(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // edx
  int v2; // edi
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int result; // eax

  v1 = *(_DWORD *)(a1 + 44); 
  v2 = *(_DWORD *)(a1 + 40) + *(_DWORD *)(a1 + 48); 
  v3 = (v1 + *(_DWORD *)(a1 + 52)) >> 4; 
  *(_DWORD *)(a1 + 52) += v1; 
  *(_DWORD *)(a1 + 48) = v2; 
  *(_DWORD *)(a1 + 32) = v2 >> 4; 
  *(_DWORD *)(a1 + 36) = v3; 
  *(_DWORD *)(a1 + 44) = v1 + 4; 
  v4 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0); 
  v5 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8); 
  v6 = sub_411780(); 
  result = host_blit(*(_DWORD *)(a1 + 60) + 13, v4, v5, *(_DWORD *)(a1 + 56), *(_DWORD *)(a1 + 56), 0, 0);
  if ( *(int *)(a1 + 36) > 608 || (result = *(_DWORD *)(a1 + 32)) < -64 || result > 704 ) 
    *(_BYTE *)(a1 + 24) = 1; 
  return result; 

  return 0;
}


int sub_404300(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v3 ((_DWORD *)(frame + 32))


  v3[8] = a1;
  v3[7] = sub_404350;
  v3[0] = 32;
  memset(&v3[1], 0, 12);
  v3[9] = a2;
  return sub_4128C0(v3);

  return 0;
}
#undef v3

int sub_404350(int a1)
{
  _Alignas(16) unsigned char frame[1092] = {0};
#define v25 (*((__int64 *)(frame + 32)))
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


  v1 = a1;
  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 36);
  if ( *(_BYTE *)(v3 + 24) != 0 )
  {
    *(_BYTE *)(sub_40B5E0(0) + 41) = 0;
    *(_DWORD *)(sub_40B5E0(0) + 64) = 0;
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v4 = *(_DWORD *)(v3 + 32) + 120 * *(_DWORD *)(v3 + 48);
    if ( v4 == 429 && *(_DWORD *)(v2 + 48) == 0 && *(int *)(v2 + 8) > 0 && *(int *)(v2 + 44) > 0 )
    {
      sub_4129F0(8);
      v5 = *(_DWORD *)(v2 + 44) - 1;
      *(_DWORD *)(v2 + 48) = 180;
      *(_DWORD *)(v2 + 44) = v5;
      *(_DWORD *)(v2 + 80) = 12;
      *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_4021D0;
      v6 = sub_40B5E0(0);
      if ( *(_DWORD *)(sub_40B5E0(0) + 20) > *(_DWORD *)(v6 + 24) )
      {
        v7 = sub_40B5E0(0);
        *(_DWORD *)(sub_40B5E0(0) + 24) = *(_DWORD *)(v7 + 20);
      }
      *(_DWORD *)(sub_40B5E0(0) + 20) = 0;
      v8 = *(float *)(v2 + 56) + 30.0;
      *(float *)(v2 + 56) = v8;
      if ( v8 > 100.0 )
        *(_DWORD *)(v2 + 56) = 1120403456;
      v9 = sub_40B5E0(0);
      *(_DWORD *)(v9 + 28) += 90;
      if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
        *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
      sub_413610(6);
      if ( *(int *)(v2 + 44) <= 0 )
        sub_403F50(0);
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
        v14 = sub_40B5E0(0);
        ++*(_DWORD *)(v14 + 20);
        if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
          *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
        if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
        {
          v16 = (_DWORD *)(sub_40B5E0(0) + 28);
          *v16 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
        }
        else
        {
          v15 = sub_40B5E0(0);
          *(_DWORD *)(v15 + 28) += 30;
        }
        if ( *(int *)(sub_40B5E0(0) + 28) <= 300 )
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
          v20 = sub_40B5E0(0);
          ++*(_DWORD *)(v20 + 20);
          if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
            *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
          if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
          {
            v22 = (_DWORD *)(sub_40B5E0(0) + 28);
            *v22 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
          }
          else
          {
            v21 = sub_40B5E0(0);
            *(_DWORD *)(v21 + 28) += 30;
          }
          if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
LABEL_33:
            *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
LABEL_34:
          sub_408C10(*(_DWORD *)(v2 + 32), *(_DWORD *)(v2 + 36) - 30);
          HIDWORD(v25) = *(_DWORD *)(v2 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8) - 30;
          LODWORD(v25) = *(_DWORD *)(v2 + 32) - 70;
          sub_403110((unsigned int)(v25), (int)((unsigned __int64)(v25) >> 32));
          sub_412970(127, 3);
          v17 = rand();
          sub_413610(v17 % 3);
        }
        break;
      case 7:
        if ( v4 > *(_DWORD *)(v2 + 36) + 50 )
        {
          *(_DWORD *)(v2 + 80) = 8;
          *(_DWORD *)(v2 + 48) = 0;
          *(_DWORD *)(*(_DWORD *)(v1 + 32) + 28) = sub_4024F0;
          *(_DWORD *)(v3 + 36) = -32 * *(_DWORD *)(v3 + 44);
          v23 = sub_40B5E0(0);
          if ( *(_DWORD *)(sub_40B5E0(0) + 20) > *(_DWORD *)(v23 + 24) )
          {
            v24 = sub_40B5E0(0);
            *(_DWORD *)(sub_40B5E0(0) + 24) = *(_DWORD *)(v24 + 20);
          }
          *(_DWORD *)(sub_40B5E0(0) + 20) = 0;
          sub_413610(5);
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
          sub_413610(5);
        }
        break;
      case 0xB:
        v10 = *(_DWORD *)(v2 + 36) + 80;
LABEL_36:
        if ( v4 > v10 && *(int *)(v3 + 36) > 0 )
LABEL_20:
          sub_4129B0(8);
        break;
      default:
        return 0;
    }
  }

  return 0;
}
#undef v25

int sub_404870(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v4 ((_DWORD *)(frame + 32))
  int v2; // ecx
  int result; // eax


  v2 = sub_40B5E0(0);
  result = 0;
  if ( *(_BYTE *)(v2 + 41) != 0 )
  {
    v4[7] = sub_4048D0;
    v4[0] = 32;
    memset(&v4[1], 0, 12);
    v4[8] = a1;
    v4[9] = a2;
    return sub_4128C0(v4);
  }
  return result;

  return 0;
}
#undef v4

int sub_4049A0(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1612] = {0};
#define v3 (*((int *)(frame + 32)))
#define v4 (*((int *)(frame + 40)))
#define v5 ((_DWORD *)(frame + 44))




  v5[8] = a1;
  memset(&v5[1], 0, 12);
  v5[10] = a2;
  v5[7] = sub_404A00;
  v5[0] = 32;
  v5[9] = v3;
  v5[11] = v4;
  return sub_4128C0(v5);

  return 0;
}
#undef v3
#undef v4
#undef v5

int sub_404A00(int a1)
{
  _Alignas(16) unsigned char frame[1092] = {0};
#define v26 (*((__int64 *)(frame + 32)))
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


  v1 = a1;
  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 40);
  if ( *(_BYTE *)(v3 + 24) != 0 )
  {
    *(_BYTE *)(sub_40B5E0(0) + 41) = 0;
    *(_DWORD *)(sub_40B5E0(0) + 64) = 0;
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
      sub_4129F0(8);
      v6 = *(_DWORD *)(v2 + 44) - 1;
      *(_DWORD *)(v2 + 48) = 180;
      *(_DWORD *)(v2 + 44) = v6;
      *(_DWORD *)(v2 + 80) = 12;
      *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_4021D0;
      v7 = sub_40B5E0(0);
      if ( *(_DWORD *)(sub_40B5E0(0) + 20) > *(_DWORD *)(v7 + 24) )
      {
        v8 = sub_40B5E0(0);
        *(_DWORD *)(sub_40B5E0(0) + 24) = *(_DWORD *)(v8 + 20);
      }
      *(_DWORD *)(sub_40B5E0(0) + 20) = 0;
      v9 = *(float *)(v2 + 56) + 30.0;
      *(float *)(v2 + 56) = v9;
      if ( v9 > 100.0 )
        *(_DWORD *)(v2 + 56) = 1120403456;
      v10 = sub_40B5E0(0);
      *(_DWORD *)(v10 + 28) += 90;
      if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
        *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
      sub_413610(6);
      if ( *(int *)(v2 + 44) <= 0 )
        sub_403F50(0);
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
        v15 = sub_40B5E0(0);
        ++*(_DWORD *)(v15 + 20);
        if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
          *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
        if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
        {
          v17 = (_DWORD *)(sub_40B5E0(0) + 28);
          *v17 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
        }
        else
        {
          v16 = sub_40B5E0(0);
          *(_DWORD *)(v16 + 28) += 30;
        }
        if ( *(int *)(sub_40B5E0(0) + 28) <= 300 )
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
          v21 = sub_40B5E0(0);
          ++*(_DWORD *)(v21 + 20);
          if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
            *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
          if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
          {
            v23 = (_DWORD *)(sub_40B5E0(0) + 28);
            *v23 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
          }
          else
          {
            v22 = sub_40B5E0(0);
            *(_DWORD *)(v22 + 28) += 30;
          }
          if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
LABEL_33:
            *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
LABEL_34:
          sub_408C10(*(_DWORD *)(v2 + 32), *(_DWORD *)(v2 + 36) - 30);
          HIDWORD(v26) = *(_DWORD *)(v2 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8) - 30;
          LODWORD(v26) = *(_DWORD *)(v2 + 32) - 70;
          sub_403110((unsigned int)(v26), (int)((unsigned __int64)(v26) >> 32));
          sub_412970(127, 3);
          v18 = rand();
          sub_413610(v18 % 3);
        }
        break;
      case 7:
        if ( v5 > *(_DWORD *)(v2 + 36) + 50 )
        {
          *(_DWORD *)(v2 + 80) = 8;
          *(_DWORD *)(v2 + 48) = 0;
          *(_DWORD *)(*(_DWORD *)(v1 + 32) + 28) = sub_4024F0;
          *(_DWORD *)(v3 + 36) = -32 * *(_DWORD *)(v3 + 44);
          v24 = sub_40B5E0(0);
          if ( *(_DWORD *)(sub_40B5E0(0) + 20) > *(_DWORD *)(v24 + 24) )
          {
            v25 = sub_40B5E0(0);
            *(_DWORD *)(sub_40B5E0(0) + 24) = *(_DWORD *)(v25 + 20);
          }
          *(_DWORD *)(sub_40B5E0(0) + 20) = 0;
          sub_413610(5);
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
          sub_413610(5);
        }
        break;
      case 0xB:
        v11 = *(_DWORD *)(v2 + 36) + 80;
LABEL_36:
        if ( v5 > v11 && *(int *)(v3 + 36) > 0 )
LABEL_20:
          sub_4129B0(8);
        break;
      default:
        return 0;
    }
  }

  return 0;
}
#undef v26

int sub_404F30(int a1, int a2, int a3)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v5 ((_DWORD *)(frame + 32))
  int v3; // ecx
  int result; // eax


  v3 = sub_40B5E0(0);
  result = 0;
  if ( *(_BYTE *)(v3 + 41) != 0 )
  {
    v5[7] = sub_404FB0;
    v5[0] = 32;
    memset(&v5[1], 0, 12);
    v5[8] = a1;
    v5[9] = a2;
    v5[10] = a3;
    v5[11] = 5;
    return sub_4128C0(v5);
  }
  return result;

  return 0;
}
#undef v5

int sub_404FB0(int a1)
{
  _Alignas(16) unsigned char frame[1080] = {0};
#define v7 (*((__int64 *)(frame + 32)))
  int v1; // edi
  int result; // eax
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  int v6; // eax


  v1 = *(_DWORD *)(a1 + 32);
  result = *(_DWORD *)(a1 + 40);
  if ( *(int *)(a1 + 44) > 0 )
  {
    if ( *(_BYTE *)(v1 + 24) != 0 )
    {
      *(_BYTE *)(a1 + 24) = 1;
    }
    else if ( *(_BYTE *)(result + 24) != 0 )
    {
      *(_BYTE *)(sub_40B5E0(0) + 41) = 0;
      result = sub_40B5E0(0);
      *(_DWORD *)(result + 64) = 0;
      *(_BYTE *)(a1 + 24) = 1;
    }
    else
    {
      v4 = *(_DWORD *)(result + 32) + 118 * *(_DWORD *)(result + 48) + 2;
      if ( *(_DWORD *)(v1 + 36) + 150 < v4 && *(_BYTE *)(result + 52) == 0 )
      {
        *(_BYTE *)(result + 52) = 1;
        *(_DWORD *)(result + 60) = 1;
        *(_DWORD *)(result + 56) = 1;
        --*(_DWORD *)(a1 + 44);
        v5 = sub_40B5E0(0);
        ++*(_DWORD *)(v5 + 20);
        v6 = rand();
        sub_413610(v6 % 3);
        if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
          *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
        HIDWORD(v7) = v4 - *(_DWORD *)(sub_40B5E0(0) + 8) - 30;
        LODWORD(v7) = 186;
        return sub_403110((unsigned int)(v7), (int)((unsigned __int64)(v7) >> 32));
      }
    }
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
    *(_BYTE *)(*(_DWORD *)(a1 + 32) + 24) = 1;
    *(_BYTE *)(*(_DWORD *)(a1 + 36) + 24) = 1;
    sub_403980(0xFFFFFF);
    v3 = *(_DWORD *)(v1 + 52);
    if ( v3 != 0 )
      *(_BYTE *)(v3 + 48) = 0;
    else
      sub_4129F0(127);
    result = *(_DWORD *)(sub_40B5E0(0) + 68);
    *(_DWORD *)(result + 48) = 0;
  }
  return result;

  return 0;
}
#undef v7

int sub_4050F0(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v3 ((_DWORD *)(frame + 32))


  v3[8] = a1;
  v3[7] = sub_405140;
  v3[0] = 16;
  memset(&v3[1], 0, 12);
  v3[9] = a2;
  return sub_4128C0(v3);

  return 0;
}
#undef v3

int sub_405140(int a1)
{
  _Alignas(16) unsigned char frame[1092] = {0};
#define v14 (*((__int64 *)(frame + 32)))
  int v1; // ecx
  int v2; // esi
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // edi
  unsigned int v6; // ebp
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // edi


  v1 = *(_DWORD *)(a1 + 36);
  v2 = *(_DWORD *)(a1 + 32) + 32;
  v3 = (_DWORD *)(*(_DWORD *)(v1 + 12) + 32);
  if ( *(_BYTE *)(v1 + 24) != 0 )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v4 = *(_DWORD *)(v1 + 32);
    v5 = *(_DWORD *)(v1 + 36) + *v3 + 440;
    if ( v4 < *(_DWORD *)v2 + 88 && v4 + 80 > *(_DWORD *)v2 + 40 )
    {
      v6 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 80) - 1;
      if ( v6 <= 0xD )
      {
        switch ( byte_405428[v6] )
        {
          case 0:
            if ( v5 <= *(_DWORD *)(*(_DWORD *)(a1 + 32) + 36) + 10 )
              return 0;
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 80) = 0;
            *(_BYTE *)(v1 + 48) = 1;
            *(_DWORD *)(v1 + 52) = 1;
            v7 = sub_40B5E0(0);
            ++*(_DWORD *)(v7 + 20);
            if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
              *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
            if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
            {
              v9 = (_DWORD *)(sub_40B5E0(0) + 28);
              *v9 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
            }
            else
            {
              v8 = sub_40B5E0(0);
              *(_DWORD *)(v8 + 28) += 30;
            }
            if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
              *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
            break;
          case 1:
            if ( v5 > *(_DWORD *)(*(_DWORD *)(a1 + 32) + 36) + 48 )
            {
              *(float *)(*(_DWORD *)(a1 + 32) + 68) = (double)*(int *)(*(_DWORD *)(v1 + 12) + 36) * 0.0078125 + 1.0;
              *(float *)(v2 + 32) = (float)(v5 - 47);
            }
            return 0;
          case 2:
            if ( *(float *)(*(_DWORD *)(a1 + 32) + 68) * 6.0 + (double)*(int *)(*(_DWORD *)(a1 + 32) + 36) >= (double)(*(_DWORD *)(v1 + 36) + *v3 + 440)
              && v5 <= *(_DWORD *)(*(_DWORD *)(a1 + 32) + 36) + 10 )
            {
              return 0;
            }
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 80) = 3;
            *(_BYTE *)(v1 + 48) = 1;
            *(_DWORD *)(v1 + 52) = 1;
            v11 = sub_40B5E0(0);
            ++*(_DWORD *)(v11 + 20);
            if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
              *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
            if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
            {
              v13 = (_DWORD *)(sub_40B5E0(0) + 28);
              *v13 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
            }
            else
            {
              v12 = sub_40B5E0(0);
              *(_DWORD *)(v12 + 28) += 30;
            }
            if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
              *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
            break;
          case 3:
            if ( v5 > *(_DWORD *)(*(_DWORD *)(a1 + 32) + 36) + 48 )
            {
              *(float *)(*(_DWORD *)(a1 + 32) + 68) = (double)*(int *)(*(_DWORD *)(v1 + 12) + 36) * 0.0078125;
              *(float *)(v2 + 32) = (float)(v5 - 48);
            }
            return 0;
          case 4:
            return 0;
          default:
            abort();
        }
        sub_408C10(*(_DWORD *)v2, *(_DWORD *)(v2 + 4) - 30);
        HIDWORD(v14) = *(_DWORD *)(v2 + 4) - *(_DWORD *)(sub_40B5E0(0) + 8) - 30;
        LODWORD(v14) = *(_DWORD *)v2 - 70;
        sub_403110((unsigned int)(v14), (int)((unsigned __int64)(v14) >> 32));
        sub_412970(127, 3);
        v10 = rand();
        sub_413610(v10 % 3);
      }
    }
  }

  return 0;
}
#undef v14

int sub_405440(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v3 ((_DWORD *)(frame + 32))


  v3[8] = a1;
  v3[7] = sub_405490;
  v3[0] = 32;
  memset(&v3[1], 0, 12);
  v3[9] = a2;
  return sub_4128C0(v3);

  return 0;
}
#undef v3

int sub_405490(int a1)
{
  _Alignas(16) unsigned char frame[1092] = {0};
#define v24 (*((__int64 *)(frame + 32)))
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
        sub_4129F0(8);
        --*(_DWORD *)(v1 + 44);
        *(_DWORD *)(v1 + 48) = 180;
        v6 = *(_DWORD *)(v2 + 64);
        *(_DWORD *)(v1 + 80) = 12;
        *(_DWORD *)(v1 + 40) = v6;
        *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_4021D0;
        v7 = sub_40B5E0(0);
        if ( *(_DWORD *)(sub_40B5E0(0) + 20) > *(_DWORD *)(v7 + 24) )
        {
          v8 = sub_40B5E0(0);
          *(_DWORD *)(sub_40B5E0(0) + 24) = *(_DWORD *)(v8 + 20);
        }
        *(_DWORD *)(sub_40B5E0(0) + 20) = 0;
        v9 = *(float *)(v1 + 56) + 30.0;
        *(float *)(v1 + 56) = v9;
        if ( v9 > 100.0 )
          *(_DWORD *)(v1 + 56) = 1120403456;
        v10 = sub_40B5E0(0);
        *(_DWORD *)(v10 + 28) += 90;
        if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
          *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
        sub_413610(6);
        *(_BYTE *)(v2 + 52) = 1;
        if ( *(int *)(v1 + 44) <= 0 )
          sub_403F50(0);
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
          v14 = sub_40B5E0(0);
          ++*(_DWORD *)(v14 + 20);
          if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
            *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
          if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
          {
            v16 = (_DWORD *)(sub_40B5E0(0) + 28);
            *v16 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
          }
          else
          {
            v15 = sub_40B5E0(0);
            *(_DWORD *)(v15 + 28) += 30;
          }
          if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
            *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
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
            v19 = sub_40B5E0(0);
            ++*(_DWORD *)(v19 + 20);
            if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
              *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
            if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
            {
              v21 = (_DWORD *)(sub_40B5E0(0) + 28);
              *v21 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
            }
            else
            {
              v20 = sub_40B5E0(0);
              *(_DWORD *)(v20 + 28) += 30;
            }
            if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
              *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
LABEL_35:
            sub_408C10(*(_DWORD *)(v1 + 32), *(_DWORD *)(v1 + 36) - 30);
            HIDWORD(v24) = *(_DWORD *)(v1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8) - 30;
            LODWORD(v24) = *(_DWORD *)(v1 + 32) - 70;
            sub_403110((unsigned int)(v24), (int)((unsigned __int64)(v24) >> 32));
            sub_412970(127, 3);
            v17 = rand();
            sub_413610(v17 % 3);
          }
          break;
        case 7:
          if ( v5 > *(_DWORD *)(v1 + 36) + 50 )
          {
            *(_DWORD *)(v1 + 80) = 8;
            *(_DWORD *)(v1 + 48) = 0;
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_4024F0;
            *(_DWORD *)(v2 + 44) = -32 * *(_DWORD *)(v2 + 48);
            v22 = sub_40B5E0(0);
            if ( *(_DWORD *)(sub_40B5E0(0) + 20) > *(_DWORD *)(v22 + 24) )
            {
              v23 = sub_40B5E0(0);
              *(_DWORD *)(sub_40B5E0(0) + 24) = *(_DWORD *)(v23 + 20);
            }
            *(_DWORD *)(sub_40B5E0(0) + 20) = 0;
            sub_413610(5);
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
            sub_413610(5);
          }
          break;
        case 0xB:
          v11 = v5 <= *(_DWORD *)(v1 + 36) + 80;
LABEL_37:
          if ( !v11 && *(int *)(v2 + 44) > 0 )
LABEL_21:
            sub_4129B0(8);
          break;
        default:
          return 0;
      }
    }
  }

  return 0;
}
#undef v24

int sub_405A00(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v4 ((_DWORD *)(frame + 32))
  int v2; // ecx
  int result; // eax


  v2 = sub_40B5E0(0);
  result = 0;
  if ( *(_BYTE *)(v2 + 41) != 0 )
  {
    v4[7] = sub_405A60;
    v4[0] = 32;
    memset(&v4[1], 0, 12);
    v4[8] = a1;
    v4[9] = a2;
    return sub_4128C0(v4);
  }
  return result;

  return 0;
}
#undef v4

int sub_405B10(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v3 ((_DWORD *)(frame + 32))


  v3[8] = a1;
  v3[7] = sub_405B60;
  v3[0] = 32;
  memset(&v3[1], 0, 12);
  v3[9] = a2;
  return sub_4128C0(v3);

  return 0;
}
#undef v3

int sub_405B60(int a1)
{
  _Alignas(16) unsigned char frame[1084] = {0};
#define v21 (*((__int64 *)(frame + 32)))
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
              v9 = sub_40B5E0(0);
              if ( *(_DWORD *)(sub_40B5E0(0) + 20) > *(_DWORD *)(v9 + 24) )
              {
                v10 = sub_40B5E0(0);
                *(_DWORD *)(sub_40B5E0(0) + 24) = *(_DWORD *)(v10 + 20);
              }
              *(_DWORD *)(sub_40B5E0(0) + 20) = 0;
              v11 = *(float *)(v2 + 24) + 30.0;
              *(float *)(v2 + 24) = v11;
              if ( v11 > 100.0 )
                *(_DWORD *)(v2 + 24) = 1120403456;
              v12 = sub_40B5E0(0);
              *(_DWORD *)(v12 + 28) += 90;
              if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
                *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
              sub_413610(13);
              if ( *(int *)(v2 + 12) <= 0 )
                sub_403F50(0);
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
          v15 = sub_40B5E0(0);
          ++*(_DWORD *)(v15 + 20);
          if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
            *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
          if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
          {
            v17 = (_DWORD *)(sub_40B5E0(0) + 28);
            *v17 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
          }
          else
          {
            v16 = sub_40B5E0(0);
            *(_DWORD *)(v16 + 28) += 30;
          }
          if ( *(int *)(sub_40B5E0(0) + 28) <= 300 )
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
          v18 = sub_40B5E0(0);
          ++*(_DWORD *)(v18 + 20);
          if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
            *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
          if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
          {
            v20 = (_DWORD *)(sub_40B5E0(0) + 28);
            *v20 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
          }
          else
          {
            v19 = sub_40B5E0(0);
            *(_DWORD *)(v19 + 28) += 30;
          }
          if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
LABEL_49:
            *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
LABEL_50:
          HIDWORD(v21) = *(_DWORD *)(v2 + 4) - *(_DWORD *)(sub_40B5E0(0) + 8) - 30;
          LODWORD(v21) = *(_DWORD *)v2 - 70;
          sub_403110((unsigned int)(v21), (int)((unsigned __int64)(v21) >> 32));
          sub_412970(127, 3);
          sub_413610(1);
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
        return 0;
    }
  }

  return 0;
}
#undef v21

int sub_405F20(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v3 ((_DWORD *)(frame + 32))


  v3[8] = a1;
  v3[7] = sub_405F70;
  v3[0] = 16;
  memset(&v3[1], 0, 12);
  v3[9] = a2;
  return sub_4128C0(v3);

  return 0;
}
#undef v3

int sub_405F70(int a1)
{
  _Alignas(16) unsigned char frame[1092] = {0};
#define v38 (*((__int64 *)(frame + 32)))
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
            v10 = sub_40B5E0(0);
            if ( *(_DWORD *)(sub_40B5E0(0) + 20) > *(_DWORD *)(v10 + 24) )
            {
              v11 = sub_40B5E0(0);
              *(_DWORD *)(sub_40B5E0(0) + 24) = *(_DWORD *)(v11 + 20);
            }
            *(_DWORD *)(sub_40B5E0(0) + 20) = 0;
            v12 = *(float *)(v3 + 24) + 30.0;
            *(float *)(v3 + 24) = v12;
            if ( v12 > 100.0 )
              *(_DWORD *)(v3 + 24) = 1120403456;
            v13 = sub_40B5E0(0);
            *(_DWORD *)(v13 + 28) += 90;
            if ( *(int *)(sub_40B5E0(0) + 28) <= 300 )
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
            v25 = sub_40B5E0(0);
            ++*(_DWORD *)(v25 + 20);
            if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
              *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
            if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
            {
              v27 = (_DWORD *)(sub_40B5E0(0) + 28);
              *v27 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
            }
            else
            {
              v26 = sub_40B5E0(0);
              *(_DWORD *)(v26 + 28) += 30;
            }
            if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
              *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
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
            v17 = sub_40B5E0(0);
            if ( *(_DWORD *)(sub_40B5E0(0) + 20) > *(_DWORD *)(v17 + 24) )
            {
              v18 = sub_40B5E0(0);
              *(_DWORD *)(sub_40B5E0(0) + 24) = *(_DWORD *)(v18 + 20);
            }
            *(_DWORD *)(sub_40B5E0(0) + 20) = 0;
            v19 = *(float *)(v3 + 24) + 30.0;
            *(float *)(v3 + 24) = v19;
            if ( v19 > 100.0 )
              *(_DWORD *)(v3 + 24) = 1120403456;
            v20 = sub_40B5E0(0);
            *(_DWORD *)(v20 + 28) += 90;
            if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
LABEL_24:
              *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
LABEL_25:
            sub_413610(13);
            if ( *(int *)(v3 + 12) <= 0 )
              sub_403F50(0);
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
          v30 = sub_40B5E0(0);
          ++*(_DWORD *)(v30 + 20);
          if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
            *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
          if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
          {
            v32 = (_DWORD *)(sub_40B5E0(0) + 28);
            *v32 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
          }
          else
          {
            v31 = sub_40B5E0(0);
            *(_DWORD *)(v31 + 28) += 30;
          }
          if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
            *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
LABEL_43:
          sub_408C10(*(_DWORD *)v3, *(_DWORD *)(v3 + 4) - 30);
          HIDWORD(v38) = *(_DWORD *)(v3 + 4) - *(_DWORD *)(sub_40B5E0(0) + 8) - 30;
          LODWORD(v38) = *(_DWORD *)v3 - 70;
          sub_403110((unsigned int)(v38), (int)((unsigned __int64)(v38) >> 32));
          sub_412970(127, 3);
          v28 = rand();
          sub_413610(v28 % 3);
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
          v34 = sub_40B5E0(0);
          if ( *(_DWORD *)(sub_40B5E0(0) + 20) > *(_DWORD *)(v34 + 24) )
          {
            v35 = sub_40B5E0(0);
            *(_DWORD *)(sub_40B5E0(0) + 24) = *(_DWORD *)(v35 + 20);
          }
          *(_DWORD *)(sub_40B5E0(0) + 20) = 0;
          sub_413610(5);
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
          sub_413610(5);
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
        return 0;
    }
  }

  return 0;
}
#undef v38

int sub_406590(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v3 ((_DWORD *)(frame + 32))


  v3[8] = a1;
  v3[7] = sub_4065E0;
  v3[0] = 16;
  memset(&v3[1], 0, 12);
  v3[9] = a2;
  return sub_4128C0(v3);

  return 0;
}
#undef v3

int sub_4065E0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

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
            v7 = sub_40B5E0(0);
            if ( *(_DWORD *)(sub_40B5E0(0) + 20) > *(_DWORD *)(v7 + 24) )
            {
              v8 = sub_40B5E0(0);
              *(_DWORD *)(sub_40B5E0(0) + 24) = *(_DWORD *)(v8 + 20);
            }
            *(_DWORD *)(sub_40B5E0(0) + 20) = 0;
            v9 = *(float *)(v2 + 24) + 30.0;
            *(float *)(v2 + 24) = v9;
            if ( v9 > 100.0 )
              *(_DWORD *)(v2 + 24) = 1120403456;
            v10 = sub_40B5E0(0);
            *(_DWORD *)(v10 + 28) += 90;
            if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
              *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
            sub_413610(13);
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
            v14 = sub_40B5E0(0);
            if ( *(_DWORD *)(sub_40B5E0(0) + 20) > *(_DWORD *)(v14 + 24) )
            {
              v15 = sub_40B5E0(0);
              *(_DWORD *)(sub_40B5E0(0) + 24) = *(_DWORD *)(v15 + 20);
            }
            *(_DWORD *)(sub_40B5E0(0) + 20) = 0;
            v16 = *(float *)(v2 + 24) + 30.0;
            *(float *)(v2 + 24) = v16;
            if ( v16 > 100.0 )
              *(_DWORD *)(v2 + 24) = 1120403456;
            v17 = sub_40B5E0(0);
            *(_DWORD *)(v17 + 28) += 90;
            if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
              *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
            sub_413610(13);
            result = *(_DWORD *)(v2 + 12);
            if ( result <= 0 )
LABEL_28:
              result = sub_403F50(0);
          }
        }
        break;
      default:
        return result;
    }
  }
  return result;

  return 0;
}


int sub_406840(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v3 ((_DWORD *)(frame + 32))


  v3[8] = a1;
  v3[7] = sub_406890;
  v3[0] = 32;
  memset(&v3[1], 0, 12);
  v3[9] = a2;
  return sub_4128C0(v3);

  return 0;
}
#undef v3

int sub_406890(int a1)
{
  _Alignas(16) unsigned char frame[1092] = {0};
#define v26 (*((__int64 *)(frame + 32)))
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


  v1 = a1;
  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 36);
  if ( *(_BYTE *)(v3 + 24) != 0 )
  {
    *(_BYTE *)(sub_40B5E0(0) + 41) = 0;
    *(_DWORD *)(sub_40B5E0(0) + 64) = 0;
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
      sub_4129F0(8);
      v6 = *(_DWORD *)(v2 + 44) - 1;
      *(_DWORD *)(v2 + 48) = 180;
      *(_DWORD *)(v2 + 44) = v6;
      *(_DWORD *)(v2 + 80) = 12;
      *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_4021D0;
      v7 = sub_40B5E0(0);
      if ( *(_DWORD *)(sub_40B5E0(0) + 20) > *(_DWORD *)(v7 + 24) )
      {
        v8 = sub_40B5E0(0);
        *(_DWORD *)(sub_40B5E0(0) + 24) = *(_DWORD *)(v8 + 20);
      }
      *(_DWORD *)(sub_40B5E0(0) + 20) = 0;
      v9 = *(float *)(v2 + 56) + 30.0;
      *(float *)(v2 + 56) = v9;
      if ( v9 > 100.0 )
        *(_DWORD *)(v2 + 56) = 1120403456;
      v10 = sub_40B5E0(0);
      *(_DWORD *)(v10 + 28) += 90;
      if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
        *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
      sub_413610(6);
      if ( *(int *)(v2 + 44) <= 0 )
        sub_403F50(0);
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
        *(_BYTE *)(v3 + 56) = 1;
        *(_DWORD *)(v3 + 64) = 1;
        if ( *(int *)(v2 + 48) > 0 )
          *(_DWORD *)(v3 + 64) = 5;
        *(_DWORD *)(v2 + 48) = 0;
        v13 = *(_DWORD *)(v3 + 36);
        v14 = -5 * *(_DWORD *)(v3 + 44);
        *(_DWORD *)(v3 + 60) = *(_DWORD *)(v2 + 40);
        *(_DWORD *)(v3 + 36) = 2 * v14 + v13;
        v15 = sub_40B5E0(0);
        ++*(_DWORD *)(v15 + 20);
        if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
          *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
        if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
        {
          v17 = (_DWORD *)(sub_40B5E0(0) + 28);
          *v17 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
        }
        else
        {
          v16 = sub_40B5E0(0);
          *(_DWORD *)(v16 + 28) += 30;
        }
        if ( *(int *)(sub_40B5E0(0) + 28) <= 300 )
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
          *(_BYTE *)(v3 + 56) = 1;
          *(_DWORD *)(v3 + 64) = 1;
          if ( *(int *)(v2 + 48) > 0 )
            *(_DWORD *)(v3 + 64) = 5;
          *(_DWORD *)(v2 + 48) = 0;
          v19 = *(_DWORD *)(v3 + 36);
          v20 = -5 * *(_DWORD *)(v3 + 44);
          *(_DWORD *)(v3 + 60) = *(_DWORD *)(v2 + 40);
          *(_DWORD *)(v3 + 36) = 2 * v20 + v19;
          v21 = sub_40B5E0(0);
          ++*(_DWORD *)(v21 + 20);
          if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
            *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
          if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
          {
            v23 = (_DWORD *)(sub_40B5E0(0) + 28);
            *v23 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
          }
          else
          {
            v22 = sub_40B5E0(0);
            *(_DWORD *)(v22 + 28) += 30;
          }
          if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
LABEL_33:
            *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
LABEL_34:
          sub_408C10(*(_DWORD *)(v2 + 32), *(_DWORD *)(v2 + 36) - 30);
          HIDWORD(v26) = *(_DWORD *)(v2 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8) - 30;
          LODWORD(v26) = *(_DWORD *)(v2 + 32) - 70;
          sub_403110((unsigned int)(v26), (int)((unsigned __int64)(v26) >> 32));
          sub_412970(127, 3);
          v18 = rand();
          sub_413610(v18 % 3);
        }
        break;
      case 7:
        if ( v5 > *(_DWORD *)(v2 + 36) + 50 )
        {
          *(_DWORD *)(v2 + 80) = 8;
          *(_DWORD *)(v2 + 48) = 0;
          *(_DWORD *)(*(_DWORD *)(v1 + 32) + 28) = sub_4024F0;
          *(_DWORD *)(v3 + 36) = -32 * *(_DWORD *)(v3 + 44);
          v24 = sub_40B5E0(0);
          if ( *(_DWORD *)(sub_40B5E0(0) + 20) > *(_DWORD *)(v24 + 24) )
          {
            v25 = sub_40B5E0(0);
            *(_DWORD *)(sub_40B5E0(0) + 24) = *(_DWORD *)(v25 + 20);
          }
          *(_DWORD *)(sub_40B5E0(0) + 20) = 0;
          sub_413610(5);
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
          sub_413610(5);
        }
        break;
      case 0xB:
        v11 = *(_DWORD *)(v2 + 36) + 80;
LABEL_36:
        if ( v5 > v11 && *(int *)(v3 + 36) > 0 )
LABEL_20:
          sub_4129B0(8);
        break;
      default:
        return 0;
    }
  }

  return 0;
}
#undef v26

int sub_406DC0(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v4 ((_DWORD *)(frame + 32))
  int v2; // ecx
  int result; // eax


  v2 = sub_40B5E0(0);
  result = 0;
  if ( *(_BYTE *)(v2 + 41) != 0 )
  {
    v4[7] = sub_406E20;
    v4[0] = 32;
    memset(&v4[1], 0, 12);
    v4[8] = a1;
    v4[9] = a2;
    return sub_4128C0(v4);
  }
  return result;

  return 0;
}
#undef v4

int sub_406E20(int a1)
{
  _Alignas(16) unsigned char frame[1072] = {0};
#define v8 (*((__int64 *)(frame + 32)))
  int v1; // ecx
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax


  v1 = *(_DWORD *)(a1 + 32);
  v2 = *(_DWORD *)(a1 + 36);
  LOBYTE(v3) = *(_BYTE *)(v1 + 24);
  if ( (_BYTE)v3 != 0 )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else if ( *(_BYTE *)(v2 + 24) != 0 )
  {
    *(_BYTE *)(sub_40B5E0(0) + 41) = 0;
    v3 = sub_40B5E0(0);
    *(_DWORD *)(v3 + 64) = 0;
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v4 = *(_DWORD *)(v2 + 32) + 118 * *(_DWORD *)(v2 + 48) + 2;
    v3 = *(_DWORD *)(v1 + 36) + 150;
    if ( v3 < v4 )
    {
      LOBYTE(v3) = *(_BYTE *)(v2 + 56);
      if ( (_BYTE)v3 == 0 )
      {
        *(_BYTE *)(v2 + 56) = 1;
        *(_DWORD *)(v2 + 64) = 5;
        *(_DWORD *)(v2 + 60) = *(_DWORD *)(*(_DWORD *)(sub_40B5E0(0) + 68) + 40);
        v5 = sub_40B5E0(0);
        ++*(_DWORD *)(v5 + 20);
        v6 = rand();
        sub_413610(v6 % 3);
        if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
          *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
        HIDWORD(v8) = v4 - *(_DWORD *)(sub_40B5E0(0) + 8) - 30;
        LODWORD(v8) = 186;
        LOBYTE(v3) = sub_403110((unsigned int)(v8), (int)((unsigned __int64)(v8) >> 32));
      }
    }
  }
  return v3;

  return 0;
}
#undef v8

int sub_406F00(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1612] = {0};
#define v3 (*((int *)(frame + 32)))
#define v4 (*((int *)(frame + 40)))
#define v5 ((_DWORD *)(frame + 44))




  v5[8] = a1;
  memset(&v5[1], 0, 12);
  v5[10] = a2;
  v5[7] = sub_406F60;
  v5[0] = 32;
  v5[9] = v3;
  v5[11] = v4;
  return sub_4128C0(v5);

  return 0;
}
#undef v3
#undef v4
#undef v5

int sub_406F60(int a1)
{
  _Alignas(16) unsigned char frame[1088] = {0};
#define v22 (*((__int64 *)(frame + 32)))
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


  v1 = *(_DWORD *)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 32);
  if ( *(_BYTE *)(v1 + 24) != 0 )
  {
    *(_BYTE *)(sub_40B5E0(0) + 41) = 0;
    *(_DWORD *)(sub_40B5E0(0) + 64) = 0;
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
          v13 = sub_40B5E0(0);
          ++*(_DWORD *)(v13 + 20);
          if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
            *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
          if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
          {
            v15 = (_DWORD *)(sub_40B5E0(0) + 28);
            *v15 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
          }
          else
          {
            v14 = sub_40B5E0(0);
            *(_DWORD *)(v14 + 28) += 30;
          }
          if ( *(int *)(sub_40B5E0(0) + 28) <= 300 )
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
            v17 = sub_40B5E0(0);
            ++*(_DWORD *)(v17 + 20);
            if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
              *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
            if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
            {
              v19 = (_DWORD *)(sub_40B5E0(0) + 28);
              *v19 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
            }
            else
            {
              v18 = sub_40B5E0(0);
              *(_DWORD *)(v18 + 28) += 30;
            }
            if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
LABEL_34:
              *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
LABEL_35:
            sub_408C10(*(_DWORD *)(v2 + 32), *(_DWORD *)(v2 + 36) - 30);
            HIDWORD(v22) = *(_DWORD *)(v2 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8) - 30;
            LODWORD(v22) = *(_DWORD *)(v2 + 32) - 70;
            sub_403110((unsigned int)(v22), (int)((unsigned __int64)(v22) >> 32));
            sub_412970(127, 3);
            v16 = rand();
            sub_413610(v16 % 3);
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
            v20 = sub_40B5E0(0);
            if ( *(_DWORD *)(sub_40B5E0(0) + 20) > *(_DWORD *)(v20 + 24) )
            {
              v21 = sub_40B5E0(0);
              *(_DWORD *)(sub_40B5E0(0) + 24) = *(_DWORD *)(v21 + 20);
            }
            *(_DWORD *)(sub_40B5E0(0) + 20) = 0;
            sub_413610(5);
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
            sub_413610(5);
          }
          break;
        case 0xB:
          v9 = *(_DWORD *)(v2 + 36) + 80;
LABEL_37:
          if ( v3 > v9 && *(int *)(v1 + 36) > 0 )
LABEL_21:
            sub_4129B0(8);
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
          return 0;
      }
    }
    else
    {
      sub_4129F0(8);
      v4 = *(_DWORD *)(v2 + 44) - 1;
      *(_DWORD *)(v2 + 48) = 180;
      *(_DWORD *)(v2 + 44) = v4;
      *(_DWORD *)(v2 + 80) = 12;
      *(_DWORD *)(*(_DWORD *)(a1 + 32) + 28) = sub_4021D0;
      v5 = sub_40B5E0(0);
      if ( *(_DWORD *)(sub_40B5E0(0) + 20) > *(_DWORD *)(v5 + 24) )
      {
        v6 = sub_40B5E0(0);
        *(_DWORD *)(sub_40B5E0(0) + 24) = *(_DWORD *)(v6 + 20);
      }
      *(_DWORD *)(sub_40B5E0(0) + 20) = 0;
      v7 = *(float *)(v2 + 56) + 30.0;
      *(float *)(v2 + 56) = v7;
      if ( v7 > 100.0 )
        *(_DWORD *)(v2 + 56) = 1120403456;
      v8 = sub_40B5E0(0);
      *(_DWORD *)(v8 + 28) += 90;
      if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
        *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
      sub_413610(6);
      if ( *(int *)(v2 + 44) <= 0 )
        sub_403F50(0);
    }
  }

  return 0;
}
#undef v22

int sub_4074A0(int a1, int a2, int a3)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v5 ((_DWORD *)(frame + 32))
  int v3; // ecx
  int result; // eax


  v3 = sub_40B5E0(0);
  result = 0;
  if ( *(_BYTE *)(v3 + 41) != 0 )
  {
    v5[7] = sub_407520;
    v5[0] = 32;
    memset(&v5[1], 0, 12);
    v5[8] = a1;
    v5[9] = a2;
    v5[10] = a3;
    v5[11] = 5;
    return sub_4128C0(v5);
  }
  return result;

  return 0;
}
#undef v5

int sub_407520(int a1)
{
  _Alignas(16) unsigned char frame[1076] = {0};
#define v6 (*((__int64 *)(frame + 32)))
  int v1; // edi
  int result; // eax
  int v3; // edi
  int v4; // eax
  int v5; // eax


  v1 = *(_DWORD *)(a1 + 32);
  result = *(_DWORD *)(a1 + 40);
  if ( *(int *)(a1 + 44) > 0 )
  {
    if ( *(_BYTE *)(v1 + 24) != 0 )
    {
      *(_BYTE *)(a1 + 24) = 1;
    }
    else if ( *(_BYTE *)(result + 24) != 0 )
    {
      *(_BYTE *)(sub_40B5E0(0) + 41) = 0;
      result = sub_40B5E0(0);
      *(_DWORD *)(result + 64) = 0;
      *(_BYTE *)(a1 + 24) = 1;
    }
    else if ( *(_DWORD *)(v1 + 36) + 150 < *(_DWORD *)(result + 32) + 468 && *(_BYTE *)(result + 52) == 0 )
    {
      *(_BYTE *)(result + 52) = 1;
      *(_DWORD *)(result + 56) = 1;
      --*(_DWORD *)(a1 + 44);
      v4 = sub_40B5E0(0);
      ++*(_DWORD *)(v4 + 20);
      v5 = rand();
      sub_413610(v5 % 3);
      if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
        *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
      HIDWORD(v6) = *(_DWORD *)(v1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8) + 150;
      LODWORD(v6) = *(_DWORD *)(v1 + 32) - 100;
      return sub_403110((unsigned int)(v6), (int)((unsigned __int64)(v6) >> 32));
    }
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
    *(_BYTE *)(*(_DWORD *)(a1 + 32) + 24) = 1;
    *(_BYTE *)(*(_DWORD *)(a1 + 36) + 24) = 1;
    sub_403980(0xFFFFFF);
    v3 = *(_DWORD *)(v1 + 52);
    if ( v3 != 0 )
      *(_BYTE *)(v3 + 48) = 0;
    else
      sub_4129F0(127);
    result = *(_DWORD *)(sub_40B5E0(0) + 68);
    *(_DWORD *)(result + 48) = 0;
  }
  return result;

  return 0;
}
#undef v6

int sub_407640(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v3 ((_DWORD *)(frame + 32))


  v3[8] = a1;
  v3[7] = sub_407690;
  v3[0] = 16;
  memset(&v3[1], 0, 12);
  v3[9] = a2;
  return sub_4128C0(v3);

  return 0;
}
#undef v3

int sub_407690(int a1)
{
  _Alignas(16) unsigned char frame[1092] = {0};
#define v14 (*((__int64 *)(frame + 32)))
  int v1; // ecx
  int v2; // esi
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // edi
  unsigned int v6; // ebp
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // edi


  v1 = *(_DWORD *)(a1 + 36);
  v2 = *(_DWORD *)(a1 + 32) + 32;
  v3 = (_DWORD *)(*(_DWORD *)(v1 + 12) + 32);
  if ( *(_BYTE *)(v1 + 24) != 0 )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v4 = *(_DWORD *)(v1 + 32);
    v5 = *(_DWORD *)(v1 + 36) + *v3 + 450;
    if ( v4 < *(_DWORD *)v2 + 88 && v4 + 80 > *(_DWORD *)v2 + 40 )
    {
      v6 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 80) - 1;
      if ( v6 <= 0xD )
      {
        switch ( byte_407974[v6] )
        {
          case 0:
            if ( v5 <= *(_DWORD *)(*(_DWORD *)(a1 + 32) + 36) + 10 )
              return 0;
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 80) = 0;
            *(_BYTE *)(v1 + 60) = 1;
            *(_DWORD *)(v1 + 64) = 1;
            v7 = sub_40B5E0(0);
            ++*(_DWORD *)(v7 + 20);
            if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
              *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
            if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
            {
              v9 = (_DWORD *)(sub_40B5E0(0) + 28);
              *v9 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
            }
            else
            {
              v8 = sub_40B5E0(0);
              *(_DWORD *)(v8 + 28) += 30;
            }
            if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
              *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
            break;
          case 1:
          case 3:
            if ( v5 > *(_DWORD *)(*(_DWORD *)(a1 + 32) + 36) + 48 )
            {
              *(float *)(*(_DWORD *)(a1 + 32) + 68) = (double)*(int *)(*(_DWORD *)(v1 + 12) + 36) * 0.0078125;
              *(float *)(v2 + 32) = (float)(v5 - 48);
            }
            return 0;
          case 2:
            if ( *(float *)(*(_DWORD *)(a1 + 32) + 68) * 6.0 + (double)*(int *)(*(_DWORD *)(a1 + 32) + 36) >= (double)(*(_DWORD *)(v1 + 36) + *v3 + 450)
              && v5 <= *(_DWORD *)(*(_DWORD *)(a1 + 32) + 36) + 10 )
            {
              return 0;
            }
            *(_DWORD *)(*(_DWORD *)(a1 + 32) + 80) = 3;
            *(_BYTE *)(v1 + 60) = 1;
            *(_DWORD *)(v1 + 64) = 1;
            v11 = sub_40B5E0(0);
            ++*(_DWORD *)(v11 + 20);
            if ( *(int *)(sub_40B5E0(0) + 20) > 999 )
              *(_DWORD *)(sub_40B5E0(0) + 20) = 999;
            if ( (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2 <= 30 )
            {
              v13 = (_DWORD *)(sub_40B5E0(0) + 28);
              *v13 += (*(_DWORD *)(sub_40B5E0(0) + 20) + 1) / 2;
            }
            else
            {
              v12 = sub_40B5E0(0);
              *(_DWORD *)(v12 + 28) += 30;
            }
            if ( *(int *)(sub_40B5E0(0) + 28) > 300 )
              *(_DWORD *)(sub_40B5E0(0) + 28) = 300;
            break;
          case 4:
            return 0;
          default:
            abort();
        }
        sub_408C10(*(_DWORD *)v2, *(_DWORD *)(v2 + 4) - 30);
        HIDWORD(v14) = *(_DWORD *)(v2 + 4) - *(_DWORD *)(sub_40B5E0(0) + 8) - 30;
        LODWORD(v14) = *(_DWORD *)v2 - 70;
        sub_403110((unsigned int)(v14), (int)((unsigned __int64)(v14) >> 32));
        sub_412970(127, 3);
        v10 = rand();
        sub_413610(v10 % 3);
      }
    }
  }

  return 0;
}
#undef v14

int sub_407990(unsigned int a1, int a2)
{
  _Alignas(16) unsigned char frame[1636] = {0};
#define v4 (*((int *)(frame + 32)))
#define v5 ((_QWORD *)(frame + 44))
#define v6 ((_DWORD *)(frame + 68))
#define v7 ((_BYTE *)(frame + 100))
  int v2; // eax





  v5[0] = a1;
  HIDWORD(v5[1]) = 0;
  LOBYTE(v5[2]) = 0;
  HIDWORD(v5[2]) = 0;
  v6[1] = 0;
  v6[2] = 0;
  LODWORD(v5[1]) = 6;
  v6[7] = sub_407A20;
  v6[0] = 8;
  v6[3] = a2;
  qmemcpy(v7, v5, 24);
  v4 = sub_4128C0(v6);
  v2 = sub_40B5E0(0);
  return sub_4050F0(*(_DWORD *)(v2 + 68), v4);

  return 0;
}
#undef v4
#undef v5
#undef v6
#undef v7

int sub_407A20(int a1)
{
  _Alignas(16) unsigned char frame[1080] = {0};
#define v16 (*((int *)(frame + 32)))
#define v17 (*((int *)(frame + 32)))
#define v18 (*((int *)(frame + 32)))
#define v19 (*((int *)(frame + 32)))
#define v20 (*((int *)(frame + 32)))
#define v21 (*((int *)(frame + 32)))
  int v2; // ebx
  int v3; // edx
  int result; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int v8; // ebp
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax






  int v22; // [esp+14h] [ebp+4h]

  v2 = *(_DWORD *)(a1 + 12) + 32;
  v3 = *(_DWORD *)(a1 + 44) + 1;
  *(_DWORD *)(a1 + 44) = v3;
  if ( v3 < 80 )
    ++*(_DWORD *)(a1 + 36);
  if ( v3 <= 250 || (result = *(_DWORD *)(a1 + 36) - 1, *(_DWORD *)(a1 + 36) = result, result >= 0) )
  {
    if ( *(_BYTE *)(a1 + 48) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 52);
      *(_BYTE *)(a1 + 48) = 0;
      *(_DWORD *)(a1 + 40) = v5;
      *(_DWORD *)(a1 + 52) = 0;
    }
    v6 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
    v7 = *(_DWORD *)v2;
    v22 = *(_DWORD *)v2;
    v8 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8) + v7 + 340;
    if ( *(int *)(a1 + 40) <= 0
      || *(_BYTE *)(*(_DWORD *)(a1 + 12) + 24) != 0
      || *(_DWORD *)(v2 + 16) <= *(_DWORD *)(v2 + 24) && *(_BYTE *)(v2 + 20) != 0 )
    {
      *(_BYTE *)(a1 + 24) = 1;
      v16 = *(_DWORD *)(sub_40B5E0(0) + 8) + v8 + 50;
      v10 = (_DWORD *)sub_40B5E0(0);
      sub_404170(*v10 + v6 + 40, v16, 1);
      v17 = *(_DWORD *)(sub_40B5E0(0) + 8) + v8 + 40;
      v11 = (_DWORD *)sub_40B5E0(0);
      sub_404170(*v11 + v6 + 20, v17, 1);
      v18 = *(_DWORD *)(sub_40B5E0(0) + 8) + v8 + 30;
      v12 = (_DWORD *)sub_40B5E0(0);
      sub_404170(*v12 + v6 + 60, v18, 1);
      v19 = *(_DWORD *)(sub_40B5E0(0) + 8) + v8 + 10;
      v13 = (_DWORD *)sub_40B5E0(0);
      sub_404170(*v13 + v6 + 10, v19, 1);
      v20 = *(_DWORD *)(sub_40B5E0(0) + 8) + v8 + 80;
      v14 = (_DWORD *)sub_40B5E0(0);
      sub_404170(*v14 + v6 + 80, v20, 1);
      v21 = *(_DWORD *)(sub_40B5E0(0) + 8) + v8 + 70;
      v15 = (_DWORD *)sub_40B5E0(0);
      sub_404170(*v15 + v6 + 30, v21, 1);
      return sub_413610(7);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 44) == 210 )
      {
        sub_4093E0(*(_DWORD *)(a1 + 32) + 18, v22 + 470, 0);
        sub_413610(6);
      }
      if ( *(_DWORD *)(a1 + 44) == 215 )
      {
        sub_4093E0(*(_DWORD *)(a1 + 32) + 18, *(_DWORD *)v2 + 470, 0);
        sub_413610(6);
      }
      if ( *(_DWORD *)(a1 + 44) == 220 )
      {
        sub_4093E0(*(_DWORD *)(a1 + 32) + 18, *(_DWORD *)v2 + 470, 0);
        sub_413610(6);
      }
      v9 = sub_411780();
      return host_blit(57, v6, v8, 100, 100, 0, 0);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;

  return 0;
}
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21

int sub_407C50(int ignored)
{
  _Alignas(16) unsigned char frame[1612] = {0};
#define v5 (*((int *)(frame + 32)))
#define v6 (*((int *)(frame + 36)))
#define v7 (*((int *)(frame + 40)))
#define v8 ((_DWORD *)(frame + 44))
  int v0; // esi
  int v1; // ebx
  _DWORD *v2; // edi
  int v3; // eax





  v8[8] = 1800;
  v8[9] = v5;
  v0 = 0;
  v8[7] = sub_407CE0;
  v8[0] = 16;
  v8[1] = 4;
  v8[2] = 180;
  v8[3] = 0;
  v8[10] = v6;
  v8[11] = v7;
  v1 = sub_4128C0(v8);
  v2 = (_DWORD *)(v1 + 36);
  do
  {
    v3 = sub_407D40(v1, v0);
    *v2 = v3;
    ++v0;
    ++v2;
    *(_DWORD *)(v3 + 8) = 180;
  }
  while ( v0 < 3 );
  sub_403D60(0);
  return v1;

  return 0;
}
#undef v5
#undef v6
#undef v7
#undef v8

int sub_407D40(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1620] = {0};
#define v3 ((_DWORD *)(frame + 32))
#define v4 ((_DWORD *)(frame + 52))
#define v5 ((_BYTE *)(frame + 84))




  memset(v3, 0, 16);
  v3[4] = a2;
  v4[1] = 0;
  v4[2] = 0;
  v4[7] = sub_407DB0;
  v4[0] = 16;
  v4[3] = a1;
  qmemcpy(v5, v3, 20);
  return sub_4128C0(v4);

  return 0;
}
#undef v3
#undef v4
#undef v5

int sub_407E30(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1640] = {0};
#define v5 ((_DWORD *)(frame + 32))
#define v6 ((_DWORD *)(frame + 72))
#define v7 ((_BYTE *)(frame + 104))
  int v2; // esi
  int v3; // eax




  v5[3] = 0;
  v5[0] = *(_DWORD *)(sub_40B5E0(0) + 8) - 200;
  LOBYTE(v5[7]) = 0;
  v5[1] = 16 * v5[0];
  v5[8] = a2;
  LOBYTE(v5[5]) = 0;
  v5[9] = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = a1;
  v5[6] = 2;
  v5[2] = 40 * (3 * a2 + 3);
  v5[4] = 3;
  v6[7] = sub_407EF0;
  v6[0] = 16;
  qmemcpy(v7, v5, 40);
  v2 = sub_4128C0(v6);
  v3 = sub_40B5E0(0);
  sub_405440(*(_DWORD *)(v3 + 68), v2);
  return v2;

  return 0;
}
#undef v5
#undef v6
#undef v7

int sub_407EF0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v2; // ecx
  _DWORD *v3; // edi
  char v4; // bl
  int v5; // ebp
  int *v6; // ebp
  int v7; // ebp
  int v8; // ebp
  int *v9; // ebp
  int v10; // ebx
  int v11; // ebx
  int result; // eax
  int v13; // esi
  int v14; // edi
  int v15; // esi
  int v16; // eax
  bool v17; // [esp+Ch] [ebp+4h]

  v2 = *(_DWORD *)(a1 + 44);
  v3 = (_DWORD *)(*(_DWORD *)(a1 + 12) + 32);
  if ( v2 < 0 )
    *(_BYTE *)(a1 + 52) = 0;
  v17 = *(_DWORD *)(a1 + 32) == 309;
  v4 = 0;
  v5 = v2 + *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = v5;
  *(_DWORD *)(a1 + 32) = v5 >> 4;
  *(_DWORD *)(a1 + 44) = v2 + *(_DWORD *)(a1 + 48);
  if ( *(_BYTE *)(a1 + 60) != 0 )
  {
    v6 = (int *)(sub_40B5E0(0) + 16);
    *v6 = (__int64)((double)*(int *)(sub_40B5E0(0) + 20) * (double)*(int *)(a1 + 48) * 45.0 + (double)*v6);
    v7 = sub_40B5E0(0);
    if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v7 + 60) )
    {
      v8 = sub_40B5E0(0);
      *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v8 + 60);
    }
    if ( *(int *)(a1 + 56) <= 0 )
    {
      v9 = (int *)(sub_40B5E0(0) + 16);
      *v9 = (__int64)((double)*(int *)(sub_40B5E0(0) + 20) * (double)*(int *)(a1 + 48) * 405.0 + (double)*v9);
      v10 = sub_40B5E0(0);
      if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v10 + 60) )
      {
        v11 = sub_40B5E0(0);
        *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v11 + 60);
      }
      v4 = 1;
    }
  }
  if ( *(_DWORD *)(a1 + 32) + 120 >= 429 )
  {
    *(_DWORD *)(a1 + 36) = 4944;
    *(_DWORD *)(a1 + 32) = 309;
    if ( v17 && *(_BYTE *)(a1 + 52) == 0 )
      v4 = 1;
    *(_DWORD *)(a1 + 44) = 0;
  }
  if ( v4 == 1 )
  {
    *(_BYTE *)(a1 + 24) = 1;
    sub_413610(6);
    result = sub_4080A0(*(_DWORD *)(a1 + 40), *(_DWORD *)(a1 + 32) + 50);
    --v3[2];
    v13 = *(_DWORD *)(a1 + 68);
    if ( v13 != 0 )
    {
      v3[1] = v13;
    }
    else
    {
      v3[1] = 0;
      *v3 = 0;
    }
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 40) - *(_DWORD *)sub_40B5E0(0);
    v15 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0(0) + 8);
    v16 = sub_411780();
    return host_blit(44, v14, v15, 160, 120, 0, 0);
  }
  return result;

  return 0;
}


int sub_4080A0(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v3 ((_DWORD *)(frame + 32))


  v3[8] = a1;
  v3[7] = sub_4080F0;
  v3[0] = 16;
  memset(&v3[1], 0, 12);
  v3[9] = a2;
  v3[10] = 0;
  return sub_4128C0(v3);

  return 0;
}
#undef v3

int sub_408160(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v3 ((_DWORD *)(frame + 32))


  v3[8] = a1;
  v3[7] = sub_4081B0;
  v3[0] = 32;
  memset(&v3[1], 0, 12);
  v3[9] = a2;
  return sub_4128C0(v3);

  return 0;
}
#undef v3

int sub_4081B0(signed int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  signed int result; // eax
  int v2; // ebx
  _DWORD *v3; // edi
  int v4; // ebp
  int v5; // esi

  result = a1;
  v2 = *(_DWORD *)(a1 + 36);
  v3 = (_DWORD *)(*(_DWORD *)(a1 + 32) + 32);
  if ( *(_BYTE *)(v2 + 24) != 0 )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v4 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 44);
    v5 = *(_DWORD *)(v2 + 44);
    result = *(_DWORD *)(v2 + 32) + 34;
    if ( *v3 + 120 > result )
    {
      if ( (int)abs32(v4 - v5) > 174 )
        sub_413610(5);
      v3[1] = *(_DWORD *)(v2 + 36) - 1360;
      v3[3] = v5;
      *(_DWORD *)(v2 + 44) = v5 - (v5 - v4) / 6;
      return (unsigned int)((unsigned __int64)(715827883LL * (v5 - v4)) >> 32) >> 31;
    }
  }
  return result;

  return 0;
}


int sub_408230(unsigned int pair_lo, int pair_hi)
{
  _Alignas(16) unsigned char frame[1640] = {0};
#define v2 ((_DWORD *)(frame + 32))
#define v3 ((_DWORD *)(frame + 72))
#define v4 ((_BYTE *)(frame + 104))
  __int64 a1 = (unsigned __int64)(unsigned int)pair_hi << 32 | pair_lo;




  *(_QWORD *)&v2[2] = 0;
  memset(&v2[7], 0, 12);
  *(_QWORD *)v2 = a1;
  memset(&v3[1], 0, 12);
  *(_QWORD *)&v2[4] = 64;
  v2[6] = 128;
  v3[7] = sub_4082C0;
  v3[0] = 16;
  qmemcpy(v4, v2, 40);
  return sub_4128C0(v3);

  return 0;
}
#undef v2
#undef v3
#undef v4

int sub_4082C0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // eax
  int result; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // eax

  v1 = *(_DWORD *)(a1 + 68) + 1;
  *(_DWORD *)(a1 + 68) = v1;
  if ( v1 % 3 != 0 || (result = *(_DWORD *)(a1 + 64) + 1, *(_DWORD *)(a1 + 64) = result, result <= 2) )
  {
    v3 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
    v4 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
    v5 = sub_411780();
    return host_blit(9, v3, v4, 64, 64, *(_DWORD *)(a1 + 8 * *(_DWORD *)(a1 + 64) + 40), *(_DWORD *)(a1 + 8 * *(_DWORD *)(a1 + 64) + 44));
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;

  return 0;
}


int sub_408330(int ignored)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v2 ((_DWORD *)(frame + 32))
  int v0; // esi


  v2[8] = 0;
  v2[7] = sub_408390;
  v2[0] = 16;
  v2[1] = 3;
  v2[2] = 120;
  v2[3] = 0;
  v2[9] = 0;
  v0 = sub_4128C0(v2);
  sub_413610(14);
  return v0;

  return 0;
}
#undef v2

int sub_408390(int a1)
{
  _Alignas(16) unsigned char frame[1064] = {0};
#define v6 (*((int *)(frame + 32)))
  int result; // eax
  int v2; // edx
  int v3; // ecx
  int v4; // eax
  int v5; // et2


  result = *(_DWORD *)(a1 + 8);
  if ( result <= 0 )
  {
    v2 = *(_DWORD *)(a1 + 32) + 1;
    result = v2;
    *(_DWORD *)(a1 + 32) = v2;
    if ( v2 <= 1800 )
    {
      v3 = *(_DWORD *)(a1 + 36) + 1;
      *(_DWORD *)(a1 + 36) = v3;
      if ( v2 < 1700 && v3 > 40 )
      {
        v4 = rand();
        v5 = v4 % 40;
        result = v4 / 40;
        if ( v5 == 0 )
        {
          if ( rand() % 100 >= 40 )
            v6 = rand() % 3;
          else
            v6 = *(_DWORD *)(*(_DWORD *)(sub_40B5E0(0) + 68) + 40);
          sub_408440(v6);
          result = sub_403980(9698813);
          *(_DWORD *)(a1 + 36) = 0;
        }
      }
    }
    else
    {
      *(_BYTE *)(a1 + 24) = 1;
      *(_BYTE *)(sub_40B5E0(0) + 41) = 0;
      result = sub_40B5E0(0);
      *(_DWORD *)(result + 64) = 0;
    }
  }
  return result;

  return 0;
}
#undef v6

int sub_408440(int a1)
{
  _Alignas(16) unsigned char frame[1644] = {0};
#define v3 (*((int *)(frame + 32)))
#define v4 ((_DWORD *)(frame + 44))
#define v5 ((_DWORD *)(frame + 76))
#define v6 ((_BYTE *)(frame + 108))
  int v1; // eax





  v4[4] = a1;
  v4[0] = *(_DWORD *)(sub_40B5E0(0) + 8) - 800;
  v4[1] = 130 * a1 + 150;
  v4[2] = 25;
  LOBYTE(v4[3]) = 0;
  LOBYTE(v4[5]) = 0;
  v4[7] = 0;
  v4[6] = 0;
  v5[7] = sub_4084F0;
  v5[0] = 16;
  memset(&v5[1], 0, 12);
  qmemcpy(v6, v4, 32);
  v3 = sub_4128C0(v5);
  v1 = sub_40B5E0(0);
  sub_405B10(*(_DWORD *)(v1 + 68), v3);
  return sub_413610(6);

  return 0;
}
#undef v3
#undef v4
#undef v5
#undef v6

int sub_4084F0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int *v1; // edi
  int v2; // edi
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax

  if ( *(_BYTE *)(a1 + 44) != 0 )
  {
    if ( *(_BYTE *)(a1 + 52) != 0 )
      goto LABEL_7;
    v1 = (int *)(sub_40B5E0(0) + 16);
    *v1 = (__int64)((double)*(int *)(sub_40B5E0(0) + 20) * 3000.0 + (double)*v1);
    v2 = sub_40B5E0(0);
    if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v2 + 60) )
    {
      v3 = sub_40B5E0(0);
      *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v3 + 60);
    }
    *(_BYTE *)(a1 + 52) = 1;
  }
  if ( *(_BYTE *)(a1 + 52) == 0 )
  {
    *(_DWORD *)(a1 + 32) += *(_DWORD *)(a1 + 40);
    goto LABEL_11;
  }
LABEL_7:
  v4 = *(_DWORD *)(a1 + 60) + 1;
  *(_DWORD *)(a1 + 60) = v4;
  if ( v4 % 3 == 0 )
  {
    v5 = *(_DWORD *)(a1 + 56) + 1;
    *(_DWORD *)(a1 + 56) = v5;
    if ( v5 > 4 )
    {
      *(_BYTE *)(a1 + 24) = 1;
      sub_413610(12);
    }
  }
LABEL_11:
  if ( *(_DWORD *)(a1 + 32) + 300 >= 429 )
  {
    *(_DWORD *)(a1 + 32) = 129;
    *(_BYTE *)(a1 + 52) = 1;
  }
  v6 = *(_DWORD *)(a1 + 36) - *(_DWORD *)sub_40B5E0(0);
  v7 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v8 = sub_411780();
  return host_blit(43, v6, v7, 80, 320, 80 * *(_DWORD *)(a1 + 56), 0);

  return 0;
}


int sub_4085F0(int a1, int a2, char a3)
{
  _Alignas(16) unsigned char frame[1604] = {0};
#define v4 (*((int *)(frame + 32)))
#define v5 ((_DWORD *)(frame + 36))



  v5[9] = a2;
  LOBYTE(v4) = a3;
  v5[8] = 16 * a1;
  v5[7] = sub_408660;
  v5[0] = 4;
  memset(&v5[1], 0, 12);
  v5[10] = v4;
  return sub_4128C0(v5);

  return 0;
}
#undef v4
#undef v5

int sub_408660(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  char result; // al
  int v2; // edi
  int v3; // edi
  int v4; // esi
  int v5; // eax

  result = *(_BYTE *)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 32) - 4;
  *(_DWORD *)(a1 + 32) = v2;
  if ( result == 0 )
    *(_DWORD *)(a1 + 32) = v2 - 12;
  if ( *(int *)(a1 + 32) >= -2800 )
  {
    v3 = (*(int *)(a1 + 32) >> 4) - *(_DWORD *)sub_40B5E0(0);
    v4 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
    v5 = sub_411780();
    return host_blit(18, v3, v4, 175, 78, 0, 0);
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 10240;
    if ( result == 0 )
      *(_BYTE *)(a1 + 24) = 1;
  }
  return result;

  return 0;
}


int sub_4086E0(int a1)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v2 ((_DWORD *)(frame + 32))
#define v3 (*((char *)(frame + 64)))



  v2[7] = sub_408720;
  v2[0] = 32;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = a1;
  v3 = 0;
  return sub_4128C0(v2);

  return 0;
}
#undef v2
#undef v3

int sub_408720(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // edi
  int v2; // esi
  int v3; // ebx
  int v4; // eax
  int result; // eax

  v1 = 0;
  v2 = 170;
  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 44);
  do
  {
    v4 = sub_411780();
    if ( v1 >= v3 )
      result = host_blit(1, v2, 432, 48, 48, 48, 0);
    else
      result = host_blit(1, v2, 432, 48, 48, 0, 0);
    v2 += 48;
    ++v1;
  }
  while ( v2 < 314 );
  return result;

  return 0;
}


int sub_408780(int a1)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v2 ((_DWORD *)(frame + 32))


  v2[10] = *(_DWORD *)(sub_40B5E0(0) + 52);
  v2[7] = sub_4087F0;
  v2[0] = 64;
  memset(&v2[1], 0, 12);
  v2[8] = 640;
  v2[9] = 10240;
  v2[11] = a1;
  return sub_4128C0(v2);

  return 0;
}
#undef v2

int sub_4087F0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  bool v1; // zf
  int v2; // eax
  int v3; // eax
  int v4; // edx
  int v5; // eax

  v1 = *(_DWORD *)(a1 + 40) == *(_DWORD *)(sub_40B5E0(0) + 52) - 1;
  v2 = *(_DWORD *)(a1 + 36);
  if ( v1 )
  {
    v4 = 12 * v2 / 13;
    *(_DWORD *)(a1 + 36) = v4;
    *(_DWORD *)(a1 + 32) = v4 >> 4;
  }
  else
  {
    v3 = v2 - 160;
    *(_DWORD *)(a1 + 36) = v3;
    v3 >>= 4;
    *(_DWORD *)(a1 + 32) = v3;
    if ( v3 > 700 )
      *(_BYTE *)(a1 + 24) = 1;
  }
  v5 = sub_411780();
  return host_blit(52, *(_DWORD *)(a1 + 32), 390, 160, 50, 0, 50 * *(_DWORD *)(a1 + 44));

  return 0;
}


int sub_408880(int ignored)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v1 ((_DWORD *)(frame + 32))


  v1[8] = 0;
  v1[7] = sub_4088D0;
  v1[0] = 16;
  v1[1] = 3;
  v1[2] = 120;
  v1[3] = 0;
  v1[9] = 0;
  return sub_4128C0(v1);

  return 0;
}
#undef v1

int sub_4088D0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // edx
  int result; // eax
  int v3; // eax
  int v4; // et2

  v1 = *(_DWORD *)(a1 + 32) + 1;
  *(_DWORD *)(a1 + 32) = v1;
  if ( v1 <= 1200 )
  {
    if ( v1 == 200 )
      sub_40AA30(0);
    v3 = rand();
    v4 = v3 % 3;
    result = v3 / 3;
    if ( v4 == 0 )
      return sub_408920(0);
  }
  else
  {
    result = sub_40B5E0(0);
    *(_BYTE *)(result + 41) = 0;
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;

  return 0;
}


int sub_408920(int ignored)
{
  _Alignas(16) unsigned char frame[1640] = {0};
#define v1 ((_DWORD *)(frame + 32))
#define v2 ((_DWORD *)(frame + 72))
#define v3 ((_BYTE *)(frame + 104))




  v1[0] = *(_DWORD *)(sub_40B5E0(0) + 8) - 20;
  v1[1] = 32 * v1[0];
  v1[4] = rand() % 16 + 16;
  v1[2] = rand() % 840 - 100;
  v1[3] = 32 * v1[2];
  v1[5] = 2 * (rand() % 64) - 64;
  v1[9] = 0;
  v1[8] = 0;
  memset(&v2[1], 0, 12);
  v1[7] = v1[5] >= 0 ? 16 : 0;
  v2[7] = sub_4089F0;
  v2[0] = 32;
  qmemcpy(v3, v1, 40);
  return sub_4128C0(v2);

  return 0;
}
#undef v1
#undef v2
#undef v3

int sub_4089F0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // edi
  int v2; // ecx
  int v3; // edi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // eax

  v1 = *(_DWORD *)(a1 + 36);
  v2 = *(_DWORD *)(a1 + 52) + *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v2;
  v3 = *(_DWORD *)(a1 + 48) + v1;
  *(_DWORD *)(a1 + 40) = v2 >> 5;
  *(_DWORD *)(a1 + 36) = v3;
  *(_DWORD *)(a1 + 32) = v3 >> 5;
  *(_DWORD *)(a1 + 52) += rand() % 6 - 3;
  v4 = rand() % 6 - 2 + *(_DWORD *)(a1 + 48);
  v5 = *(_DWORD *)(a1 + 68) + 1;
  *(_DWORD *)(a1 + 68) = v5;
  *(_DWORD *)(a1 + 48) = v4;
  if ( v5 % 6 == 0 )
    *(_DWORD *)(a1 + 64) = (*(_DWORD *)(a1 + 64) + 1) % 4;
  v6 = *(_DWORD *)(a1 + 40);
  if ( v6 > 740 || v6 + 16 < -100 || *(int *)(a1 + 32) > 420 )
    *(_BYTE *)(a1 + 24) = 1;
  v7 = *(_DWORD *)(a1 + 40) - *(_DWORD *)sub_40B5E0(0);
  v8 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v9 = sub_411780();
  return host_blit(46, v7, v8, 16, 16, 16 * *(_DWORD *)(a1 + 64), *(_DWORD *)(a1 + 60));

  return 0;
}


int sub_408AE0(int ignored)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v1 ((_DWORD *)(frame + 32))


  v1[7] = sub_408B20;
  memset(&v1[1], 0, 12);
  v1[8] = 0;
  v1[0] = 32;
  return sub_4128C0(v1);

  return 0;
}
#undef v1

int sub_408B20(int a1)
{
  _Alignas(16) unsigned char frame[1064] = {0};
#define j (*((int *)(frame + 32)))
#define v14 (*((int *)(frame + 36)))
  int v1; // ebp
  int v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int i; // ecx
  int v7; // ecx
  int v8; // edi
  int v9; // ebx
  int v10; // esi
  int v11; // eax
  int result; // eax



  v1 = 7;
  v14 = 350;
  if ( *(_DWORD *)(sub_40B5E0(0) + 56) != 0 )
  {
    v1 = 8;
    v14 = 314;
  }
  v2 = a1;
  v3 = *(_DWORD *)(sub_40B5E0(0) + 16);
  v4 = 1;
  v5 = v3 - *(_DWORD *)(a1 + 32);
  for ( i = v1; i != 0; --i )
  {
    v4 *= 10;
    if ( v5 == v4 )
      --v5;
  }
  v7 = 1;
  for ( j = v1; j != 0; --j )
  {
    if ( v5 / v7 % 10 != 0 )
      *(_DWORD *)(a1 + 32) += v7;
    v7 *= 10;
  }
  v8 = 1;
  v9 = v14 + 36 * v1;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v2 + 32) / v8 % 10;
    v11 = sub_411780();
    result = host_blit(2, v9, 432, 38, 48, 38 * v10, 0);
    v9 -= 36;
    v8 *= 10;
    if ( --v1 == 0 )
      break;
    v2 = a1;
  }
  return result;

  return 0;
}
#undef j
#undef v14

int sub_408C10(unsigned int pair_lo, int pair_hi)
{
  _Alignas(16) unsigned char frame[1756] = {0};
#define v2 ((_DWORD *)(frame + 32))
#define v3 ((_DWORD *)(frame + 188))
#define v4 ((_BYTE *)(frame + 220))
  __int64 a1 = (unsigned __int64)(unsigned int)pair_hi << 32 | pair_lo;




  memset(&v2[2], 0, 12);
  v2[6] = 0;
  v2[8] = 0;
  v2[10] = 0;
  v2[12] = 0;
  v2[14] = 0;
  v2[16] = 0;
  v2[18] = 0;
  v2[20] = 0;
  v2[22] = 0;
  v2[24] = 0;
  v2[26] = 0;
  v2[28] = 0;
  v2[30] = 0;
  v2[32] = 0;
  v2[34] = 0;
  v2[36] = 0;
  v2[38] = 0;
  *(_QWORD *)v2 = a1;
  memset(&v3[1], 0, 12);
  v2[5] = 128;
  v2[7] = 256;
  v2[9] = 384;
  v2[11] = 512;
  v2[13] = 640;
  v2[15] = 768;
  v2[17] = 896;
  v2[19] = 1024;
  v2[21] = 1152;
  v2[23] = 1280;
  v2[25] = 1408;
  v2[27] = 1536;
  v2[29] = 1664;
  v2[31] = 1792;
  v2[33] = 1920;
  v2[35] = 2048;
  v2[37] = 2176;
  v3[7] = sub_408D80;
  v3[0] = 16;
  qmemcpy(v4, v2, 156);
  return sub_4128C0(v3);

  return 0;
}
#undef v2
#undef v3
#undef v4

int sub_408D80(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int result; // eax
  int v2; // edi
  int v3; // ebx
  int v4; // eax

  result = *(_DWORD *)(a1 + 184) + 1;
  *(_DWORD *)(a1 + 184) = result;
  if ( result <= 17 )
  {
    v2 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
    v3 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
    v4 = sub_411780();
    return host_blit(17, v2, v3, 128, 128, *(_DWORD *)(a1 + 8 * *(_DWORD *)(a1 + 184) + 40), *(_DWORD *)(a1 + 8 * *(_DWORD *)(a1 + 184) + 44));
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;

  return 0;
}


int sub_408DF0(int ignored)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v2 ((_DWORD *)(frame + 32))
  int v0; // esi


  *(_DWORD *)(sub_40B5E0(0) + 8) = -960;
  v0 = *(_DWORD *)(sub_40B5E0(0) + 8) + 480;
  *(_DWORD *)(sub_40B5E0(0) + 4) = v0;
  memset(&v2[1], 0, 12);
  v2[7] = sub_408E80;
  v2[0] = 32;
  v2[8] = -999292928;
  v2[9] = 1092616192;
  sub_4128C0(v2);
  return sub_412970(8, 6000);

  return 0;
}
#undef v2

int sub_408E80(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // edi
  int v2; // edi
  double v3; // st7
  int v4; // eax

  *(float *)(a1 + 32) = *(float *)(a1 + 36) + *(float *)(a1 + 32);
  *(float *)(a1 + 36) = *(float *)(a1 + 36) - 0.05f;
  if ( *(float *)(a1 + 32) > 0.0 )
  {
    *(_DWORD *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 24) = 1;
    sub_4129F0(8);
  }
  v1 = (__int64)*(float *)(a1 + 32);
  *(_DWORD *)(sub_40B5E0(0) + 8) = v1;
  v2 = *(_DWORD *)(sub_40B5E0(0) + 8) + 480;
  *(_DWORD *)(sub_40B5E0(0) + 4) = v2;
  v3 = *(float *)(a1 + 32);
  v4 = sub_411780();
  if ( v3 >= -200.0 )
    return host_blit(20, 220, 190, 200, 100, 0, 0);
  else
    return host_blit(19, 220, 190, 200, 100, 0, 0);

  return 0;
}


int sub_408F50(char *name) {
 FILE *f=fopen(name,"rb"); if(!f)return 0;
 int t[136]={0};t[0]=32;t[7]=(int)sub_4090C0;t[9]=1;
 int task=sub_4128C0(t),first=0,last=0,delay=0;char line[512];
 while(fgets(line,sizeof(line),f)){line[strcspn(line,"\r\n")]=0;delay+=45;
  if(!line[0])continue;
  int item=sub_409220(task,line,last?delay:40*(delay/45));if(last)*(_DWORD*)(last+92)=item;else first=item;last=item;
 }fclose(f);*(_DWORD*)(task+32)=first;return task;
}

int sub_4090C0(int a1)
{
  _Alignas(16) unsigned char frame[1060] = {0};
#define hdc (*((HDC *)(frame + 32)))
  int v1; // ebp
  int v2; // edi
  int v3; // esi
  HDC v4; // ebx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // kr04_4
  int v9; // eax
  HDC result; // eax


  v1 = *(_DWORD *)(a1 + 32);
  v2 = 0;
  if ( (unsigned __int8)sub_412150(9) != 0 )
    *(_DWORD *)(a1 + 36) = 8;
  else
    *(_DWORD *)(a1 + 36) = 1;
  v3 = sub_411780();
  if ( *(_BYTE *)(v3 + 1564) != 0 )
  {
    host_getdc(&hdc);
    SetBkMode(hdc, 1);
    SelectObject(hdc, *(HGDIOBJ *)(v3 + 1568));
    v4 = hdc;
  }
  else
  {
    v4 = NULL;
  }
  SetTextColor(v4, 0xFFFFFFu);
  hdc = NULL;
  while ( v1 != 0 )
  {
    v5 = *(_DWORD *)(v1 + 88);
    v6 = *(_DWORD *)(v1 + 84);
    hdc = (HDC)((char *)hdc + 1);
    if ( v5 >= v6 )
    {
      v7 = *(_DWORD *)(v1 + 76) - *(_DWORD *)(a1 + 36);
      *(_DWORD *)(v1 + 76) = v7;
      if ( v7 < -32 )
      {
        *(_BYTE *)(v1 + 24) = 1;
        if ( v2 != 0 )
          *(_DWORD *)(v2 + 92) = *(_DWORD *)(v1 + 92);
        else
          *(_DWORD *)(a1 + 32) = *(_DWORD *)(v1 + 92);
      }
      v8 = strlen((const char *)(v1 + 32)) + 1;
      TextOutA(
        v4,
        (int)(640 - 14 * (v8 - 1)) / 2,
        *(_DWORD *)(v1 + 76),
        (LPCSTR)(v1 + 32),
        v8 - 1);
      v2 = v1;
      v1 = *(_DWORD *)(v1 + 92);
    }
    else
    {
      v2 = v1;
      *(_DWORD *)(v1 + 88) = *(_DWORD *)(a1 + 36) + v5;
      v1 = *(_DWORD *)(v1 + 92);
    }
  }
  v9 = sub_411780();
  if ( *(_BYTE *)(v9 + 1564) != 0 )
    0;
  result = hdc;
  if ( hdc == NULL )
  {
    result = (HDC)sub_40B5E0(0);
    *((_BYTE *)result + 41) = 0;
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;

  return 0;
}
#undef hdc

int sub_409220(int a1, const char *a2, int a3)
{
  _Alignas(16) unsigned char frame[1664] = {0};
#define v4 ((_DWORD *)(frame + 32))
#define v5 ((_DWORD *)(frame + 96))
#define v6 ((_BYTE *)(frame + 128))




  v5[7] = nullsub_1;
  strcpy((char *)v4, a2);
  v5[1] = 0;
  v4[14] = 0;
  v4[13] = a3;
  v4[15] = 0;
  v5[2] = 0;
  v4[11] = 480;
  v5[0] = 32;
  v5[3] = a1;
  qmemcpy(v6, v4, 64);
  return sub_4128C0(v5);

  return 0;
}
#undef v4
#undef v5
#undef v6

int nullsub_1(int ignored)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  ;

  return 0;
}


int sub_4092D0(unsigned int pair_lo, int pair_hi, int a2)
{
  _Alignas(16) unsigned char frame[1640] = {0};
#define v4 (*((int *)(frame + 32)))
#define v5 ((_DWORD *)(frame + 44))
#define v6 ((_DWORD *)(frame + 72))
#define v7 ((_BYTE *)(frame + 104))
  __int64 a1 = (unsigned __int64)(unsigned int)pair_hi << 32 | pair_lo;
  int v2; // eax





  *(_QWORD *)v5 = a1;
  v5[2] = 4 - 8 * a2;
  v5[3] = 4;
  LOBYTE(v5[4]) = 0;
  v5[5] = 0;
  v6[7] = sub_409370;
  v6[0] = 8;
  memset(&v6[1], 0, 12);
  qmemcpy(v7, v5, 28);
  v4 = sub_4128C0(v6);
  v2 = sub_40B5E0(0);
  return sub_405F20(*(_DWORD *)(v2 + 68), v4);

  return 0;
}
#undef v4
#undef v5
#undef v6
#undef v7

int sub_409370(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // eax
  int v2; // edx
  int v3; // edi
  int v4; // ebx
  int v5; // eax

  LOBYTE(v1) = *(_BYTE *)(a1 + 48);
  v2 = *(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 32) += *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 36) = v2;
  if ( (_BYTE)v1 != 0
    || (v3 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0),
        v4 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8),
        v5 = sub_411780(),
        host_blit(49, v3, v4, 16, 16, 0, 0),
        (v1 = *(_DWORD *)(a1 + 36) + 16) > 429) )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return v1;

  return 0;
}


int sub_4093E0(unsigned int pair_lo, int pair_hi, int a2)
{
  _Alignas(16) unsigned char frame[1640] = {0};
#define v4 (*((int *)(frame + 32)))
#define v5 ((_DWORD *)(frame + 44))
#define v6 ((_DWORD *)(frame + 72))
#define v7 ((_BYTE *)(frame + 104))
  __int64 a1 = (unsigned __int64)(unsigned int)pair_hi << 32 | pair_lo;
  int v2; // eax





  *(_QWORD *)v5 = a1;
  LOBYTE(v5[4]) = 0;
  v5[5] = 0;
  v5[2] = 0;
  memset(&v6[1], 0, 12);
  v5[6] = a2;
  v6[7] = sub_409470;
  v6[0] = 8;
  qmemcpy(v7, v5, 28);
  v4 = sub_4128C0(v6);
  v2 = sub_40B5E0(0);
  return sub_406590(*(_DWORD *)(v2 + 68), v4);

  return 0;
}
#undef v4
#undef v5
#undef v6
#undef v7

int sub_409470(int a1)
{
  _Alignas(16) unsigned char frame[1072] = {0};
#define v8 (*((__int64 *)(frame + 32)))
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // eax


  v1 = *(_DWORD *)(a1 + 56);
  if ( v1 != 0 )
  {
    v2 = v1 - 1;
    if ( v2 != 0 )
    {
      if ( v2 == 1 )
        *(_DWORD *)(a1 + 32) += 16;
    }
    else
    {
      *(_DWORD *)(a1 + 32) -= 16;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 36) += 10;
  }
  LOBYTE(v3) = *(_BYTE *)(a1 + 48);
  *(_DWORD *)(a1 + 40) ^= 0x40u;
  if ( (_BYTE)v3 == 0 )
  {
    v4 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
    v5 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
    v6 = sub_411780();
    host_blit(58, v4, v5, 64, 64, *(_DWORD *)(a1 + 40), 0);
    if ( *(_DWORD *)(a1 + 36) + 32 > 429 && *(_DWORD *)(a1 + 56) == 0 )
    {
      *(_BYTE *)(a1 + 24) = 1;
      HIDWORD(v8) = 397;
      LODWORD(v8) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 36) = 397;
      sub_4093E0((unsigned int)(v8), (int)((unsigned __int64)(v8) >> 32), 1);
      LOBYTE(v3) = sub_4093E0((unsigned int)(*(_QWORD *)(a1 + 32)), (int)((unsigned __int64)(*(_QWORD *)(a1 + 32)) >> 32), 2);
      return v3;
    }
    v3 = *(_DWORD *)(a1 + 32);
    if ( v3 >= -64 && v3 <= 704 )
      return v3;
  }
  *(_BYTE *)(a1 + 24) = 1;
  return v3;

  return 0;
}
#undef v8

int sub_409540(int ignored)
{
  _Alignas(16) unsigned char frame[1632] = {0};
#define v1 ((_DWORD *)(frame + 32))
#define v2 ((_DWORD *)(frame + 64))
#define v3 ((_BYTE *)(frame + 96))




  v1[1] = 0;
  v1[3] = 5;
  LOBYTE(v1[5]) = 0;
  v1[6] = 0;
  v1[7] = 0;
  v2[1] = 5;
  v2[2] = 0;
  v2[3] = 0;
  v1[0] = -960;
  v1[2] = -61440;
  v1[4] = 50;
  v2[7] = sub_4095C0;
  v2[0] = 16;
  qmemcpy(v3, v1, 32);
  return sub_4128C0(v2);

  return 0;
}
#undef v1
#undef v2
#undef v3

int sub_4095C0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // ecx
  int v2; // ebp
  int v3; // eax
  int v4; // ebp
  int v5; // eax
  int v6; // edx
  _DWORD *v7; // edi
  int v8; // edi
  int v9; // edi
  _DWORD *v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // esi
  int *v14; // edi
  int v15; // ebp
  _DWORD *v16; // eax

  if ( *(int *)(a1 + 8) <= 0 )
  {
    v1 = *(_DWORD *)(a1 + 36);
    v2 = v1 + *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v2;
    *(_DWORD *)(a1 + 32) = v2 >> 6;
    if ( (v2 >> 6) + 468 >= 429 )
    {
      if ( v1 > *(_DWORD *)(a1 + 44) )
      {
        sub_40AAE0(0);
        sub_401BC0(0);
      }
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 32) = -39;
      *(_DWORD *)(a1 + 40) = -2496;
    }
    v3 = *(_DWORD *)(a1 + 44);
    v4 = v3 + *(_DWORD *)(a1 + 36);
    v5 = 10 * v3;
    *(_DWORD *)(a1 + 36) = v4;
    if ( v4 > v5 )
      *(_DWORD *)(a1 + 36) = v5;
  }
  if ( *(_BYTE *)(a1 + 52) == 1 )
  {
    v6 = *(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 48) = v6;
    if ( v6 > 0 )
    {
      v10 = (_DWORD *)(sub_40B5E0(0) + 16);
      *v10 += 100 * *(_DWORD *)(sub_40B5E0(0) + 20);
      v11 = sub_40B5E0(0);
      if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v11 + 60) )
      {
        v12 = sub_40B5E0(0);
        *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v12 + 60);
      }
    }
    else
    {
      v7 = (_DWORD *)(sub_40B5E0(0) + 16);
      *v7 += 15000 * (*(_DWORD *)(sub_40B5E0(0) + 20) + 100);
      v8 = sub_40B5E0(0);
      if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v8 + 60) )
      {
        v9 = sub_40B5E0(0);
        *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v9 + 60);
      }
      sub_4040B0(320, *(_DWORD *)(a1 + 32) + 380);
      sub_413610(7);
      *(_DWORD *)(a1 + 48) = 70;
      *(_DWORD *)(a1 + 28) = sub_4099D0;
      *(_DWORD *)(a1 + 44) = 30;
      *(_DWORD *)(a1 + 36) = 151;
    }
  }
  v13 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v14 = (int *)sub_411780();
  v15 = *v14;
  v16 = (_DWORD *)sub_40B5E0(0);
  return host_blit(45, -*v16, v13, 640, 480, 0, 0);

  return 0;
}


int sub_409760(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v2; // ebp
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int *v6; // ebp
  _DWORD *v7; // eax
  int result; // eax
  int v9; // edx
  _DWORD *v10; // edi
  int v11; // edi
  int v12; // edi
  _DWORD *v13; // edi
  int v14; // edi
  int v15; // ecx
  int v16; // edi
  int v17; // [esp+14h] [ebp+4h]

  if ( *(int *)(a1 + 8) <= 0 )
  {
    if ( *(_DWORD *)(a1 + 32) + 468 < 200 )
      *(_DWORD *)(a1 + 40) += 32;
    if ( *(_DWORD *)(a1 + 32) + 468 > 210 )
      *(_DWORD *)(a1 + 40) -= 32;
    v2 = *(_DWORD *)(a1 + 60);
    v3 = *(int *)(a1 + 40) >> 6;
    *(_DWORD *)(a1 + 32) = v3;
    *(_DWORD *)(a1 + 36) = 5;
    *(_DWORD *)(a1 + 60) = v2 + 1;
    if ( v3 + 468 >= 429 )
    {
      if ( *(int *)(a1 + 44) < 5 )
      {
        sub_40AAE0(0);
        sub_401BC0(0);
      }
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 32) = -39;
      *(_DWORD *)(a1 + 40) = -2496;
    }
    if ( *(_DWORD *)(a1 + 60) == 60 )
    {
      sub_40ACB0(100, 0, a1);
      sub_40ACB0(190, 0, a1);
      v4 = rand() % 2;
      sub_40ACB0(280, v4, a1);
      sub_40ACB0(370, 1, a1);
      sub_40ACB0(460, 1, a1);
    }
  }
  v5 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v6 = (int *)sub_411780();
  v17 = *v6;
  v7 = (_DWORD *)sub_40B5E0(0);
  result = host_blit(45, -*v7, v5, 640, 480, 0, 0);
  if ( *(_BYTE *)(a1 + 52) == 1 )
  {
    v9 = *(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 48) = v9;
    if ( v9 <= 0 )
    {
      *(_DWORD *)(a1 + 48) = 70;
      *(_DWORD *)(a1 + 28) = sub_409E70;
      *(_DWORD *)(a1 + 44) = 30;
      *(_DWORD *)(a1 + 36) = -50;
      *(_DWORD *)(a1 + 60) = 0;
      v10 = (_DWORD *)(sub_40B5E0(0) + 16);
      *v10 += 25000 * (*(_DWORD *)(sub_40B5E0(0) + 20) + 100);
      v11 = sub_40B5E0(0);
      if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v11 + 60) )
      {
        v12 = sub_40B5E0(0);
        *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v12 + 60);
      }
      sub_4040B0(320, *(_DWORD *)(a1 + 32) + 400);
      return sub_413610(7);
    }
    v13 = (_DWORD *)(sub_40B5E0(0) + 16);
    *v13 += 150 * *(_DWORD *)(sub_40B5E0(0) + 20);
    v14 = sub_40B5E0(0);
    v15 = *(_DWORD *)(sub_40B5E0(0) + 16);
    result = *(_DWORD *)(v14 + 60);
    if ( v15 > result )
    {
      v16 = sub_40B5E0(0);
      result = sub_40B5E0(0);
      *(_DWORD *)(result + 16) = *(_DWORD *)(v16 + 60);
    }
  }
  if ( *(int *)(a1 + 60) > 440 )
  {
    result = rand() % 2;
    if ( result != 0 )
    {
      *(_DWORD *)(a1 + 28) = sub_409BC0;
      *(_DWORD *)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 44) = 5;
    }
    else
    {
      *(_DWORD *)(a1 + 28) = sub_4099D0;
      *(_DWORD *)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 44) = 30;
      *(_DWORD *)(a1 + 36) = 151;
    }
  }
  return result;

  return 0;
}


int sub_4099D0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v2; // ecx
  int v3; // ebp
  int v4; // eax
  int v5; // edi
  int *v6; // ebp
  _DWORD *v7; // eax
  int result; // eax
  int v9; // edx
  _DWORD *v10; // edi
  int v11; // edi
  int v12; // edi
  _DWORD *v13; // edi
  int v14; // edi
  int v15; // ecx
  int v16; // edi
  int v17; // [esp+14h] [ebp+4h]

  if ( *(int *)(a1 + 8) <= 0 )
  {
    v2 = *(_DWORD *)(a1 + 36);
    v3 = v2 + *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v3;
    *(_DWORD *)(a1 + 32) = v3 >> 6;
    if ( (v3 >> 6) + 468 >= 429 )
    {
      if ( v2 > *(_DWORD *)(a1 + 44) )
      {
        sub_40AAE0(0);
        sub_401BC0(0);
      }
      v4 = *(_DWORD *)(a1 + 44);
      *(_DWORD *)(a1 + 32) = -39;
      *(_DWORD *)(a1 + 40) = -2496;
      *(_DWORD *)(a1 + 36) = -30 * v4;
    }
    *(_DWORD *)(a1 + 36) += *(_DWORD *)(a1 + 44);
  }
  v5 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v6 = (int *)sub_411780();
  v17 = *v6;
  v7 = (_DWORD *)sub_40B5E0(0);
  result = host_blit(45, -*v7, v5, 640, 480, 0, 0);
  if ( *(_BYTE *)(a1 + 52) == 1 )
  {
    v9 = *(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 48) = v9;
    if ( v9 <= 0 )
    {
      *(_DWORD *)(a1 + 48) = 70;
      *(_DWORD *)(a1 + 28) = sub_409E70;
      *(_DWORD *)(a1 + 44) = 30;
      *(_DWORD *)(a1 + 36) = -50;
      *(_DWORD *)(a1 + 60) = 0;
      v10 = (_DWORD *)(sub_40B5E0(0) + 16);
      *v10 += 25000 * (*(_DWORD *)(sub_40B5E0(0) + 20) + 100);
      v11 = sub_40B5E0(0);
      if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v11 + 60) )
      {
        v12 = sub_40B5E0(0);
        *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v12 + 60);
      }
      sub_4040B0(320, *(_DWORD *)(a1 + 32) + 400);
      return sub_413610(7);
    }
    v13 = (_DWORD *)(sub_40B5E0(0) + 16);
    *v13 += 150 * *(_DWORD *)(sub_40B5E0(0) + 20);
    v14 = sub_40B5E0(0);
    v15 = *(_DWORD *)(sub_40B5E0(0) + 16);
    result = *(_DWORD *)(v14 + 60);
    if ( v15 > result )
    {
      v16 = sub_40B5E0(0);
      result = sub_40B5E0(0);
      *(_DWORD *)(result + 16) = *(_DWORD *)(v16 + 60);
    }
  }
  if ( *(_DWORD *)(a1 + 36) == 0 )
  {
    result = rand() % 2;
    if ( result != 0 )
      *(_DWORD *)(a1 + 28) = sub_409BC0;
    else
      *(_DWORD *)(a1 + 28) = sub_409760;
    *(_DWORD *)(a1 + 60) = 0;
    *(_DWORD *)(a1 + 44) = 5;
  }
  return result;

  return 0;
}


int sub_409BC0(int a1)
{
  _Alignas(16) unsigned char frame[1072] = {0};
#define v25 (*((int *)(frame + 32)))
  int v2; // edi
  int v3; // ecx
  int v4; // edi
  bool v5; // cc
  int v6; // eax
  bool v7; // cc
  bool v8; // cc
  int v9; // edx
  int v10; // ecx
  bool v11; // cc
  int v12; // edi
  int *v13; // ebp
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // edx
  _DWORD *v17; // edi
  int v18; // edi
  int v19; // edi
  _DWORD *v20; // edi
  int v21; // edi
  int v22; // ecx
  int v23; // edi

  int v26; // [esp+10h] [ebp+4h]

  if ( *(int *)(a1 + 8) > 0 )
    goto LABEL_28;
  v2 = *(_DWORD *)(a1 + 60);
  v3 = *(_DWORD *)(a1 + 36) + *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = v3;
  v3 >>= 6;
  v4 = v2 + 1;
  *(_DWORD *)(a1 + 32) = v3;
  *(_DWORD *)(a1 + 60) = v4;
  if ( v3 < -1440 )
  {
    *(_DWORD *)(a1 + 32) = -1440;
    *(_DWORD *)(a1 + 40) = -92160;
    *(_DWORD *)(a1 + 36) = 0;
  }
  v5 = v4 <= 120;
  if ( v4 < 120 )
  {
    v5 = v4 <= 120;
    *(_DWORD *)(a1 + 36) -= *(_DWORD *)(a1 + 44);
  }
  if ( !v5 && v4 < 360 && v4 % 50 == 0 )
  {
    if ( rand() % 100 >= 40 )
      v25 = rand() % 3;
    else
      v25 = *(_DWORD *)(*(_DWORD *)(sub_40B5E0(0) + 68) + 40);
    sub_408440(v25);
    sub_403980(9698813);
  }
  v6 = *(_DWORD *)(a1 + 60);
  if ( v6 > 310 )
  {
    v7 = v6 <= 484;
    if ( v6 >= 484 )
      goto LABEL_17;
    *(_DWORD *)(a1 + 36) += *(_DWORD *)(a1 + 44);
  }
  v7 = v6 <= 484;
LABEL_17:
  if ( !v7 )
  {
    v8 = v6 <= 546;
    if ( v6 >= 546 )
      goto LABEL_22;
    v9 = *(_DWORD *)(a1 + 36);
    v10 = -8 * *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 36) = v10 + v9;
    if ( v10 + v9 < 0 )
      *(_DWORD *)(a1 + 36) = 0;
  }
  v8 = v6 <= 546;
LABEL_22:
  if ( !v8 )
  {
    v11 = v6 <= 596;
    if ( v6 >= 596 )
      goto LABEL_26;
    *(_DWORD *)(a1 + 36) -= *(_DWORD *)(a1 + 44);
  }
  v11 = v6 <= 596;
LABEL_26:
  if ( !v11 )
    *(_DWORD *)(a1 + 36) += 2 * *(_DWORD *)(a1 + 44);
LABEL_28:
  v12 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v13 = (int *)sub_411780();
  v26 = *v13;
  v14 = (_DWORD *)sub_40B5E0(0);
  host_blit(45, -*v14, v12, 640, 480, 0, 0);
  LOBYTE(v15) = *(_BYTE *)(a1 + 52);
  if ( (_BYTE)v15 == 1 )
  {
    v16 = *(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 48) = v16;
    if ( v16 <= 0 )
    {
      *(_DWORD *)(a1 + 48) = 70;
      *(_DWORD *)(a1 + 28) = sub_409E70;
      *(_DWORD *)(a1 + 44) = 30;
      *(_DWORD *)(a1 + 36) = -50;
      *(_DWORD *)(a1 + 60) = 0;
      v17 = (_DWORD *)(sub_40B5E0(0) + 16);
      *v17 += 25000 * (*(_DWORD *)(sub_40B5E0(0) + 20) + 100);
      v18 = sub_40B5E0(0);
      if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v18 + 60) )
      {
        v19 = sub_40B5E0(0);
        *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v19 + 60);
      }
      sub_4040B0(320, *(_DWORD *)(a1 + 32) + 400);
      LOBYTE(v15) = sub_413610(7);
      return v15;
    }
    v20 = (_DWORD *)(sub_40B5E0(0) + 16);
    *v20 += 150 * *(_DWORD *)(sub_40B5E0(0) + 20);
    v21 = sub_40B5E0(0);
    v22 = *(_DWORD *)(sub_40B5E0(0) + 16);
    v15 = *(_DWORD *)(v21 + 60);
    if ( v22 > v15 )
    {
      v23 = sub_40B5E0(0);
      v15 = sub_40B5E0(0);
      *(_DWORD *)(v15 + 16) = *(_DWORD *)(v23 + 60);
    }
  }
  if ( *(int *)(a1 + 60) > 596 && *(int *)(a1 + 36) > 0 )
  {
    v15 = rand() % 2;
    if ( v15 != 0 )
    {
      *(_DWORD *)(a1 + 28) = sub_409760;
      *(_DWORD *)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 44) = 5;
    }
    else
    {
      *(_DWORD *)(a1 + 28) = sub_4099D0;
      *(_DWORD *)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 44) = 30;
      *(_DWORD *)(a1 + 36) = 151;
    }
  }
  return v15;

  return 0;
}
#undef v25

int sub_409E70(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v2; // ecx
  int v3; // ebp
  int v4; // eax
  int v5; // edi
  int *v6; // ebp
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // edi
  int v11; // edi
  int v12; // edi
  _DWORD *v13; // edi
  int v14; // edi
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // et2
  int v20; // [esp+14h] [ebp+4h]

  if ( *(int *)(a1 + 8) <= 0 )
  {
    v2 = *(_DWORD *)(a1 + 36);
    v3 = v2 + *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v3;
    *(_DWORD *)(a1 + 32) = v3 >> 6;
    if ( (v3 >> 6) + 468 >= 429 )
    {
      if ( v2 > *(_DWORD *)(a1 + 44) )
      {
        sub_40AAE0(0);
        sub_401BC0(0);
      }
      v4 = *(_DWORD *)(a1 + 44);
      *(_DWORD *)(a1 + 32) = -39;
      *(_DWORD *)(a1 + 40) = -2496;
      *(_DWORD *)(a1 + 36) = -30 * v4;
    }
    *(_DWORD *)(a1 + 36) += *(_DWORD *)(a1 + 44);
  }
  v5 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v6 = (int *)sub_411780();
  v20 = *v6;
  v7 = (_DWORD *)sub_40B5E0(0);
  host_blit(45, -*v7, v5, 640, 480, 0, 0);
  LOBYTE(v8) = *(_BYTE *)(a1 + 52);
  if ( (_BYTE)v8 == 1 )
  {
    v9 = *(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 56);
    ++*(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 48) = v9;
    *(_BYTE *)(a1 + 52) = 0;
    if ( v9 <= 0 )
    {
      *(_DWORD *)(a1 + 28) = sub_40A850;
      *(_DWORD *)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 44) = 1;
      v10 = (_DWORD *)(sub_40B5E0(0) + 16);
      *v10 += 50000 * (*(_DWORD *)(sub_40B5E0(0) + 20) + 200);
      v11 = sub_40B5E0(0);
      if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v11 + 60) )
      {
        v12 = sub_40B5E0(0);
        *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v12 + 60);
      }
      sub_4040B0(320, *(_DWORD *)(a1 + 32) + 400);
      LOBYTE(v8) = sub_413610(7);
      return v8;
    }
    v13 = (_DWORD *)(sub_40B5E0(0) + 16);
    *v13 += 300 * *(_DWORD *)(sub_40B5E0(0) + 20);
    v14 = sub_40B5E0(0);
    v15 = *(_DWORD *)(sub_40B5E0(0) + 16);
    v8 = *(_DWORD *)(v14 + 60);
    if ( v15 > v8 )
    {
      v16 = sub_40B5E0(0);
      v8 = sub_40B5E0(0);
      *(_DWORD *)(v8 + 16) = *(_DWORD *)(v16 + 60);
    }
  }
  if ( *(_DWORD *)(a1 + 36) == 0 && *(int *)(a1 + 60) > 4 )
  {
    v17 = rand();
    v18 = v17 % 3;
    v8 = v17 / 3;
    if ( v18 != 0 )
    {
      v8 = rand() % 2;
      if ( v8 != 0 )
      {
        *(_DWORD *)(a1 + 60) = 0;
        *(_DWORD *)(a1 + 44) = 5;
        *(_DWORD *)(a1 + 36) = 0;
        *(_DWORD *)(a1 + 28) = sub_40A5F0;
      }
      else
      {
        *(_DWORD *)(a1 + 28) = sub_40A2E0;
        *(_DWORD *)(a1 + 60) = 0;
        *(_DWORD *)(a1 + 44) = 5;
        *(_DWORD *)(a1 + 36) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 44) = 30;
      *(_DWORD *)(a1 + 36) = -30;
      *(_DWORD *)(a1 + 28) = sub_40A0A0;
    }
  }
  return v8;

  return 0;
}


int sub_40A0A0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v2; // ecx
  int v3; // edi
  int v4; // eax
  int v5; // edi
  bool v6; // cc
  int v7; // eax
  int v8; // edi
  int *v9; // ebp
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // edi
  _DWORD *v13; // edi
  int v14; // edi
  int v15; // edi
  _DWORD *v16; // edi
  int v17; // edi
  int v18; // edx
  int v19; // edi
  int v20; // eax
  int v21; // et2
  int v23; // [esp+10h] [ebp+4h]

  if ( *(int *)(a1 + 8) <= 0 )
  {
    v2 = *(_DWORD *)(a1 + 36);
    v3 = *(_DWORD *)(a1 + 60);
    v4 = v2 + *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v4;
    v5 = v3 + 1;
    *(_DWORD *)(a1 + 32) = v4 >> 6;
    *(_DWORD *)(a1 + 60) = v5;
    v6 = v5 <= 32;
    if ( v5 < 32 )
    {
      v6 = v5 <= 32;
      *(_DWORD *)(a1 + 36) = v2 - *(_DWORD *)(a1 + 44);
    }
    if ( !v6 )
      *(_DWORD *)(a1 + 36) += *(_DWORD *)(a1 + 44);
    if ( *(_DWORD *)(a1 + 32) + 468 >= 429 )
    {
      if ( *(_DWORD *)(a1 + 36) > *(_DWORD *)(a1 + 44) )
      {
        sub_40AAE0(0);
        sub_401BC0(0);
      }
      v7 = *(_DWORD *)(a1 + 44);
      *(_DWORD *)(a1 + 32) = -39;
      *(_DWORD *)(a1 + 40) = -2496;
      *(_DWORD *)(a1 + 36) = -30 * v7;
    }
  }
  v8 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v9 = (int *)sub_411780();
  v23 = *v9;
  v10 = (_DWORD *)sub_40B5E0(0);
  host_blit(45, -*v10, v8, 640, 480, 0, 0);
  LOBYTE(v11) = *(_BYTE *)(a1 + 52);
  if ( (_BYTE)v11 == 1 )
  {
    v12 = *(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 48) = v12;
    if ( v12 <= 0 )
    {
      *(_DWORD *)(a1 + 28) = sub_40A850;
      *(_DWORD *)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 44) = 1;
      v13 = (_DWORD *)(sub_40B5E0(0) + 16);
      *v13 += 50000 * (*(_DWORD *)(sub_40B5E0(0) + 20) + 200);
      v14 = sub_40B5E0(0);
      if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v14 + 60) )
      {
        v15 = sub_40B5E0(0);
        *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v15 + 60);
      }
      sub_4040B0(320, *(_DWORD *)(a1 + 32) + 400);
      LOBYTE(v11) = sub_413610(7);
      return v11;
    }
    v16 = (_DWORD *)(sub_40B5E0(0) + 16);
    *v16 += 300 * *(_DWORD *)(sub_40B5E0(0) + 20);
    v17 = sub_40B5E0(0);
    v18 = *(_DWORD *)(sub_40B5E0(0) + 16);
    v11 = *(_DWORD *)(v17 + 60);
    if ( v18 > v11 )
    {
      v19 = sub_40B5E0(0);
      v11 = sub_40B5E0(0);
      *(_DWORD *)(v11 + 16) = *(_DWORD *)(v19 + 60);
    }
  }
  if ( *(_DWORD *)(a1 + 36) == 0 && *(int *)(a1 + 60) > 84 )
  {
    v20 = rand();
    v21 = v20 % 3;
    v11 = v20 / 3;
    if ( v21 != 0 )
    {
      v11 = rand() % 2;
      if ( v11 != 0 )
      {
        *(_DWORD *)(a1 + 60) = 0;
        *(_DWORD *)(a1 + 44) = 5;
        *(_DWORD *)(a1 + 36) = 0;
        *(_DWORD *)(a1 + 28) = sub_40A5F0;
      }
      else
      {
        *(_DWORD *)(a1 + 28) = sub_40A2E0;
        *(_DWORD *)(a1 + 60) = 0;
        *(_DWORD *)(a1 + 44) = 5;
        *(_DWORD *)(a1 + 36) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 28) = sub_409E70;
      *(_DWORD *)(a1 + 44) = 30;
      *(_DWORD *)(a1 + 36) = -50;
      *(_DWORD *)(a1 + 60) = 0;
    }
  }
  return v11;

  return 0;
}


int sub_40A2E0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v2; // edi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  bool v6; // cc
  int v7; // edi
  int *v8; // ebp
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // edi
  int v13; // edi
  int v14; // edi
  _DWORD *v15; // edi
  int v16; // edi
  int v17; // ecx
  int v18; // edi
  int v19; // eax
  int v20; // et2
  int v22; // [esp+10h] [ebp+4h]

  if ( *(int *)(a1 + 8) > 0 )
    goto LABEL_30;
  v2 = *(_DWORD *)(a1 + 60);
  v3 = *(_DWORD *)(a1 + 36) + *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = v3;
  v3 >>= 6;
  v4 = v2 + 1;
  *(_DWORD *)(a1 + 32) = v3;
  *(_DWORD *)(a1 + 60) = v4;
  if ( v3 < -1440 )
  {
    *(_DWORD *)(a1 + 32) = -1440;
    *(_DWORD *)(a1 + 40) = -92160;
    *(_DWORD *)(a1 + 36) = 0;
  }
  if ( v4 < 160 )
    *(_DWORD *)(a1 + 36) += -2 * *(_DWORD *)(a1 + 44);
  if ( v4 == 130 )
  {
    sub_408440(1);
    sub_403980(9698813);
  }
  if ( *(_DWORD *)(a1 + 60) == 140 )
    sub_408440(1);
  if ( *(_DWORD *)(a1 + 60) == 150 )
    sub_408440(1);
  if ( *(_DWORD *)(a1 + 60) == 145 )
  {
    sub_408440(0);
    sub_403980(9698813);
  }
  if ( *(_DWORD *)(a1 + 60) == 155 )
    sub_408440(0);
  if ( *(_DWORD *)(a1 + 60) == 165 )
    sub_408440(0);
  if ( *(_DWORD *)(a1 + 60) == 160 )
  {
    sub_408440(2);
    sub_403980(9698813);
  }
  if ( *(_DWORD *)(a1 + 60) == 170 )
    sub_408440(2);
  if ( *(_DWORD *)(a1 + 60) == 180 )
    sub_408440(2);
  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 > 180 )
  {
    v6 = v5 <= 250;
    if ( v5 >= 250 )
      goto LABEL_28;
    *(_DWORD *)(a1 + 36) += 4 * *(_DWORD *)(a1 + 44);
  }
  v6 = v5 <= 250;
LABEL_28:
  if ( !v6 )
    *(_DWORD *)(a1 + 36) += -8 * *(_DWORD *)(a1 + 44);
LABEL_30:
  v7 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v8 = (int *)sub_411780();
  v22 = *v8;
  v9 = (_DWORD *)sub_40B5E0(0);
  host_blit(45, -*v9, v7, 640, 480, 0, 0);
  LOBYTE(v10) = *(_BYTE *)(a1 + 52);
  if ( (_BYTE)v10 == 1 )
  {
    v11 = *(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 48) = v11;
    if ( v11 <= 0 )
    {
      *(_DWORD *)(a1 + 28) = sub_40A850;
      *(_DWORD *)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 44) = 1;
      v12 = (_DWORD *)(sub_40B5E0(0) + 16);
      *v12 += 50000 * (*(_DWORD *)(sub_40B5E0(0) + 20) + 200);
      v13 = sub_40B5E0(0);
      if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v13 + 60) )
      {
        v14 = sub_40B5E0(0);
        *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v14 + 60);
      }
      sub_4040B0(320, *(_DWORD *)(a1 + 32) + 400);
      LOBYTE(v10) = sub_413610(7);
      return v10;
    }
    v15 = (_DWORD *)(sub_40B5E0(0) + 16);
    *v15 += 300 * *(_DWORD *)(sub_40B5E0(0) + 20);
    v16 = sub_40B5E0(0);
    v17 = *(_DWORD *)(sub_40B5E0(0) + 16);
    v10 = *(_DWORD *)(v16 + 60);
    if ( v17 > v10 )
    {
      v18 = sub_40B5E0(0);
      v10 = sub_40B5E0(0);
      *(_DWORD *)(v10 + 16) = *(_DWORD *)(v18 + 60);
    }
  }
  if ( *(int *)(a1 + 60) > 250 && *(int *)(a1 + 36) <= 0 )
  {
    v19 = rand();
    v20 = v19 % 3;
    v10 = v19 / 3;
    if ( v20 != 0 )
    {
      v10 = rand() % 2;
      *(_DWORD *)(a1 + 60) = 0;
      if ( v10 != 0 )
      {
        *(_DWORD *)(a1 + 44) = 5;
        *(_DWORD *)(a1 + 36) = 0;
        *(_DWORD *)(a1 + 28) = sub_40A5F0;
      }
      else
      {
        *(_DWORD *)(a1 + 44) = 30;
        *(_DWORD *)(a1 + 36) = -30;
        *(_DWORD *)(a1 + 28) = sub_40A0A0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 28) = sub_409E70;
      *(_DWORD *)(a1 + 44) = 30;
      *(_DWORD *)(a1 + 36) = -50;
      *(_DWORD *)(a1 + 60) = 0;
    }
  }
  return v10;

  return 0;
}


int sub_40A5F0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v2; // ebp
  int v3; // eax
  int v4; // edi
  int *v5; // ebp
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // edi
  _DWORD *v9; // edi
  int v10; // edi
  int v11; // edi
  _DWORD *v12; // edi
  int v13; // edi
  int v14; // edx
  int v15; // edi
  int v16; // eax
  int v17; // et2
  int v19; // [esp+14h] [ebp+4h]

  if ( *(int *)(a1 + 8) <= 0 )
  {
    if ( *(_DWORD *)(a1 + 32) + 468 < 200 )
      *(_DWORD *)(a1 + 40) += 32;
    if ( *(_DWORD *)(a1 + 32) + 468 > 210 )
      *(_DWORD *)(a1 + 40) -= 32;
    v2 = *(_DWORD *)(a1 + 60);
    v3 = *(int *)(a1 + 40) >> 6;
    *(_DWORD *)(a1 + 32) = v3;
    *(_DWORD *)(a1 + 36) = 5;
    *(_DWORD *)(a1 + 60) = v2 + 1;
    if ( v3 + 468 >= 429 )
    {
      if ( *(int *)(a1 + 44) < 5 )
      {
        sub_40AAE0(0);
        sub_401BC0(0);
      }
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 32) = -39;
      *(_DWORD *)(a1 + 40) = -2496;
    }
    if ( *(_DWORD *)(a1 + 60) == 60 )
    {
      sub_407990(0x8Cu, a1);
      sub_407990(0x104u, a1);
      sub_407990(0x17Cu, a1);
    }
  }
  v4 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v5 = (int *)sub_411780();
  v19 = *v5;
  v6 = (_DWORD *)sub_40B5E0(0);
  host_blit(45, -*v6, v4, 640, 480, 0, 0);
  LOBYTE(v7) = *(_BYTE *)(a1 + 52);
  if ( (_BYTE)v7 == 1 )
  {
    v8 = *(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 48) = v8;
    if ( v8 <= 0 )
    {
      *(_DWORD *)(a1 + 28) = sub_40A850;
      *(_DWORD *)(a1 + 60) = 0;
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 44) = 1;
      v9 = (_DWORD *)(sub_40B5E0(0) + 16);
      *v9 += 50000 * (*(_DWORD *)(sub_40B5E0(0) + 20) + 200);
      v10 = sub_40B5E0(0);
      if ( *(_DWORD *)(sub_40B5E0(0) + 16) > *(_DWORD *)(v10 + 60) )
      {
        v11 = sub_40B5E0(0);
        *(_DWORD *)(sub_40B5E0(0) + 16) = *(_DWORD *)(v11 + 60);
      }
      sub_4040B0(320, *(_DWORD *)(a1 + 32) + 400);
      LOBYTE(v7) = sub_413610(7);
      return v7;
    }
    v12 = (_DWORD *)(sub_40B5E0(0) + 16);
    *v12 += 300 * *(_DWORD *)(sub_40B5E0(0) + 20);
    v13 = sub_40B5E0(0);
    v14 = *(_DWORD *)(sub_40B5E0(0) + 16);
    v7 = *(_DWORD *)(v13 + 60);
    if ( v14 > v7 )
    {
      v15 = sub_40B5E0(0);
      v7 = sub_40B5E0(0);
      *(_DWORD *)(v7 + 16) = *(_DWORD *)(v15 + 60);
    }
  }
  if ( *(int *)(a1 + 60) > 390 )
  {
    v16 = rand();
    v17 = v16 % 3;
    v7 = v16 / 3;
    if ( v17 != 0 )
    {
      v7 = rand() % 2;
      if ( v7 != 0 )
      {
        *(_DWORD *)(a1 + 60) = 0;
        *(_DWORD *)(a1 + 44) = 30;
        *(_DWORD *)(a1 + 36) = -30;
        *(_DWORD *)(a1 + 28) = sub_40A0A0;
      }
      else
      {
        *(_DWORD *)(a1 + 28) = sub_40A2E0;
        *(_DWORD *)(a1 + 60) = 0;
        *(_DWORD *)(a1 + 44) = 5;
        *(_DWORD *)(a1 + 36) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 28) = sub_409E70;
      *(_DWORD *)(a1 + 44) = 30;
      *(_DWORD *)(a1 + 36) = -50;
      *(_DWORD *)(a1 + 60) = 0;
    }
  }
  return v7;

  return 0;
}


int sub_40A850(int a1)
{
  _Alignas(16) unsigned char frame[1076] = {0};
#define v15 (*((int *)(frame + 32)))
#define v16 (*((int *)(frame + 32)))
#define v17 (*((int *)(frame + 32)))
#define v18 (*((int *)(frame + 32)))
#define v19 (*((int *)(frame + 36)))
#define v20 (*((int *)(frame + 36)))
#define v21 (*((int *)(frame + 36)))
#define v22 (*((int *)(frame + 36)))
  int v1; // ecx
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  int v5; // ebx
  int result; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int *v12; // edi
  int v13; // ebx
  _DWORD *v14; // eax









  if ( *(int *)(a1 + 8) > 0 )
    goto LABEL_8;
  v1 = *(_DWORD *)(a1 + 36);
  v2 = *(_DWORD *)(a1 + 60);
  v3 = v1 + *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = v3;
  v4 = v1 - *(_DWORD *)(a1 + 44);
  v5 = v2 + 1;
  *(_DWORD *)(a1 + 32) = v3 >> 6;
  *(_DWORD *)(a1 + 60) = v5;
  *(_DWORD *)(a1 + 36) = v4;
  if ( v4 < -200 )
    *(_DWORD *)(a1 + 36) = -200;
  result = v5 / 40;
  if ( v5 % 40 == 0 )
  {
    sub_4040B0(320, *(_DWORD *)(a1 + 32) + 400);
    sub_413610(7);
    v19 = rand() % 2;
    v15 = *(_DWORD *)(a1 + 32) - rand() % 200 + 380;
    v7 = rand();
    sub_40AFA0(v7 % 480 + 100, v15, v19);
    v20 = rand() % 2;
    v16 = *(_DWORD *)(a1 + 32) - rand() % 200 + 380;
    v8 = rand();
    sub_40AFA0(v8 % 480 + 100, v16, v20);
    v21 = rand() % 2;
    v17 = *(_DWORD *)(a1 + 32) - rand() % 200 + 380;
    v9 = rand();
    sub_40AFA0(v9 % 480 + 100, v17, v21);
    v22 = rand() % 2;
    v18 = *(_DWORD *)(a1 + 32) - rand() % 200 + 380;
    v10 = rand();
    result = sub_40AFA0(v10 % 480 + 100, v18, v22);
  }
  if ( *(int *)(a1 + 60) <= 540 )
  {
LABEL_8:
    if ( *(_BYTE *)(a1 + 52) == 1 )
      *(_BYTE *)(a1 + 52) = 0;
    v11 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(sub_40B5E0(0) + 8);
    v12 = (int *)sub_411780();
    v13 = *v12;
    v14 = (_DWORD *)sub_40B5E0(0);
    return host_blit(45, -*v14, v11, 640, 480, 0, 0);
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;

  return 0;
}
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22

int sub_40AA30(int ignored)
{
  _Alignas(16) unsigned char frame[1632] = {0};
#define v1 ((_DWORD *)(frame + 32))
#define v2 ((_DWORD *)(frame + 64))
#define v3 ((_BYTE *)(frame + 96))




  v1[7] = 0;
  memset(&v2[1], 0, 12);
  v2[7] = sub_40AA80;
  v2[0] = 2;
  qmemcpy(v3, v1, 32);
  return sub_4128C0(v2);

  return 0;
}
#undef v1
#undef v2
#undef v3

int sub_40AA80(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int result; // eax
  int v2; // eax

  result = *(_DWORD *)(a1 + 60) + 1;
  *(_DWORD *)(a1 + 60) = result;
  if ( result <= 1400 )
  {
    v2 = sub_411780();
    return host_blit(59, 200, (*(_DWORD *)(a1 + 60) / 4 - 100 < 100 ? *(_DWORD *)(a1 + 60) / 4 - 100 : 100), 100, 100, 0, 0);
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;

  return 0;
}


int sub_40AAE0(int ignored)
{
  _Alignas(16) unsigned char frame[1736] = {0};
#define v1 ((_QWORD *)(frame + 32))
#define v2 ((_DWORD *)(frame + 168))
#define v3 ((_BYTE *)(frame + 200))




  memset(&v1[1], 0, 12);
  v1[3] = 0x20000000000LL;
  v1[4] = 0x30000000000LL;
  v1[5] = 0x40000000000LL;
  v1[6] = 0x50000000000LL;
  v1[7] = 0x60000000000LL;
  v1[8] = 0x70000000000LL;
  v1[9] = 0x80000000000LL;
  v1[10] = 0x90000000000LL;
  v1[11] = 0xA0000000000LL;
  v1[12] = 0xB0000000000LL;
  v1[13] = 0xC0000000000LL;
  v1[14] = 0xD0000000000LL;
  v1[15] = 0xE0000000000LL;
  v1[16] = 0;
  memset(&v2[1], 0, 12);
  HIDWORD(v1[2]) = 256;
  v1[0] = 0xAC00000040LL;
  v2[7] = sub_40AC20;
  v2[0] = 16;
  qmemcpy(v3, v1, 136);
  return sub_4128C0(v2);

  return 0;
}
#undef v1
#undef v2
#undef v3

int sub_40AC20(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // eax
  bool v2; // zf
  signed int v3; // eax
  int result; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax

  v1 = *(_DWORD *)(a1 + 164) + 1;
  *(_DWORD *)(a1 + 164) = v1;
  v3 = v1 & 0x80000001;
  v2 = v3 == 0;
  if ( v3 < 0 )
    v2 = (((_BYTE)v3 - 1) | 0xFFFFFFFE) == -1;
  if ( v2 && (result = *(_DWORD *)(a1 + 160) + 1, *(_DWORD *)(a1 + 160) = result, result > 14) )
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
    v6 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
    v7 = sub_411780();
    return host_blit(3, v5, v6, 512, 256, *(_DWORD *)(a1 + 8 * *(_DWORD *)(a1 + 160) + 40), *(_DWORD *)(a1 + 8 * *(_DWORD *)(a1 + 160) + 44));
  }
  return result;

  return 0;
}


int sub_40ACB0(unsigned int a1, int a2, int a3)
{
  _Alignas(16) unsigned char frame[1648] = {0};
#define v5 (*((int *)(frame + 32)))
#define v6 ((_DWORD *)(frame + 44))
#define v7 ((_DWORD *)(frame + 80))
#define v8 ((_BYTE *)(frame + 112))
  int v3; // eax





  *(_QWORD *)v6 = a1;
  v6[4] = a2;
  v6[3] = 0;
  v6[6] = 0;
  LOBYTE(v6[7]) = 0;
  v6[8] = 0;
  v7[1] = 0;
  v7[2] = 0;
  v6[2] = 2;
  v6[5] = -90;
  v7[7] = sub_40AD50;
  v7[0] = 8;
  v7[3] = a3;
  qmemcpy(v8, v6, 36);
  v5 = sub_4128C0(v7);
  v3 = sub_40B5E0(0);
  return sub_407640(*(_DWORD *)(v3 + 68), v5);

  return 0;
}
#undef v5
#undef v6
#undef v7
#undef v8

int sub_40AD50(int a1)
{
  _Alignas(16) unsigned char frame[1088] = {0};
#define v20 (*((__int64 *)(frame + 32)))
#define v21 (*((int *)(frame + 36)))
#define v22 (*((int *)(frame + 36)))
#define v23 (*((int *)(frame + 36)))
#define v24 (*((int *)(frame + 40)))
#define v25 (*((int *)(frame + 60)))
  int v2; // eax
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // edx
  int result; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ebp
  int v10; // edi
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax






  _DWORD *v26; // [esp+18h] [ebp+4h]

  v2 = *(_DWORD *)(a1 + 52);
  v3 = (_DWORD *)(*(_DWORD *)(a1 + 12) + 32);
  v26 = v3;
  if ( v2 < 0 )
  {
    v4 = v2 + 1;
    *(_DWORD *)(a1 + 52) = v4;
    if ( v4 == 0 )
      *(_DWORD *)(a1 + 56) = 2;
  }
  v5 = *(_DWORD *)(a1 + 44) + 1;
  *(_DWORD *)(a1 + 44) = v5;
  if ( v5 < 60 )
    ++*(_DWORD *)(a1 + 36);
  if ( v5 > 350 )
  {
    result = *(_DWORD *)(a1 + 36) - 1;
    *(_DWORD *)(a1 + 36) = result;
    if ( result < 0 )
      goto LABEL_26;
  }
  v7 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
  v8 = sub_40B5E0(0);
  v9 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(v8 + 8) + *v3 + 380 + *(_DWORD *)(a1 + 52);
  v25 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(v8 + 8) + *v3 + 380;
  v10 = v7 - 76 * *(_DWORD *)(a1 + 48) + 60;
  if ( *(_BYTE *)(a1 + 60) != 0 )
  {
    v11 = *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 60) = 0;
    if ( v11 <= 0 )
    {
      *(_DWORD *)(a1 + 40) -= *(_DWORD *)(a1 + 64);
    }
    else
    {
      v12 = v11 - *(_DWORD *)(a1 + 64);
      *(_DWORD *)(a1 + 56) = v12;
      if ( v12 <= 0 )
      {
        *(_DWORD *)(a1 + 52) = -90;
        v21 = *(_DWORD *)(sub_40B5E0(0) + 8) + v9 + 10;
        v13 = (_DWORD *)sub_40B5E0(0);
        sub_404170(*v13 + v10 + 10, v21, 2);
        v22 = *(_DWORD *)(sub_40B5E0(0) + 8) + v9 + 10;
        v14 = (_DWORD *)sub_40B5E0(0);
        sub_404170(*v14 + v10 + 10, v22, 2);
        v23 = *(_DWORD *)(sub_40B5E0(0) + 8) + v9 + 10;
        v15 = (_DWORD *)sub_40B5E0(0);
        sub_404170(*v15 + v10 + 10, v23, 2);
        sub_413610(7);
      }
    }
    *(_DWORD *)(a1 + 64) = 0;
  }
  if ( *(int *)(a1 + 40) <= 0 || *(_BYTE *)(*(_DWORD *)(a1 + 12) + 24) != 0 )
  {
    v16 = v26;
LABEL_25:
    result = sub_40AFA0(*(_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 36) + *v16 + 380, *(_DWORD *)(a1 + 48));
LABEL_26:
    *(_BYTE *)(a1 + 24) = 1;
    return result;
  }
  v16 = v26;
  if ( v26[4] <= v26[6] && *((_BYTE *)v26 + 20) != 0 )
    goto LABEL_25;
  v17 = *(_DWORD *)(a1 + 44);
  if ( v17 > 200 && v17 < 240 && *(int *)(a1 + 56) > 0 && v17 % 10 == 0 )
  {
    v24 = *(_DWORD *)(a1 + 48);
    HIDWORD(v20) = *(_DWORD *)(sub_40B5E0(0) + 8) + v9 + 30;
    LODWORD(v20) = *(_DWORD *)sub_40B5E0(0) + v10 - 20 * *(_DWORD *)(a1 + 48) + 20;
    sub_4092D0((unsigned int)(v20), (int)((unsigned __int64)(v20) >> 32), v24);
    sub_413610(6);
  }
  v18 = sub_411780();
  host_blit(47, v7, v25, 80, 80, 80 * *(_DWORD *)(a1 + 48), 0);
  v19 = sub_411780();
  return host_blit(48, v10, v9, 36, 46, 36 * *(_DWORD *)(a1 + 48), 0);

  return 0;
}
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25

int sub_40AFA0(unsigned int pair_lo, int pair_hi, int a2)
{
  _Alignas(16) unsigned char frame[1620] = {0};
#define v3 ((_DWORD *)(frame + 32))
#define v4 ((_DWORD *)(frame + 52))
#define v5 ((_BYTE *)(frame + 84))
  __int64 a1 = (unsigned __int64)(unsigned int)pair_hi << 32 | pair_lo;




  *(_QWORD *)v3 = a1;
  v3[4] = a2;
  memset(&v4[1], 0, 12);
  v4[7] = sub_40B030;
  v4[0] = 8;
  *(_QWORD *)&v3[2] = (unsigned int)(rand() % 80 - 40);
  qmemcpy(v5, v3, 20);
  return sub_4128C0(v4);

  return 0;
}
#undef v3
#undef v4
#undef v5

int sub_40B030(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // edx
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int result; // eax

  v1 = *(_DWORD *)(a1 + 36);
  v2 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 32) += *(int *)(a1 + 40) >> 4;
  *(_DWORD *)(a1 + 36) = (v2 >> 4) + v1;
  *(_DWORD *)(a1 + 44) = v2 + 1;
  v3 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
  v4 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
  v5 = sub_411780();
  result = host_blit(47, v3, v4, 80, 80, 80 * *(_DWORD *)(a1 + 48), 80);
  if ( *(int *)(a1 + 36) > 608 || (result = *(_DWORD *)(a1 + 32)) < -80 || result > 720 )
    *(_BYTE *)(a1 + 24) = 1;
  return result;

  return 0;
}


int sub_40B0C0(unsigned int pair_lo, int pair_hi)
{
  _Alignas(16) unsigned char frame[1628] = {0};
#define v14 ((_QWORD *)(frame + 32))
#define v15 (*((int *)(frame + 56)))
#define v16 (*((int *)(frame + 60)))
#define v17 (*((int *)(frame + 64)))
#define v18 (*((int *)(frame + 68)))
#define v19 (*((int *)(frame + 72)))
#define v20 (*((int *)(frame + 88)))
#define v21 ((_BYTE *)(frame + 92))
  __int64 a1 = (unsigned __int64)(unsigned int)pair_hi << 32 | pair_lo;
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









  v14[0] = a1;
  HIDWORD(v14[1]) = 0;
  LODWORD(v14[1]) = 20;
  v20 = sub_40B2C0;
  v16 = 32;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  qmemcpy(v21, v14, 24);
  v1 = sub_4128C0(&v16);
  v14[0] = a1;
  HIDWORD(v14[1]) = 1;
  LODWORD(v14[1]) = 20;
  v20 = sub_40B2C0;
  v16 = 8;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  qmemcpy(v21, v14, 24);
  v2 = sub_4128C0(&v16);
  switch ( *(_DWORD *)(*(_DWORD *)(sub_40B5E0(0) + 64) + 4) )
  {
    case 0:
      v3 = sub_40B5E0(0);
      sub_406DC0(v1, *(_DWORD *)(v3 + 64));
      v4 = *(_DWORD *)(*(_DWORD *)(sub_40B5E0(0) + 64) + 32);
      break;
    case 1:
      v5 = sub_40B5E0(0);
      sub_404870(v1, *(_DWORD *)(v5 + 64));
      v4 = *(_DWORD *)(*(_DWORD *)(sub_40B5E0(0) + 64) + 32);
      break;
    case 2:
      v6 = sub_40B5E0(0);
      sub_404F30(v1, v2, *(_DWORD *)(v6 + 64));
      v4 = *(_DWORD *)(*(_DWORD *)(sub_40B5E0(0) + 64) + 32);
      break;
    case 3:
      goto LABEL_6;
    case 4:
      v7 = *(_DWORD *)(sub_40B5E0(0) + 64) + 32;
      v8 = (_DWORD *)(*(_DWORD *)(v7 + 4 * *(_DWORD *)(*(_DWORD *)(sub_40B5E0(0) + 68) + 40) + 4) + 32);
      if ( *v8 != 0 )
      {
        v9 = v8[1];
        v4 = *(_DWORD *)(*v8 + 32);
        sub_405A00(v1, v9);
        v10 = *(_DWORD *)(v9 + 68);
        v11 = (int *)(v9 + 68);
        if ( v10 != 0 )
        {
          do
          {
            sub_405A00(v1, v10);
            v11 = (int *)(*v11 + 68);
            v10 = *v11;
          }
          while ( *v11 != 0 );
        }
      }
      else
      {
LABEL_6:
        v4 = *(_DWORD *)(sub_40B5E0(0) + 8);
      }
      break;
    case 5:
      v12 = sub_40B5E0(0);
      sub_4074A0(v1, v2, *(_DWORD *)(v12 + 64));
      v4 = *(_DWORD *)(*(_DWORD *)(sub_40B5E0(0) + 64) + 32);
      break;
    default:
      v4 = v15;
      break;
  }
  *(_DWORD *)(v1 + 52) = sub_4019D0(v4);
  return v1;

  return 0;
}
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21

int sub_40B2C0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v2; // edi
  int v3; // ebx
  int v4; // eax

  *(_DWORD *)(a1 + 36) -= *(_DWORD *)(a1 + 40);
  if ( *(_DWORD *)(a1 + 36) + 512 >= *(_DWORD *)(sub_40B5E0(0) + 8) )
  {
    v2 = *(_DWORD *)(a1 + 32) - *(_DWORD *)sub_40B5E0(0);
    v3 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(sub_40B5E0(0) + 8);
    v4 = sub_411780();
    return host_blit(8, v2 + 40 * *(_DWORD *)(a1 + 44), v3, 40, 512, 40 * *(_DWORD *)(a1 + 44), 0);
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
    *(_DWORD *)(*(_DWORD *)(sub_40B5E0(0) + 68) + 48) = 0;
    return sub_4129F0(127);
  }

  return 0;
}


int sub_40B350(int ignored)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v1 ((_DWORD *)(frame + 32))


  v1[7] = sub_40B390;
  memset(&v1[1], 0, 12);
  v1[8] = 0;
  v1[0] = 16;
  return sub_4128C0(v1);

  return 0;
}
#undef v1

int sub_40B390(int a1)
{
  _Alignas(16) unsigned char frame[3107] = {0};
#define v6 ((_BYTE *)(frame + 32))
#define v7 ((_BYTE *)(frame + 35))
#define v8 ((_BYTE *)(frame + 1059))
  int result; // eax
  int v2; // esi
  int i; // ecx
  int v4; // eax
  int v5; // eax




  ++*(_DWORD *)(a1 + 32);
  sub_411780();
  sub_411760(v7);
  result = *(_DWORD *)(a1 + 32);
  if ( result <= 32 )
  {
    v2 = 32 - result;
    for ( i = 0; i < 1024; v7[i + 1022] = v2 * (unsigned __int8)v6[i + 1] / 32 )
    {
      v4 = (unsigned __int8)v7[i];
      i += 4;
      v7[i + 1020] = v2 * v4 / 32;
      v7[i + 1021] = v2 * (unsigned __int8)v6[i] / 32;
    }
    v5 = sub_411780();
    return host_palette(v8);
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
  }
  return result;

  return 0;
}
#undef v6
#undef v7
#undef v8

int sub_40B450(int ignored)
{
  _Alignas(16) unsigned char frame[1600] = {0};
#define v1 ((_DWORD *)(frame + 32))


  v1[7] = sub_40B490;
  memset(&v1[1], 0, 12);
  v1[8] = 0;
  v1[0] = 64;
  return sub_4128C0(v1);

  return 0;
}
#undef v1

int sub_40B490(int a1)
{
  _Alignas(16) unsigned char frame[3107] = {0};
#define v7 ((_BYTE *)(frame + 32))
#define v8 ((_BYTE *)(frame + 35))
#define v9 ((_BYTE *)(frame + 1059))
  int v1; // esi
  int v2; // eax
  int i; // ecx
  int v5; // eax
  int v6; // eax




  ++*(_DWORD *)(a1 + 32);
  sub_411780();
  sub_411760(v8);
  v1 = *(_DWORD *)(a1 + 32);
  if ( v1 <= 32 )
  {
    for ( i = 0; i < 1024; v8[i + 1022] = v1 * (unsigned __int8)v7[i + 1] / 32 )
    {
      v5 = (unsigned __int8)v8[i];
      i += 4;
      v8[i + 1020] = v1 * v5 / 32;
      v8[i + 1021] = v1 * (unsigned __int8)v7[i] / 32;
    }
    v6 = sub_411780();
    return host_palette(v9);
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
    v2 = sub_411780();
    return host_palette(v8);
  }

  return 0;
}
#undef v7
#undef v8
#undef v9

int sub_40B560(int ignored)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  unk_41F7B4 = (unsigned int)&dword_41F7B0 >> 24;
  G_Block = NULL;
  dword_41F7BC = 0;
  dword_41F7C0 = 0;
  return &dword_41F7B0;

  return 0;
}


int sub_40B5E0(int ignored)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  return &dword_41F688;

  return 0;
}


int sub_40C080(int ignored)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int result; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax

  if ( byte_41E058 != 0 )
  {
    byte_41E058 = 0;
    if ( *(_DWORD *)dword_41F6DC != 0 && dword_41F838 == 0 )
    {
      sub_4032A0(10, 285);
      sub_4033F0(598, 285);
    }
  }
  sub_412090();
  ++dword_41F840;
  if ( (unsigned __int8)sub_412180(1) != 0 )
  {
    dword_41F840 = 0;
    if ( dword_41F838 == 1 )
    {
      if ( *(_DWORD *)dword_41F6DC != 0 )
      {
        sub_4032A0(10, 285);
        sub_4033F0(598, 285);
      }
      sub_413610(3);
    }
    dword_41F838 = 0;
  }
  else if ( (unsigned __int8)sub_412180(3) != 0 )
  {
    dword_41F840 = 0;
    if ( dword_41F838 == 0 )
    {
      sub_412950(0);
      sub_413610(3);
    }
    dword_41F838 = 1;
  }
  else if ( (unsigned __int8)sub_412180(4) == 0 || dword_41F838 != 0 )
  {
    if ( (unsigned __int8)sub_412180(2) == 0 || dword_41F838 != 0 )
    {
      if ( (unsigned __int8)sub_412180(9) != 0 )
      {
        byte_41E058 = 1;
        dword_41F840 = 0;
        sub_413610(4);
        if ( dword_41F838 != 0 )
        {
          result = sub_40C420(0);
          dword_41F798 = 9;
          dword_41F79C = sub_40C4A0;
          return result;
        }
        if ( dword_41F83C != 0 )
        {
          if ( dword_41F83C == 1 )
          {
            sub_412B90(G_aData000Mid, 0);
            sub_412D80(0, 31488, 238848);
            sub_412CB0(0);
            sub_40D410(0);
            sub_412950(0);
            sub_412870(0);
            sub_40E750(0);
            dword_41F798 = 3;
            dword_41F79C = sub_40E840;
            dword_41F7B0 = time(NULL);
            sub_413F09(dword_41F7B0);
          }
          else if ( dword_41F83C == 2 )
          {
            sub_412B90(G_MultiByteStr, 0);
            sub_412D80(0, 0, 139000);
            sub_412CB0(0);
            sub_40F2D0(0);
            dword_41F7B0 = time(NULL);
            sub_413F09(dword_41F7B0);
          }
        }
        else
        {
          sub_412B90(G_MultiByteStr, 0);
          sub_412D80(0, 0, 139000);
          sub_412CB0(0);
          sub_40D410(0);
          dword_41F7B0 = time(NULL);
          sub_413F09(dword_41F7B0);
        }
      }
      else if ( (unsigned __int8)sub_412180(10) != 0 )
      {
        sub_4108E0();
      }
    }
    else if ( *(int *)dword_41F6DC > 0 )
    {
      dword_41F840 = 0;
      sub_413610(3);
      if ( --dword_41F83C < 0 )
      {
        if ( *(_DWORD *)dword_41F6DC == 2 )
        {
          dword_41F83C = 2;
        }
        else if ( *(_DWORD *)dword_41F6DC == 1 )
        {
          dword_41F83C = 1;
        }
      }
    }
  }
  else if ( *(_DWORD *)dword_41F6DC != 0 && dword_41F83C <= *(int *)dword_41F6DC )
  {
    dword_41F840 = 0;
    sub_413610(3);
    dword_41F83C = (dword_41F83C + 1) % (*(_DWORD *)dword_41F6DC + 1);
  }
  v1 = sub_411780();
  host_blit(12, 0, 0, 640, 480, 0, 0);
  v2 = sub_411780();
  host_blit(16, 90, 85 * dword_41F838 + 280, 84, 66, 0, 0);
  if ( dword_41F83C == 1 )
  {
    v3 = sub_411780();
    host_blit(53, 186, 260, 220, 80, 0, 0);
    return sub_412870(0);
  }
  else
  {
    if ( dword_41F83C == 2 )
    {
      v4 = sub_411780();
      host_blit(54, 186, 260, 220, 80, 0, 0);
    }
    return sub_412870(0);
  }

  return 0;
}


int sub_40C420(int ignored)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  FILE *v0; // esi
  FILE *result; // eax
  FILE *v2; // esi

  v0 = fopen(G_aSaveDainiScore, G_Mode);
  if ( v0 != NULL )
  {
    sub_4033F0(600, 0);
    sub_4032A0(8, 0);
    return (FILE *)fclose(v0);
  }
  else
  {
    result = fopen(G_aSaveEndlessSco, G_Mode);
    v2 = result;
    if ( result != NULL )
    {
      sub_4033F0(598, 0);
      sub_4032A0(10, 0);
      return (FILE *)fclose(v2);
    }
  }
  return result;

  return 0;
}


int sub_40C4A0(int ignored)
{
  _Alignas(16) unsigned char frame[1080] = {0};
#define v31 (*((int *)(frame + 32)))
#define FileName ((CHAR *)(frame + 36))
  int v0; // esi
  FILE *v1; // eax
  FILE *v2; // eax
  FILE *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // ebp
  int v9; // eax
  int i; // ebx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int j; // ebp
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int k; // ebp
  int v21; // ecx
  int v22; // edi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  bool v28; // cc
  _DWORD *v30; // [esp+100h] [ebp-1Ch]



  if ( dword_41F844 == 0 )
  {
    v0 = 1;
    dword_41F844 = 1;
    byte_41F848 = 0;
    byte_41F849 = 0;
    sub_40FF30(&unk_41F740);
    do
    {
      wsprintfA(FileName, "save/replay%d.rep", v0);
      v1 = fopen(FileName, G_Mode);
      if ( v1 != NULL )
      {
        byte_41F818[v0] = 1;
        fclose(v1);
      }
      else
      {
        byte_41F818[v0] = 0;
      }
      ++v0;
    }
    while ( v0 < 11 );
    v2 = fopen(G_aSaveDainiScore, G_Mode);
    if ( v2 != NULL )
    {
      byte_41F848 = 1;
      fclose(v2);
    }
    v3 = fopen(G_aSaveEndlessSco, G_Mode);
    if ( v3 != NULL )
    {
      byte_41F849 = 1;
      fclose(v3);
    }
  }
  sub_412090();
  if ( (unsigned __int8)sub_412180(1) == 0 )
  {
    if ( (unsigned __int8)sub_412180(3) != 0 )
    {
      ++dword_41F790;
      sub_413610(3);
      v4 = dword_41F790;
      if ( dword_41F790 > 10 )
      {
        dword_41F790 = 0;
        goto LABEL_18;
      }
      if ( dword_41F790 <= 0 )
        goto LABEL_18;
      while ( byte_41F818[v4] == 0 )
      {
        if ( ++v4 > 10 )
        {
          dword_41F790 = 0;
          goto LABEL_18;
        }
        if ( v4 <= 0 )
          goto LABEL_17;
      }
      goto LABEL_17;
    }
    if ( (unsigned __int8)sub_412180(4) != 0 )
    {
      if ( byte_41F848 != 0 )
      {
LABEL_47:
        sub_413610(3);
        dword_41F798 = 10;
        dword_41F79C = sub_40CA00;
        goto LABEL_18;
      }
      if ( byte_41F849 == 0 )
        goto LABEL_18;
    }
    else
    {
      if ( (unsigned __int8)sub_412180(2) == 0 )
      {
        if ( (unsigned __int8)sub_412180(9) != 0 )
        {
          if ( dword_41F790 != 0 )
          {
            sub_412B90(G_MultiByteStr, 0);
            sub_412D80(0, 0, 139000);
            sub_412CB0(0);
            sub_40D410(0);
            sub_40FB90(dword_41F790);
            sub_413F09(dword_41F7B0);
            dword_41F798 = 5;
            dword_41F79C = sub_40E2D0;
          }
          else
          {
            dword_41F798 = 1;
            dword_41F79C = sub_40C080;
          }
          sub_413610(4);
          dword_41F844 = 0;
        }
        else if ( (unsigned __int8)sub_412180(10) != 0 )
        {
          sub_4108E0();
        }
        goto LABEL_18;
      }
      if ( byte_41F849 == 0 )
      {
        if ( byte_41F848 == 0 )
          goto LABEL_18;
        goto LABEL_47;
      }
    }
    sub_413610(3);
    dword_41F798 = 11;
    dword_41F79C = sub_40CF10;
    goto LABEL_18;
  }
  --dword_41F790;
  sub_413610(3);
  v4 = dword_41F790;
  if ( dword_41F790 < 0 )
  {
    v4 = 10;
    dword_41F790 = 10;
    do
    {
LABEL_15:
      if ( byte_41F818[v4] != 0 )
        break;
      --v4;
    }
    while ( v4 > 0 );
LABEL_17:
    dword_41F790 = v4;
    goto LABEL_18;
  }
  if ( dword_41F790 > 0 )
    goto LABEL_15;
LABEL_18:
  v5 = sub_411780();
  host_clear(3176598);
  v6 = sub_411780();
  host_blit(30, 200, 20, 240, 90, 0, 0);
  v31 = 1;
  v7 = 126;
  v30 = &unk_41F744;
  do
  {
    v8 = 1;
    v9 = sub_411780();
    host_blit(34, 80, v7, 32, 32, 0, 0);
    for ( i = 60; i > 20; i -= 20 )
    {
      if ( v31 / v8 > 0 || i == 60 )
      {
        v11 = sub_411780();
        host_blit(31, i, v7 + 4, 20, 24, 20 * (v31 / v8 % 10), 0);
      }
      v8 *= 10;
    }
    v12 = 1;
    v13 = sub_411780();
    host_blit(33, 210, v7, 64, 32, 0, 0);
    for ( j = 190; j > 130; j -= 20 )
    {
      v15 = *(v30 - 1) / v12;
      v16 = v15 % 10;
      if ( v15 > 0 || j == 190 )
      {
        v17 = sub_411780();
        host_blit(31, j, v7 + 4, 20, 24, 20 * v16, 0);
      }
      v12 *= 10;
    }
    v18 = 1;
    v19 = sub_411780();
    host_blit(32, 460, v7, 32, 32, 0, 0);
    for ( k = 440; k > 280; k -= 20 )
    {
      v21 = *v30 / v18;
      v22 = v21 % 10;
      if ( v21 > 0 || k == 440 )
      {
        v23 = sub_411780();
        host_blit(31, k, v7 + 4, 20, 24, 20 * v22, 0);
      }
      v18 *= 10;
    }
    if ( dword_41F790 != 0 )
    {
      v25 = sub_411780();
      host_blit(38, 520, 50, 96, 50, 0, 0);
    }
    else
    {
      v24 = sub_411780();
      host_blit(39, 520, 50, 96, 50, 0, 0);
    }
    if ( byte_41F818[v31] != 0 )
    {
      if ( v31 == dword_41F790 )
      {
        v26 = sub_411780();
        host_blit(37, 520, v7, 96, 32, 0, 0);
      }
      else
      {
        v27 = sub_411780();
        host_blit(36, 520, v7, 96, 32, 0, 0);
      }
    }
    v7 += 32;
    v28 = (int)(v30 + 2) < (int)&unk_41F794;
    v30 += 2;
    ++v31;
  }
  while ( v28 );
  return sub_412870(0);

  return 0;
}
#undef v31
#undef FileName

int sub_40CA00(int ignored)
{
  _Alignas(16) unsigned char frame[1080] = {0};
#define v30 (*((int *)(frame + 32)))
#define FileName ((CHAR *)(frame + 36))
  int v0; // esi
  FILE *v1; // eax
  FILE *v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // ebp
  int v8; // eax
  int i; // ebx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int j; // ebp
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int k; // ebp
  int v20; // ecx
  int v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  bool v27; // cc
  _DWORD *v29; // [esp+100h] [ebp-1Ch]



  if ( dword_41F84C == 0 )
  {
    v0 = 1;
    dword_41F84C = 1;
    byte_41F850 = 0;
    sub_4100B0(&unk_41F6F0);
    do
    {
      wsprintfA(FileName, "save/replay%d.rep", &byte_41F7A0[11 - (_DWORD)&unk_41F7A1 + v0]);
      v1 = fopen(FileName, G_Mode);
      if ( v1 != NULL )
      {
        byte_41F7A0[v0] = 1;
        fclose(v1);
      }
      else
      {
        byte_41F7A0[v0] = 0;
      }
      ++v0;
    }
    while ( v0 < 11 );
    v2 = fopen(G_aSaveEndlessSco, G_Mode);
    if ( v2 != NULL )
    {
      byte_41F850 = 1;
      fclose(v2);
    }
  }
  sub_412090();
  if ( (unsigned __int8)sub_412180(1) == 0 )
  {
    if ( (unsigned __int8)sub_412180(3) != 0 )
    {
      ++dword_41F824;
      sub_413610(3);
      v3 = dword_41F824;
      if ( dword_41F824 > 10 )
      {
        dword_41F824 = 0;
        goto LABEL_16;
      }
      if ( dword_41F824 <= 0 )
        goto LABEL_16;
      while ( byte_41F7A0[v3] == 0 )
      {
        if ( ++v3 > 10 )
        {
          dword_41F824 = 0;
          goto LABEL_16;
        }
        if ( v3 <= 0 )
          goto LABEL_15;
      }
      goto LABEL_15;
    }
    if ( (unsigned __int8)sub_412180(2) == 0 )
    {
      if ( (unsigned __int8)sub_412180(4) == 0 )
      {
        if ( (unsigned __int8)sub_412180(9) != 0 )
        {
          if ( dword_41F824 != 0 )
          {
            sub_412B90(G_aData000Mid, 0);
            sub_412D80(0, 31488, 238848);
            sub_412CB0(0);
            sub_40D410(0);
            sub_412950(0);
            sub_412870(0);
            sub_40E750(0);
            sub_40FB90(dword_41F824 + 10);
            sub_413F09(dword_41F7B0);
            dword_41F798 = 6;
            dword_41F79C = sub_40EF60;
          }
          else
          {
            dword_41F798 = 1;
            dword_41F79C = sub_40C080;
          }
          sub_413610(4);
          dword_41F84C = 0;
        }
        else if ( (unsigned __int8)sub_412180(10) != 0 )
        {
          sub_4108E0();
        }
        goto LABEL_16;
      }
      if ( byte_41F850 != 0 )
      {
        sub_413610(3);
        dword_41F798 = 11;
        dword_41F79C = sub_40CF10;
        goto LABEL_16;
      }
    }
    sub_413610(3);
    dword_41F798 = 9;
    dword_41F79C = sub_40C4A0;
    goto LABEL_16;
  }
  --dword_41F824;
  sub_413610(3);
  v3 = dword_41F824;
  if ( dword_41F824 < 0 )
  {
    v3 = 10;
    dword_41F824 = 10;
    do
    {
LABEL_13:
      if ( byte_41F7A0[v3] != 0 )
        break;
      --v3;
    }
    while ( v3 > 0 );
LABEL_15:
    dword_41F824 = v3;
    goto LABEL_16;
  }
  if ( dword_41F824 > 0 )
    goto LABEL_13;
LABEL_16:
  v4 = sub_411780();
  host_clear(3176598);
  v5 = sub_411780();
  host_blit(30, 200, 20, 240, 90, 0, 90);
  v30 = 1;
  v6 = 126;
  v29 = &unk_41F6F4;
  do
  {
    v7 = 1;
    v8 = sub_411780();
    host_blit(34, 80, v6, 32, 32, 0, 0);
    for ( i = 60; i > 20; i -= 20 )
    {
      if ( v30 / v7 > 0 || i == 60 )
      {
        v10 = sub_411780();
        host_blit(31, i, v6 + 4, 20, 24, 20 * (v30 / v7 % 10), 0);
      }
      v7 *= 10;
    }
    v11 = 1;
    v12 = sub_411780();
    host_blit(33, 210, v6, 64, 32, 0, 0);
    for ( j = 190; j > 130; j -= 20 )
    {
      v14 = *(v29 - 1) / v11;
      v15 = v14 % 10;
      if ( v14 > 0 || j == 190 )
      {
        v16 = sub_411780();
        host_blit(31, j, v6 + 4, 20, 24, 20 * v15, 0);
      }
      v11 *= 10;
    }
    v17 = 1;
    v18 = sub_411780();
    host_blit(32, 460, v6, 32, 32, 0, 0);
    for ( k = 440; k > 280; k -= 20 )
    {
      v20 = *v29 / v17;
      v21 = v20 % 10;
      if ( v20 > 0 || k == 440 )
      {
        v22 = sub_411780();
        host_blit(31, k, v6 + 4, 20, 24, 20 * v21, 0);
      }
      v17 *= 10;
    }
    if ( dword_41F824 != 0 )
    {
      v24 = sub_411780();
      host_blit(38, 520, 50, 96, 50, 0, 0);
    }
    else
    {
      v23 = sub_411780();
      host_blit(39, 520, 50, 96, 50, 0, 0);
    }
    if ( byte_41F7A0[v30] != 0 )
    {
      if ( v30 == dword_41F824 )
      {
        v25 = sub_411780();
        host_blit(37, 520, v6, 96, 32, 0, 0);
      }
      else
      {
        v26 = sub_411780();
        host_blit(36, 520, v6, 96, 32, 0, 0);
      }
    }
    v6 += 32;
    v27 = (int)(v29 + 2) < (int)&unk_41F744;
    v29 += 2;
    ++v30;
  }
  while ( v27 );
  return sub_412870(0);

  return 0;
}
#undef v30
#undef FileName

int sub_40CF10(int ignored)
{
  _Alignas(16) unsigned char frame[1080] = {0};
#define v30 (*((int *)(frame + 32)))
#define FileName ((CHAR *)(frame + 36))
  int v0; // esi
  FILE *v1; // eax
  FILE *v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // ebp
  int v8; // eax
  int i; // ebx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int j; // ebp
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int k; // ebp
  int v20; // ecx
  int v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  bool v27; // cc
  _DWORD *v29; // [esp+100h] [ebp-1Ch]



  if ( dword_41F854 == 0 )
  {
    v0 = 1;
    dword_41F854 = 1;
    byte_41F858 = 0;
    sub_410230(&unk_41F7C8);
    do
    {
      wsprintfA(FileName, "save/replay%d.rep", &byte_41F678[21 - (_DWORD)&unk_41F679 + v0]);
      v1 = fopen(FileName, G_Mode);
      if ( v1 != NULL )
      {
        byte_41F678[v0] = 1;
        fclose(v1);
      }
      else
      {
        byte_41F678[v0] = 0;
      }
      ++v0;
    }
    while ( v0 < 11 );
    v2 = fopen(G_aSaveDainiScore, G_Mode);
    if ( v2 != NULL )
    {
      byte_41F858 = 1;
      fclose(v2);
    }
  }
  sub_412090();
  if ( (unsigned __int8)sub_412180(1) == 0 )
  {
    if ( (unsigned __int8)sub_412180(3) != 0 )
    {
      ++dword_41F7AC;
      sub_413610(3);
      v3 = dword_41F7AC;
      if ( dword_41F7AC > 10 )
      {
        dword_41F7AC = 0;
        goto LABEL_16;
      }
      if ( dword_41F7AC <= 0 )
        goto LABEL_16;
      while ( byte_41F678[v3] == 0 )
      {
        if ( ++v3 > 10 )
        {
          dword_41F7AC = 0;
          goto LABEL_16;
        }
        if ( v3 <= 0 )
          goto LABEL_15;
      }
      goto LABEL_15;
    }
    if ( (unsigned __int8)sub_412180(2) != 0 )
    {
      if ( byte_41F858 != 0 )
      {
        sub_413610(3);
        dword_41F798 = 10;
        dword_41F79C = sub_40CA00;
        goto LABEL_16;
      }
    }
    else if ( (unsigned __int8)sub_412180(4) == 0 )
    {
      if ( (unsigned __int8)sub_412180(9) != 0 )
      {
        if ( dword_41F7AC != 0 )
        {
          sub_412B90(G_MultiByteStr, 0);
          sub_412D80(0, 0, 139000);
          sub_412CB0(0);
          sub_40F2D0(0);
          sub_40FB90(dword_41F7AC + 20);
          sub_413F09(dword_41F7B0);
          dword_41F798 = 7;
          dword_41F79C = sub_40F850;
        }
        else
        {
          dword_41F798 = 1;
          dword_41F79C = sub_40C080;
        }
        sub_413610(4);
        dword_41F854 = 0;
      }
      else if ( (unsigned __int8)sub_412180(10) != 0 )
      {
        sub_4108E0();
      }
      goto LABEL_16;
    }
    sub_413610(3);
    dword_41F798 = 9;
    dword_41F79C = sub_40C4A0;
    goto LABEL_16;
  }
  --dword_41F7AC;
  sub_413610(3);
  v3 = dword_41F7AC;
  if ( dword_41F7AC < 0 )
  {
    v3 = 10;
    dword_41F7AC = 10;
    do
    {
LABEL_13:
      if ( byte_41F678[v3] != 0 )
        break;
      --v3;
    }
    while ( v3 > 0 );
LABEL_15:
    dword_41F7AC = v3;
    goto LABEL_16;
  }
  if ( dword_41F7AC > 0 )
    goto LABEL_13;
LABEL_16:
  v4 = sub_411780();
  host_clear(3176598);
  v5 = sub_411780();
  host_blit(30, 200, 20, 240, 90, 0, 180);
  v30 = 1;
  v6 = 126;
  v29 = &unk_41F7CC;
  do
  {
    v7 = 1;
    v8 = sub_411780();
    host_blit(34, 80, v6, 32, 32, 0, 0);
    for ( i = 60; i > 20; i -= 20 )
    {
      if ( v30 / v7 > 0 || i == 60 )
      {
        v10 = sub_411780();
        host_blit(31, i, v6 + 4, 20, 24, 20 * (v30 / v7 % 10), 0);
      }
      v7 *= 10;
    }
    v11 = 1;
    v12 = sub_411780();
    host_blit(33, 210, v6, 64, 32, 0, 0);
    for ( j = 190; j > 130; j -= 20 )
    {
      v14 = *(v29 - 1) / v11;
      v15 = v14 % 10;
      if ( v14 > 0 || j == 190 )
      {
        v16 = sub_411780();
        host_blit(31, j, v6 + 4, 20, 24, 20 * v15, 0);
      }
      v11 *= 10;
    }
    v17 = 1;
    v18 = sub_411780();
    host_blit(32, 460, v6, 32, 32, 0, 0);
    for ( k = 440; k > 280; k -= 20 )
    {
      v20 = *v29 / v17;
      v21 = v20 % 10;
      if ( v20 > 0 || k == 440 )
      {
        v22 = sub_411780();
        host_blit(31, k, v6 + 4, 20, 24, 20 * v21, 0);
      }
      v17 *= 10;
    }
    if ( dword_41F7AC != 0 )
    {
      v24 = sub_411780();
      host_blit(38, 520, 50, 96, 50, 0, 0);
    }
    else
    {
      v23 = sub_411780();
      host_blit(39, 520, 50, 96, 50, 0, 0);
    }
    if ( byte_41F678[v30] != 0 )
    {
      if ( v30 == dword_41F7AC )
      {
        v25 = sub_411780();
        host_blit(37, 520, v6, 96, 32, 0, 0);
      }
      else
      {
        v26 = sub_411780();
        host_blit(36, 520, v6, 96, 32, 0, 0);
      }
    }
    v6 += 32;
    v27 = (int)(v29 + 2) < (int)&unk_41F81C;
    v29 += 2;
    ++v30;
  }
  while ( v27 );
  return sub_412870(0);

  return 0;
}
#undef v30
#undef FileName

int sub_40D410(int ignored)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int result; // eax

  dword_41F798 = 2;
  dword_41F79C = sub_40D560;
  sub_401100(0);
  sub_4085F0(480, 5, 1);
  sub_4085F0(240, -900, 1);
  sub_4085F0(120, -700, 1);
  sub_4085F0(640, -500, 1);
  sub_4085F0(-100, -300, 1);
  sub_4085F0(300, -100, 1);
  dword_41F6CC = sub_401CC0(0);
  sub_408AE0(0);
  dword_41F68C = 640;
  dword_41F688 = 0;
  dword_41F690 = 0;
  dword_41F694 = 480;
  sub_408DF0(0);
  result = dword_41F7BC;
  dword_41F698 = 0;
  dword_41F6C4 = 9999999;
  dword_41F69C = 0;
  dword_41F6A0 = 0;
  dword_41F6A8 = 0;
  dword_41F6AC = 0;
  byte_41F6B0 = 0;
  byte_41F6B1 = 0;
  dword_41F6B4 = 0;
  dword_41F6A4 = 0;
  dword_41F7B0 = 0;
  byte_41F6B8 = 0;
  byte_41F6B9 = 0;
  byte_41F6BA = 0;
  dword_41F6C0 = 0;
  dword_41F7BC = (int)G_Block;
  dword_41F6BC = -1;
  return result;

  return 0;
}


int sub_40D560(int ignored)
{
  _Alignas(16) unsigned char frame[1064] = {0};
#define v36 (*((int *)(frame + 32)))
#define v37 (*((int *)(frame + 36)))
  int v0; // esi
  int v1; // edi
  int v2; // eax
  bool v3; // sf
  int v4; // ebp
  int v5; // eax
  void *v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int *i; // eax
  int v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  void *v16; // edi
  int v17; // ebx
  int v18; // eax
  int v19; // ecx
  int *j; // eax
  int v21; // esi
  int v22; // edi
  int v23; // eax
  int v24; // ebp
  int v25; // eax
  void *v26; // edi
  int v27; // ebx
  int v28; // ecx
  int v29; // ecx
  int *k; // eax
  int result; // eax
  int v32; // esi
  int v33; // esi
  int v34; // eax
  int v35; // esi



  sub_412090();
  if ( (unsigned __int8)sub_412150(6) != 0 )
  {
    LOBYTE(v37) = 6;
    v36 = dword_41F6AC;
    sub_4103D0(dword_41F7BC, 1, &v36);
  }
  if ( (unsigned __int8)sub_412150(7) != 0 )
  {
    LOBYTE(v37) = 7;
    v36 = dword_41F6AC;
    sub_4103D0(dword_41F7BC, 1, &v36);
  }
  if ( (unsigned __int8)sub_412150(5) != 0 )
  {
    LOBYTE(v37) = 5;
    v36 = dword_41F6AC;
    sub_4103D0(dword_41F7BC, 1, &v36);
  }
  if ( (unsigned __int8)sub_412150(8) != 0 )
  {
    LOBYTE(v37) = 8;
    v36 = dword_41F6AC;
    sub_4103D0(dword_41F7BC, 1, &v36);
  }
  if ( (unsigned __int8)sub_412150(2) != 0 )
  {
    v0 = dword_41F7BC;
    LOBYTE(v37) = 2;
    v36 = dword_41F6AC;
    if ( (dword_41F7C0 - dword_41F7BC) >> 3 != 0 )
    {
      sub_410620(dword_41F7BC, dword_41F7BC, dword_41F7BC + 8);
      sub_410660(dword_41F7BC, 1 - ((dword_41F7BC - v0) >> 3), &v36);
      v9 = dword_41F7BC;
      for ( i = (int *)v0; i != (int *)v9; i += 2 )
      {
        *i = v36;
        i[1] = v37;
      }
      dword_41F7BC += 8;
    }
    else
    {
      if ( (unsigned int)sub_4103A0(&unk_41F7B4) <= 1 )
        v1 = 1;
      else
        v1 = sub_4103A0(&unk_41F7B4);
      v2 = sub_4103A0(&unk_41F7B4);
      v3 = v1 + v2 < 0;
      v4 = v1 + v2;
      v5 = v1 + v2;
      if ( v3 )
        v5 = 0;
      v6 = malloc(8 * v5);
      v7 = sub_410620(G_Block, v0, v6);
      sub_410660(v7, 1, &v36);
      sub_410620(v0, dword_41F7BC, v7 + 8);
      nullsub_2(G_Block, dword_41F7BC);
      free(G_Block);
      dword_41F7C0 = (int)v6 + 8 * v4;
      v8 = sub_4103A0(&unk_41F7B4);
      G_Block = v6;
      dword_41F7BC = (int)v6 + 8 * v8 + 8;
    }
  }
  if ( (unsigned __int8)sub_412150(4) != 0 )
  {
    v36 = dword_41F6AC;
    LOBYTE(v37) = 4;
    v11 = dword_41F7BC;
    if ( (dword_41F7C0 - dword_41F7BC) >> 3 != 0 )
    {
      sub_410620(dword_41F7BC, dword_41F7BC, dword_41F7BC + 8);
      sub_410660(dword_41F7BC, 1 - ((dword_41F7BC - v11) >> 3), &v36);
      v19 = dword_41F7BC;
      for ( j = (int *)v11; j != (int *)v19; j += 2 )
      {
        *j = v36;
        j[1] = v37;
      }
      dword_41F7BC += 8;
    }
    else
    {
      if ( G_Block != NULL && (unsigned int)((dword_41F7BC - (int)G_Block) >> 3) > 1 )
        v12 = sub_4103A0(&unk_41F7B4);
      else
        v12 = 1;
      v13 = sub_4103A0(&unk_41F7B4);
      v3 = v12 + v13 < 0;
      v14 = v12 + v13;
      v15 = v12 + v13;
      if ( v3 )
        v15 = 0;
      v16 = malloc(8 * v15);
      v17 = sub_410620(G_Block, v11, v16);
      sub_410660(v17, 1, &v36);
      sub_410620(v11, dword_41F7BC, v17 + 8);
      nullsub_2(G_Block, dword_41F7BC);
      free(G_Block);
      dword_41F7C0 = (int)v16 + 8 * v14;
      v18 = sub_4103A0(&unk_41F7B4);
      G_Block = v16;
      dword_41F7BC = (int)v16 + 8 * v18 + 8;
    }
  }
  if ( (unsigned __int8)sub_412150(9) != 0 )
  {
    v36 = dword_41F6AC;
    LOBYTE(v37) = 9;
    v21 = dword_41F7BC;
    if ( (dword_41F7C0 - dword_41F7BC) >> 3 != 0 )
    {
      sub_410620(dword_41F7BC, dword_41F7BC, dword_41F7BC + 8);
      sub_410660(dword_41F7BC, 1 - ((dword_41F7BC - v21) >> 3), &v36);
      v29 = dword_41F7BC;
      for ( k = (int *)v21; k != (int *)v29; k += 2 )
      {
        *k = v36;
        k[1] = v37;
      }
      dword_41F7BC += 8;
    }
    else
    {
      if ( G_Block == NULL || (unsigned int)(v22 = (dword_41F7BC - (int)G_Block) >> 3) <= 1 )
        v22 = 1;
      v23 = sub_4103A0(&unk_41F7B4);
      v3 = v22 + v23 < 0;
      v24 = v22 + v23;
      v25 = v22 + v23;
      if ( v3 )
        v25 = 0;
      v26 = malloc(8 * v25);
      v27 = sub_410620(G_Block, v21, v26);
      sub_410660(v27, 1, &v36);
      sub_410620(v21, dword_41F7BC, v27 + 8);
      nullsub_2(G_Block, dword_41F7BC);
      free(G_Block);
      dword_41F7C0 = (int)v26 + 8 * v24;
      v28 = (int)v26 + 8 * sub_4103A0(&unk_41F7B4) + 8;
      G_Block = v26;
      dword_41F7BC = v28;
    }
  }
  sub_412870(0);
  ++dword_41F6AC;
  if ( *(_DWORD *)(dword_41F6CC + 48) == 0 )
    ++dword_41F6A8;
  if ( byte_41F6B0 != 0 )
  {
    dword_41F798 = 8;
    dword_41F79C = sub_40DF30;
    sub_412950(0);
    sub_412870(0);
    sub_412D20(0);
    dword_41F6E4 = sub_40FE10(0);
    sub_40B450(0);
    *(_DWORD *)G_Buffer += dword_41F6AC / 60;
    result = *(_DWORD *)G_Buffer;
    if ( *(int *)G_Buffer <= 14400 )
    {
      if ( *(int *)G_Buffer > 28800 && *(int *)dword_41F6DC <= 1 )
        *(_DWORD *)dword_41F6DC = 2;
    }
    else if ( *(_DWORD *)dword_41F6DC == 0 )
    {
      *(_DWORD *)dword_41F6DC = 1;
    }
  }
  else if ( dword_41F698 != 9999999 || byte_41F6B9 != 0 )
  {
    if ( byte_41F6BA != 0 )
    {
      if ( *(_DWORD *)dword_41F6DC == 0 )
        *(_DWORD *)dword_41F6DC = 1;
      byte_41F6BA = 0;
      sub_412D20(0);
      sub_412B90(G_aData000Mid, 0);
      sub_412D80(0, 31488, 238848);
      sub_412CB0(0);
      sub_412950(0);
      sub_412870(0);
      sub_40E750(0);
      return sub_40B450(0);
    }
    else
    {
      if ( byte_41F6B1 == 0 && ++dword_41F6B4 > 45 )
      {
        byte_41F6B1 = 1;
        dword_41F6B4 = 0;
        switch ( dword_41F6BC )
        {
          case -1:
            v32 = dword_41F6A8 / 600;
            v33 = rand() % (v32 + 1) + v32 + 1;
            if ( v33 > 100 )
              v33 = 100;
            v34 = rand();
            v35 = sub_401340(dword_41F6A8 / 1500 + 1, v33, v34 % 3, 6, 3, 1);
            sub_406840(dword_41F6CC, v35);
            --dword_41F6BC;
            goto LABEL_77;
          case 0:
            v35 = sub_403540(0);
            sub_404300(dword_41F6CC, v35);
            sub_408780(0);
            goto LABEL_77;
          case 1:
            v35 = sub_403A30(0);
            sub_4049A0(dword_41F6CC, v35);
            sub_408780(1);
            goto LABEL_77;
          case 2:
            v35 = sub_408330(0);
            sub_408780(2);
            goto LABEL_77;
          case 3:
            v35 = sub_407C50(0);
            sub_408780(3);
            goto LABEL_77;
          case 4:
            sub_40B350(0);
            sub_408F50(G_aData023Txt);
            *(_DWORD *)(dword_41F6CC + 28) = sub_402EE0;
            goto LABEL_76;
          case 5:
            dword_41F69C = 0;
            *(_DWORD *)(dword_41F6CC + 28) = sub_401FB0;
            *(_DWORD *)(dword_41F6CC + 44) = 3;
            dword_41F6A4 = 0;
            sub_408DF0(0);
            sub_40B450(0);
            v35 = sub_409540(0);
            sub_406F00(dword_41F6CC, v35);
            sub_408780(4);
            goto LABEL_77;
          case 6:
            sub_402FE0(0);
            *(_DWORD *)(dword_41F6CC + 28) = sub_402EE0;
            sub_408880(0);
            goto LABEL_76;
          case 7:
            sub_4129B0(127);
            sub_40B350(0);
            sub_408F50(G_aData024Txt);
            goto LABEL_76;
          case 8:
            if ( *(int *)dword_41F6DC <= 1 )
              *(_DWORD *)dword_41F6DC = 2;
            byte_41F6B0 = 1;
          default:
LABEL_76:
            v35 = v36;
LABEL_77:
            dword_41F6C8 = v35;
            ++dword_41F6BC;
            break;
        }
      }
      result = sub_412180(10);
      if ( (_BYTE)result != 0 )
        return sub_4108E0();
    }
  }
  else
  {
    byte_41F6B9 = 1;
    return sub_403870(0);
  }
  return result;

  return 0;
}
#undef v36
#undef v37

int sub_40DF30(int ignored)
{
  _Alignas(16) unsigned char frame[2104] = {0};
#define v24 (*((int *)(frame + 32)))
#define v25 (*((int *)(frame + 36)))
#define v26 (*((int *)(frame + 36)))
#define v27 (*((int *)(frame + 36)))
#define v28 (*((int *)(frame + 36)))
#define v29 (*((int *)(frame + 36)))
#define v30 (*((int *)(frame + 36)))
#define v31 (*((int *)(frame + 40)))
#define v32 (*((int *)(frame + 40)))
#define v33 (*((int *)(frame + 40)))
#define v34 (*((int *)(frame + 40)))
#define v35 (*((int *)(frame + 40)))
#define v36 (*((int *)(frame + 40)))
#define v37 (*((int *)(frame + 44)))
#define v38 (*((int *)(frame + 44)))
#define v39 (*((int *)(frame + 44)))
#define v40 (*((int *)(frame + 44)))
#define v41 (*((int *)(frame + 44)))
#define v42 (*((int *)(frame + 44)))
#define v43 (*((int *)(frame + 48)))
#define v44 (*((int *)(frame + 48)))
#define v45 (*((int *)(frame + 48)))
#define v46 (*((int *)(frame + 48)))
#define v47 (*((int *)(frame + 48)))
#define v48 (*((int *)(frame + 48)))
#define hdc (*((HDC *)(frame + 52)))
#define v50 ((_DWORD *)(frame + 56))
  int v4; // eax
  int v5; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  int i; // edi
  int v10; // eax
  int v11; // ebp
  int v12; // ebx
  int v13; // eax
  int j; // edi
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  int k; // edi
  int v19; // esi
  int v20; // eax
  int result; // eax
  int v22; // esi
  HDC v23; // esi




























  sub_412090();
  sub_412870(0);
  if ( (unsigned __int8)sub_412180(9) != 0 )
  {
    dword_41F798 = 1;
    dword_41F79C = sub_40C080;
    if ( *(int *)dword_41F6DC > sub_410280(0) )
      sub_4102D0((*(int*)dword_41F6DC));
    sub_412950(0);
    sub_412870(0);
    ((void (*)(void))sub_411780)();
    sub_411760(v50);
    v4 = ((int (*)(void))sub_411780)();
    host_palette(v50);
  }
  if ( (unsigned __int8)sub_412180(10) != 0 )
    sub_4108E0();
  v24 = ((int*)sub_40B5E0(0))[19];
  ((void (*)(void))sub_411780)();
  sub_411370(0, 0, 640, 480, v24);
  v5 = sub_411780();
  host_blit(26, 220, 20, 200, 100, 0, 0);
  v6 = dword_41F6A0;
  v7 = 1;
  v8 = sub_411780();
  host_blit(24, 448, 142, 200, 100, 0, 0);
  for ( i = 384; i > 0; i -= 48 )
  {
    if ( v6 / v7 > 0 || i == 384 )
    {
      v10 = sub_411780();
      host_blit(21, i, 150, 64, 64, (v6 / v7 % 10) << 6, 0);
    }
    v7 *= 10;
  }
  v11 = dword_41F698;
  v12 = 1;
  v13 = sub_411780();
  v44 = 0;
  v38 = 0;
  v32 = 100;
  v26 = 100;
  host_blit(25, 448, 242, 100, 100, 0, 0);
  for ( j = 384; j > 0; j -= 48 )
  {
    if ( v11 / v12 > 0 || j == 384 )
    {
      v15 = sub_411780();
      host_blit(21, j, 250, 64, 64, (v11 / v12 % 10) << 6, 0);
    }
    v12 *= 10;
  }
  if ( dword_41F6E4 < 11 )
  {
    v16 = 1;
    v17 = sub_411780();
    host_blit(34, 600, 10, 32, 32, 0, 0);
    for ( k = 580; k > 540; k -= 20 )
    {
      v19 = dword_41F6E4 / v16 % 10;
      if ( dword_41F6E4 / v16 > 0 || k == 580 )
      {
        v20 = sub_411780();
        host_blit(31, k, 12, 20, 24, 20 * v19, 0);
      }
      v16 *= 10;
    }
  }
  result = sub_410280(0);
  if ( *(int *)dword_41F6DC > result )
  {
    v22 = sub_411780();
    if ( *(_BYTE *)(v22 + 1564) != 0 )
    {
      host_getdc(&hdc);
      SetBkMode(hdc, 1);
      SelectObject(hdc, *(HGDIOBJ *)(v22 + 1568));
      v23 = hdc;
      if ( hdc != NULL )
        SetTextColor(hdc, 0);
    }
    else
    {
      v23 = NULL;
    }
    if ( *(_DWORD *)dword_41F6DC == 1 )
    {
      if ( *(_BYTE *)(sub_411780() + 1564) != 0 )
        TextOutA(v23, 222, 350, G_String, strlen(G_String));
      if ( *(_BYTE *)(sub_411780() + 1564) != 0 )
        TextOutA(v23, 96, 400, byte_41E654, strlen(byte_41E654));
    }
    else
    {
      if ( *(_BYTE *)(sub_411780() + 1564) != 0 )
        TextOutA(v23, 222, 350, G_String, strlen(G_String));
      if ( *(_BYTE *)(sub_411780() + 1564) != 0 )
        TextOutA(v23, 82, 400, byte_41E630, strlen(byte_41E630));
    }
    result = sub_411780();
    if ( *(_BYTE *)(result + 1564) != 0 )
      return 0;
  }
  return result;

  return 0;
}
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28
#undef v29
#undef v30
#undef v31
#undef v32
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
#undef hdc
#undef v50

int sub_40E2D0(int ignored)
{
  _Alignas(16) unsigned char frame[2084] = {0};
#define v12 (*((int *)(frame + 32)))
#define v13 ((_BYTE *)(frame + 36))
  int v1; // eax
  _DWORD *v2; // ecx
  int v3; // edx
  int *v4; // eax
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax



  sub_412090();
  ++dword_41F85C;
  if ( (unsigned __int8)sub_412150(9) != 0 && dword_41F85C > 120 )
    byte_41F860 = 1;
  if ( (unsigned __int8)sub_412150(9) == 0 && byte_41F860 != 0 )
    byte_41F6B0 = 1;
  byte_41F6B8 = (unsigned __int8)sub_412150(11) != 0;
  if ( (unsigned __int8)sub_412180(10) != 0 )
    return sub_4108E0();
  sub_412130();
  v1 = dword_41F7BC;
  v2 = G_Block;
  while ( v2 != NULL && (v1 - (int)v2) >> 3 != 0 && *v2 == dword_41F6AC )
  {
    sub_4121B0(*((unsigned __int8 *)v2 + 4));
    v2 = G_Block;
    v3 = dword_41F7BC;
    v4 = (int *)((char *)G_Block + 8);
    if ( (char *)G_Block + 8 != (void *)dword_41F7BC )
    {
      do
      {
        v5 = *v4;
        v4 += 2;
        *v2 = v5;
        v2[1] = *(v4 - 1);
        v2 += 2;
      }
      while ( v4 != (int *)v3 );
      v3 = dword_41F7BC;
      v2 = G_Block;
    }
    v1 = v3 - 8;
    v12 = v3 - 8;
    dword_41F7BC = v3 - 8;
  }
  sub_412870(0);
  ++dword_41F6AC;
  if ( *(_DWORD *)(dword_41F6CC + 48) == 0 )
    ++dword_41F6A8;
  if ( byte_41F6B0 != 0 || *(int *)(dword_41F6CC + 44) <= 0 )
  {
    sub_412950(0);
    sub_412870(0);
    sub_412D20(0);
    byte_41F860 = 0;
    dword_41F85C = 0;
    sub_40C420(0);
    dword_41F798 = 9;
    dword_41F79C = sub_40C4A0;
    sub_411780();
    sub_411760(v13);
    v11 = sub_411780();
    return host_palette(v13);
  }
  else if ( dword_41F698 != 9999999 || byte_41F6B9 != 0 )
  {
    if ( byte_41F6BA != 0 )
    {
      byte_41F6BA = 0;
      sub_412D20(0);
      sub_412B90(G_aData000Mid, 0);
      sub_412D80(0, 31488, 238848);
      sub_412CB0(0);
      sub_412950(0);
      sub_412870(0);
      sub_40E750(0);
      return sub_40B450(0);
    }
    else
    {
      if ( byte_41F6B1 == 0 && ++dword_41F6B4 > 45 )
      {
        byte_41F6B1 = 1;
        dword_41F6B4 = 0;
        switch ( dword_41F6BC )
        {
          case -1:
            v6 = dword_41F6A8 / 600;
            v7 = rand() % (v6 + 1) + v6 + 1;
            if ( v7 > 100 )
              v7 = 100;
            v8 = rand();
            v9 = sub_401340(dword_41F6A8 / 1500 + 1, v7, v8 % 3, 6, 3, 1);
            sub_406840(dword_41F6CC, v9);
            --dword_41F6BC;
            goto LABEL_42;
          case 0:
            v9 = sub_403540(0);
            sub_404300(dword_41F6CC, v9);
            sub_408780(0);
            goto LABEL_42;
          case 1:
            v9 = sub_403A30(0);
            sub_4049A0(dword_41F6CC, v9);
            sub_408780(1);
            goto LABEL_42;
          case 2:
            v9 = sub_408330(0);
            sub_408780(2);
            goto LABEL_42;
          case 3:
            v9 = sub_407C50(0);
            sub_408780(3);
            goto LABEL_42;
          case 4:
            sub_40B350(0);
            sub_408F50(G_aData023Txt);
            *(_DWORD *)(dword_41F6CC + 28) = sub_402EE0;
            goto LABEL_41;
          case 5:
            dword_41F69C = 0;
            *(_DWORD *)(dword_41F6CC + 28) = sub_401FB0;
            *(_DWORD *)(dword_41F6CC + 44) = 3;
            sub_408DF0(0);
            sub_40B450(0);
            v9 = sub_409540(0);
            sub_406F00(dword_41F6CC, v9);
            sub_408780(4);
            goto LABEL_42;
          case 6:
            sub_402FE0(0);
            *(_DWORD *)(dword_41F6CC + 28) = sub_402EE0;
            sub_408880(0);
            goto LABEL_41;
          case 7:
            sub_4129B0(127);
            sub_40B350(0);
            sub_408F50(G_aData024Txt);
            goto LABEL_41;
          case 8:
            byte_41F6B0 = 1;
          default:
LABEL_41:
            v9 = v12;
LABEL_42:
            dword_41F6C8 = v9;
            ++dword_41F6BC;
            break;
        }
      }
      v10 = sub_411780();
      return host_blit(35, 380, 20, 250, 60, 0, 0);
    }
  }
  else
  {
    byte_41F6B9 = 1;
    return sub_403870(0);
  }

  return 0;
}
#undef v12
#undef v13

int sub_40E750(int ignored)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int result; // eax

  sub_401000(0);
  sub_4085F0(480, 100, 1);
  sub_4085F0(240, -900, 1);
  sub_4085F0(120, -700, 1);
  sub_4085F0(640, -500, 1);
  sub_4085F0(-100, -300, 1);
  sub_4085F0(300, -100, 1);
  dword_41F6CC = sub_401CC0(0);
  sub_408AE0(0);
  dword_41F68C = 640;
  dword_41F688 = 0;
  dword_41F690 = 0;
  dword_41F694 = 480;
  result = sub_408DF0(0);
  dword_41F6A8 = 0;
  byte_41F6B0 = 0;
  byte_41F6B1 = 0;
  dword_41F6C8 = 0;
  dword_41F6A4 = 0;
  byte_41F6B8 = 0;
  dword_41F6BC = 0;
  dword_41F6C4 = 99999999;
  dword_41F6B4 = 45;
  dword_41F6C0 = 1;
  return result;

  return 0;
}


int sub_40E840(int ignored)
{
  _Alignas(16) unsigned char frame[1064] = {0};
#define v23 (*((int *)(frame + 32)))
#define v24 (*((int *)(frame + 36)))
  int v0; // esi
  int v1; // edi
  int v2; // eax
  bool v3; // sf
  int v4; // ebp
  int v5; // eax
  void *v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int *i; // eax
  int v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  void *v16; // edi
  int v17; // ebx
  int v18; // ecx
  int v19; // ecx
  int *j; // eax
  int result; // eax
  int v22; // esi



  sub_412090();
  if ( (unsigned __int8)sub_412150(6) != 0 )
  {
    LOBYTE(v24) = 6;
    v23 = dword_41F6AC;
    sub_4103D0(dword_41F7BC, 1, &v23);
  }
  if ( (unsigned __int8)sub_412150(7) != 0 )
  {
    LOBYTE(v24) = 7;
    v23 = dword_41F6AC;
    sub_4103D0(dword_41F7BC, 1, &v23);
  }
  if ( (unsigned __int8)sub_412150(5) != 0 )
  {
    LOBYTE(v24) = 5;
    v23 = dword_41F6AC;
    sub_4103D0(dword_41F7BC, 1, &v23);
  }
  if ( (unsigned __int8)sub_412150(8) != 0 )
  {
    LOBYTE(v24) = 8;
    v23 = dword_41F6AC;
    sub_4103D0(dword_41F7BC, 1, &v23);
  }
  if ( (unsigned __int8)sub_412150(2) != 0 )
  {
    LOBYTE(v24) = 2;
    v23 = dword_41F6AC;
    sub_4103D0(dword_41F7BC, 1, &v23);
  }
  if ( (unsigned __int8)sub_412150(4) != 0 )
  {
    v23 = dword_41F6AC;
    LOBYTE(v24) = 4;
    v0 = dword_41F7BC;
    if ( (dword_41F7C0 - dword_41F7BC) >> 3 != 0 )
    {
      sub_410620(dword_41F7BC, dword_41F7BC, dword_41F7BC + 8);
      sub_410660(dword_41F7BC, 1 - ((dword_41F7BC - v0) >> 3), &v23);
      v9 = dword_41F7BC;
      for ( i = (int *)v0; i != (int *)v9; i += 2 )
      {
        *i = v23;
        i[1] = v24;
      }
      dword_41F7BC += 8;
    }
    else
    {
      if ( G_Block != NULL && (unsigned int)((dword_41F7BC - (int)G_Block) >> 3) > 1 )
        v1 = sub_4103A0(&unk_41F7B4);
      else
        v1 = 1;
      v2 = sub_4103A0(&unk_41F7B4);
      v3 = v1 + v2 < 0;
      v4 = v1 + v2;
      v5 = v1 + v2;
      if ( v3 )
        v5 = 0;
      v6 = malloc(8 * v5);
      v7 = sub_410620(G_Block, v0, v6);
      sub_410660(v7, 1, &v23);
      sub_410620(v0, dword_41F7BC, v7 + 8);
      nullsub_2(G_Block, dword_41F7BC);
      free(G_Block);
      dword_41F7C0 = (int)v6 + 8 * v4;
      v8 = sub_4103A0(&unk_41F7B4);
      G_Block = v6;
      dword_41F7BC = (int)v6 + 8 * v8 + 8;
    }
  }
  if ( (unsigned __int8)sub_412150(9) != 0 )
  {
    v23 = dword_41F6AC;
    LOBYTE(v24) = 9;
    v11 = dword_41F7BC;
    if ( (dword_41F7C0 - dword_41F7BC) >> 3 != 0 )
    {
      sub_410620(dword_41F7BC, dword_41F7BC, dword_41F7BC + 8);
      sub_410660(dword_41F7BC, 1 - ((dword_41F7BC - v11) >> 3), &v23);
      v19 = dword_41F7BC;
      for ( j = (int *)v11; j != (int *)v19; j += 2 )
      {
        *j = v23;
        j[1] = v24;
      }
      dword_41F7BC += 8;
    }
    else
    {
      if ( G_Block != NULL && (unsigned int)((dword_41F7BC - (int)G_Block) >> 3) > 1 )
        v12 = sub_4103A0(&unk_41F7B4);
      else
        v12 = 1;
      v13 = sub_4103A0(&unk_41F7B4);
      v3 = v12 + v13 < 0;
      v14 = v12 + v13;
      v15 = v12 + v13;
      if ( v3 )
        v15 = 0;
      v16 = malloc(8 * v15);
      v17 = sub_410620(G_Block, v11, v16);
      sub_410660(v17, 1, &v23);
      sub_410620(v11, dword_41F7BC, v17 + 8);
      nullsub_2(G_Block, dword_41F7BC);
      free(G_Block);
      dword_41F7C0 = (int)v16 + 8 * v14;
      v18 = (int)v16 + 8 * sub_4103A0(&unk_41F7B4) + 8;
      G_Block = v16;
      dword_41F7BC = v18;
    }
  }
  sub_412870(0);
  ++dword_41F6AC;
  if ( *(_DWORD *)(dword_41F6CC + 48) == 0 )
    ++dword_41F6A8;
  if ( byte_41F6B0 != 0 )
  {
    dword_41F798 = 8;
    dword_41F79C = (int (*)(void))sub_40DF30;
    sub_412950(0);
    sub_412870(0);
    sub_412D20(0);
    dword_41F6E4 = sub_40FF80(0);
    sub_40B450(0);
    *(_DWORD *)G_Buffer += dword_41F6AC / 60;
    result = *(_DWORD *)G_Buffer;
    if ( *(int *)G_Buffer > 28800 && *(int *)dword_41F6DC <= 1 )
      *(_DWORD *)dword_41F6DC = 2;
  }
  else
  {
    if ( byte_41F6B1 == 0 && ++dword_41F6B4 > 45 )
    {
      byte_41F6B1 = 1;
      dword_41F6B4 = 0;
      switch ( dword_41F6BC )
      {
        case 0:
          v22 = sub_403540(0);
          sub_404300(dword_41F6CC, v22);
          sub_408780(0);
          goto LABEL_56;
        case 1:
          v22 = sub_403A30(0);
          sub_4049A0(dword_41F6CC, v22);
          sub_408780(1);
          goto LABEL_56;
        case 2:
          v22 = sub_408330(0);
          sub_408780(2);
          goto LABEL_56;
        case 3:
          v22 = sub_407C50(0);
          sub_408780(3);
          goto LABEL_56;
        case 4:
          sub_40B350(0);
          sub_408F50(G_aData023Txt);
          *(_DWORD *)(dword_41F6CC + 28) = sub_402EE0;
          goto LABEL_55;
        case 5:
          dword_41F69C = 0;
          *(_DWORD *)(dword_41F6CC + 28) = sub_401FB0;
          *(_DWORD *)(dword_41F6CC + 44) = 3;
          dword_41F6A4 = 0;
          sub_408DF0(0);
          sub_40B450(0);
          v22 = sub_409540(0);
          sub_406F00(dword_41F6CC, v22);
          sub_408780(4);
          goto LABEL_56;
        case 6:
          sub_402FE0(0);
          *(_DWORD *)(dword_41F6CC + 28) = sub_402EE0;
          sub_408880(0);
          goto LABEL_55;
        case 7:
          sub_4129B0(127);
          sub_40B350(0);
          sub_408F50(G_aData024Txt);
          goto LABEL_55;
        case 8:
          if ( *(int *)dword_41F6DC <= 1 )
            *(_DWORD *)dword_41F6DC = 2;
          byte_41F6B0 = 1;
        default:
LABEL_55:
          v22 = v23;
LABEL_56:
          dword_41F6C8 = v22;
          ++dword_41F6BC;
          break;
      }
    }
    result = sub_412180(10);
    if ( (_BYTE)result != 0 )
      return sub_4108E0();
  }
  return result;

  return 0;
}
#undef v23
#undef v24

int sub_40EF60(int ignored)
{
  _Alignas(16) unsigned char frame[2084] = {0};
#define v9 (*((int *)(frame + 32)))
#define v10 ((_BYTE *)(frame + 36))
  int v1; // eax
  _DWORD *v2; // ecx
  int v3; // edx
  int *v4; // eax
  int v5; // esi
  int v6; // esi
  int v7; // eax
  int v8; // eax



  sub_412090();
  ++dword_41F864;
  if ( (unsigned __int8)sub_412150(9) != 0 && dword_41F864 > 120 )
    byte_41F868 = 1;
  if ( (unsigned __int8)sub_412150(9) == 0 && byte_41F868 != 0 )
    byte_41F6B0 = 1;
  byte_41F6B8 = (unsigned __int8)sub_412150(11) != 0;
  if ( (unsigned __int8)sub_412180(10) != 0 )
    return sub_4108E0();
  sub_412130();
  v1 = dword_41F7BC;
  v2 = G_Block;
  while ( v2 != NULL && (v1 - (int)v2) >> 3 != 0 && *v2 == dword_41F6AC )
  {
    sub_4121B0(*((unsigned __int8 *)v2 + 4));
    v2 = G_Block;
    v3 = dword_41F7BC;
    v4 = (int *)((char *)G_Block + 8);
    if ( (char *)G_Block + 8 != (void *)dword_41F7BC )
    {
      do
      {
        v5 = *v4;
        v4 += 2;
        *v2 = v5;
        v2[1] = *(v4 - 1);
        v2 += 2;
      }
      while ( v4 != (int *)v3 );
      v3 = dword_41F7BC;
      v2 = G_Block;
    }
    v1 = v3 - 8;
    v9 = v3 - 8;
    dword_41F7BC = v3 - 8;
  }
  sub_412870(0);
  ++dword_41F6AC;
  if ( *(_DWORD *)(dword_41F6CC + 48) == 0 )
    ++dword_41F6A8;
  if ( byte_41F6B0 != 0 || *(int *)(dword_41F6CC + 44) <= 0 )
  {
    sub_412950(0);
    sub_412870(0);
    sub_412D20(0);
    byte_41F868 = 0;
    dword_41F864 = 0;
    sub_40C420(0);
    dword_41F798 = 10;
    dword_41F79C = sub_40CA00;
    sub_411780();
    sub_411760(v10);
    v8 = sub_411780();
    return host_palette(v10);
  }
  else
  {
    if ( byte_41F6B1 == 0 && ++dword_41F6B4 > 45 )
    {
      byte_41F6B1 = 1;
      dword_41F6B4 = 0;
      switch ( dword_41F6BC )
      {
        case 0:
          v6 = sub_403540(0);
          sub_404300(dword_41F6CC, v6);
          sub_408780(0);
          goto LABEL_34;
        case 1:
          v6 = sub_403A30(0);
          sub_4049A0(dword_41F6CC, v6);
          sub_408780(1);
          goto LABEL_34;
        case 2:
          v6 = sub_408330(0);
          sub_408780(2);
          goto LABEL_34;
        case 3:
          v6 = sub_407C50(0);
          sub_408780(3);
          goto LABEL_34;
        case 4:
          sub_40B350(0);
          sub_408F50(G_aData023Txt);
          *(_DWORD *)(dword_41F6CC + 28) = sub_402EE0;
          goto LABEL_33;
        case 5:
          dword_41F69C = 0;
          *(_DWORD *)(dword_41F6CC + 28) = sub_401FB0;
          *(_DWORD *)(dword_41F6CC + 44) = 3;
          sub_408DF0(0);
          sub_40B450(0);
          v6 = sub_409540(0);
          sub_406F00(dword_41F6CC, v6);
          sub_408780(4);
          goto LABEL_34;
        case 6:
          sub_402FE0(0);
          *(_DWORD *)(dword_41F6CC + 28) = sub_402EE0;
          sub_408880(0);
          goto LABEL_33;
        case 7:
          sub_4129B0(127);
          sub_40B350(0);
          sub_408F50(G_aData024Txt);
          goto LABEL_33;
        case 8:
          byte_41F6B0 = 1;
        default:
LABEL_33:
          v6 = v9;
LABEL_34:
          dword_41F6C8 = v6;
          ++dword_41F6BC;
          break;
      }
    }
    v7 = sub_411780();
    return host_blit(35, 380, 20, 250, 60, 0, 0);
  }

  return 0;
}
#undef v9
#undef v10

int sub_40F2D0(int ignored)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int result; // eax

  dword_41F798 = 4;
  dword_41F79C = sub_40F420;
  sub_401100(0);
  sub_4085F0(480, 5, 1);
  sub_4085F0(240, -900, 1);
  sub_4085F0(120, -700, 1);
  sub_4085F0(640, -500, 1);
  sub_4085F0(-100, -300, 1);
  sub_4085F0(300, -100, 1);
  dword_41F6CC = sub_401CC0(0);
  sub_408AE0(0);
  dword_41F68C = 640;
  dword_41F688 = 0;
  dword_41F690 = 0;
  dword_41F694 = 480;
  sub_408DF0(0);
  result = dword_41F7BC;
  dword_41F698 = 0;
  dword_41F6C4 = 99999999;
  dword_41F69C = 0;
  dword_41F6A0 = 0;
  dword_41F6A8 = 0;
  dword_41F6AC = 0;
  byte_41F6B0 = 0;
  byte_41F6B1 = 0;
  dword_41F6B4 = 0;
  dword_41F6A4 = 0;
  dword_41F7B0 = 0;
  byte_41F6B8 = 0;
  byte_41F6B9 = 0;
  byte_41F6BA = 0;
  dword_41F7BC = (int)G_Block;
  dword_41F6BC = -1;
  dword_41F6C0 = 2;
  return result;

  return 0;
}


int sub_40F420(int ignored)
{
  _Alignas(16) unsigned char frame[1064] = {0};
#define v16 (*((int *)(frame + 32)))
#define v17 (*((int *)(frame + 36)))
  int v0; // esi
  int v1; // edi
  int v2; // eax
  bool v3; // sf
  int v4; // ebp
  int v5; // eax
  void *v6; // edi
  int v7; // ebx
  int v8; // ecx
  int v9; // ecx
  int *i; // eax
  int result; // eax
  int v12; // esi
  int v13; // esi
  int v14; // eax
  int v15; // esi



  sub_412090();
  if ( (unsigned __int8)sub_412150(6) != 0 )
  {
    LOBYTE(v17) = 6;
    v16 = dword_41F6AC;
    sub_4103D0(dword_41F7BC, 1, &v16);
  }
  if ( (unsigned __int8)sub_412150(7) != 0 )
  {
    LOBYTE(v17) = 7;
    v16 = dword_41F6AC;
    sub_4103D0(dword_41F7BC, 1, &v16);
  }
  if ( (unsigned __int8)sub_412150(5) != 0 )
  {
    LOBYTE(v17) = 5;
    v16 = dword_41F6AC;
    sub_4103D0(dword_41F7BC, 1, &v16);
  }
  if ( (unsigned __int8)sub_412150(8) != 0 )
  {
    LOBYTE(v17) = 8;
    v16 = dword_41F6AC;
    sub_4103D0(dword_41F7BC, 1, &v16);
  }
  if ( (unsigned __int8)sub_412150(2) != 0 )
  {
    LOBYTE(v17) = 2;
    v16 = dword_41F6AC;
    sub_4103D0(dword_41F7BC, 1, &v16);
  }
  if ( (unsigned __int8)sub_412150(4) != 0 )
  {
    LOBYTE(v17) = 4;
    v16 = dword_41F6AC;
    sub_4103D0(dword_41F7BC, 1, &v16);
  }
  if ( (unsigned __int8)sub_412150(9) != 0 )
  {
    v16 = dword_41F6AC;
    LOBYTE(v17) = 9;
    v0 = dword_41F7BC;
    if ( (dword_41F7C0 - dword_41F7BC) >> 3 != 0 )
    {
      sub_410620(dword_41F7BC, dword_41F7BC, dword_41F7BC + 8);
      sub_410660(dword_41F7BC, 1 - ((dword_41F7BC - v0) >> 3), &v16);
      v9 = dword_41F7BC;
      for ( i = (int *)v0; i != (int *)v9; i += 2 )
      {
        *i = v16;
        i[1] = v17;
      }
      dword_41F7BC += 8;
    }
    else
    {
      if ( G_Block == NULL || (unsigned int)(v1 = (dword_41F7BC - (int)G_Block) >> 3) <= 1 )
        v1 = 1;
      v2 = sub_4103A0(&unk_41F7B4);
      v3 = v1 + v2 < 0;
      v4 = v1 + v2;
      v5 = v1 + v2;
      if ( v3 )
        v5 = 0;
      v6 = malloc(8 * v5);
      v7 = sub_410620(G_Block, v0, v6);
      sub_410660(v7, 1, &v16);
      sub_410620(v0, dword_41F7BC, v7 + 8);
      nullsub_2(G_Block, dword_41F7BC);
      free(G_Block);
      dword_41F7C0 = (int)v6 + 8 * v4;
      v8 = (int)v6 + 8 * sub_4103A0(&unk_41F7B4) + 8;
      G_Block = v6;
      dword_41F7BC = v8;
    }
  }
  sub_412870(0);
  ++dword_41F6AC;
  if ( *(_DWORD *)(dword_41F6CC + 48) == 0 )
    ++dword_41F6A8;
  if ( byte_41F6B0 != 0 )
  {
    dword_41F798 = 8;
    dword_41F79C = (int (*)(void))sub_40DF30;
    sub_412950(0);
    sub_412870(0);
    sub_412D20(0);
    dword_41F6E4 = sub_410100(0);
    return sub_40B450(0);
  }
  else
  {
    if ( byte_41F6B1 == 0 && ++dword_41F6B4 > 45 )
    {
      byte_41F6B1 = 1;
      dword_41F6B4 = 0;
      v12 = dword_41F6A8 / 600;
      v13 = rand() % (v12 + 1) + v12 + 1;
      if ( v13 > 100 )
        v13 = 100;
      v14 = rand();
      v15 = sub_401340(dword_41F6A8 / 1500 + 1, v13, v14 % 3, 6, 3, 1);
      sub_406840(dword_41F6CC, v15);
      dword_41F6C8 = v15;
    }
    result = sub_412180(10);
    if ( (_BYTE)result != 0 )
      return sub_4108E0();
  }
  return result;

  return 0;
}
#undef v16
#undef v17

int sub_40F850(int ignored)
{
  _Alignas(16) unsigned char frame[2080] = {0};
#define v12 ((_BYTE *)(frame + 32))
  int v1; // eax
  _DWORD *v2; // ecx
  int v3; // edx
  int *v4; // eax
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax


  sub_412090();
  ++dword_41F86C;
  if ( (unsigned __int8)sub_412150(9) != 0 && dword_41F86C > 120 )
    byte_41F870 = 1;
  if ( (unsigned __int8)sub_412150(9) == 0 && byte_41F870 != 0 )
    byte_41F6B0 = 1;
  byte_41F6B8 = (unsigned __int8)sub_412150(11) != 0;
  if ( (unsigned __int8)sub_412180(10) != 0 )
    return sub_4108E0();
  sub_412130();
  v1 = dword_41F7BC;
  v2 = G_Block;
  while ( v2 != NULL && (v1 - (int)v2) >> 3 != 0 && *v2 == dword_41F6AC )
  {
    sub_4121B0(*((unsigned __int8 *)v2 + 4));
    v2 = G_Block;
    v3 = dword_41F7BC;
    v4 = (int *)((char *)G_Block + 8);
    if ( (char *)G_Block + 8 != (void *)dword_41F7BC )
    {
      do
      {
        v5 = *v4;
        v4 += 2;
        *v2 = v5;
        v2[1] = *(v4 - 1);
        v2 += 2;
      }
      while ( v4 != (int *)v3 );
      v3 = dword_41F7BC;
      v2 = G_Block;
    }
    v1 = v3 - 8;
    dword_41F7BC = v3 - 8;
  }
  sub_412870(0);
  ++dword_41F6AC;
  if ( *(_DWORD *)(dword_41F6CC + 48) == 0 )
    ++dword_41F6A8;
  if ( byte_41F6B0 != 0 || *(int *)(dword_41F6CC + 44) <= 0 )
  {
    sub_412950(0);
    sub_412870(0);
    sub_412D20(0);
    byte_41F870 = 0;
    dword_41F86C = 0;
    sub_40C420(0);
    dword_41F798 = 11;
    dword_41F79C = sub_40CF10;
    sub_411780();
    sub_411760(v12);
    v11 = sub_411780();
    return host_palette(v12);
  }
  else
  {
    if ( byte_41F6B1 == 0 && ++dword_41F6B4 > 45 )
    {
      byte_41F6B1 = 1;
      dword_41F6B4 = 0;
      v6 = dword_41F6A8 / 600;
      v7 = rand() % (v6 + 1) + v6 + 1;
      if ( v7 > 100 )
        v7 = 100;
      v8 = rand();
      v9 = sub_401340(dword_41F6A8 / 1500 + 1, v7, v8 % 3, 6, 3, 1);
      sub_406840(dword_41F6CC, v9);
      dword_41F6C8 = v9;
    }
    v10 = sub_411780();
    return host_blit(35, 380, 20, 250, 60, 0, 0);
  }

  return 0;
}
#undef v12

int sub_40FAD0(int Buffer)
{
  _Alignas(16) unsigned char frame[1076] = {0};
#define FileName ((CHAR *)(frame + 32))
  FILE *result; // eax
  FILE *v2; // edi
  char *v3; // esi


  wsprintfA(FileName, "save/replay%d.rep", Buffer);
  result = fopen(FileName, G_aWb);
  v2 = result;
  if ( result != NULL )
  {
    fwrite(&dword_41F7B0, 4u, 1u, result);
    if ( G_Block != NULL )
      Buffer = (dword_41F7BC - (int)G_Block) >> 3;
    else
      Buffer = 0;
    fwrite(&Buffer, 4u, 1u, v2);
    v3 = (char *)G_Block;
    if ( G_Block != (void *)dword_41F7BC )
    {
      do
      {
        fwrite(v3, 8u, 1u, v2);
        v3 += 8;
      }
      while ( v3 != (char *)dword_41F7BC );
    }
    fflush(v2);
    return (FILE *)fclose(v2);
  }
  return result;

  return 0;
}
#undef FileName

int sub_40FB90(int a1)
{
  _Alignas(16) unsigned char frame[1096] = {0};
#define Buffer (*((int *)(frame + 32)))
#define v15 (*((int *)(frame + 40)))
#define v16 (*((__int64 *)(frame + 44)))
#define FileName ((CHAR *)(frame + 52))
  FILE *v1; // edi
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  void *v8; // edi
  int v9; // ebx
  int v10; // edx
  int v11; // ecx
  _QWORD *j; // eax

  FILE *v14; // [esp+8h] [ebp-24h]



  int i; // [esp+30h] [ebp+4h]

  wsprintfA(FileName, "save/replay%d.rep", a1);
  v1 = fopen(FileName, G_Mode);
  v14 = v1;
  if ( v1 == NULL )
    return 0;
  dword_41F7BC = (int)G_Block;
  fread(&dword_41F7B0, 4u, 1u, v1);
  fread(&Buffer, 4u, 1u, v1);
  for ( i = 0; i < Buffer; ++i )
  {
    fread(&v16, 8u, 1u, v1);
    v3 = dword_41F7BC;
    if ( (dword_41F7C0 - dword_41F7BC) >> 3 != 0 )
    {
      v15 = 0;
      sub_410620(dword_41F7BC, dword_41F7BC, dword_41F7BC + 8);
      sub_410660(dword_41F7BC, 1 - ((dword_41F7BC - v3) >> 3), &v16);
      v11 = dword_41F7BC;
      for ( j = (_QWORD *)v3; j != (_QWORD *)v11; ++j )
        *j = v16;
      dword_41F7BC += 8;
    }
    else
    {
      if ( G_Block == NULL || (unsigned int)(v4 = (dword_41F7BC - (int)G_Block) >> 3) <= 1 )
        v4 = 1;
      if ( G_Block != NULL )
        v5 = (dword_41F7BC - (int)G_Block) >> 3;
      else
        v5 = 0;
      v6 = v5 + v4;
      v7 = v5 + v4;
      if ( v7 < 0 )
        v7 = 0;
      v8 = malloc(8 * v7);
      v9 = sub_410620(G_Block, v3, v8);
      sub_410660(v9, 1, &v16);
      sub_410620(v3, dword_41F7BC, v9 + 8);
      nullsub_2(G_Block, dword_41F7BC);
      free(G_Block);
      dword_41F7C0 = (int)v8 + 8 * v6;
      v10 = (int)v8 + 8 * sub_4103A0(&unk_41F7B4) + 8;
      G_Block = v8;
      v1 = v14;
      dword_41F7BC = v10;
    }
  }
  fclose(v1);
  return 1;

  return 0;
}
#undef Buffer
#undef v15
#undef v16
#undef FileName

int sub_40FE10(int ignored)
{
  _Alignas(16) unsigned char frame[1176] = {0};
#define FileName ((CHAR *)(frame + 32))
#define NewFileName ((CHAR *)(frame + 52))
#define Buffer (*((int *)(frame + 72)))
#define v13 ((_DWORD *)(frame + 76))
#define v14 (*((char *)(frame + 136)))
  int v0; // ebx
  _DWORD *v1; // eax
  int v2; // edi
  char *v3; // esi
  FILE *v4; // eax
  int v5; // ecx
  FILE *v6; // eax
  FILE *v7; // esi
  int v9; // ebx






  sub_40FF30(&Buffer);
  v0 = 0;
  v1 = v13;
  while ( dword_41F698 < *v1 )
  {
    ++v0;
    v1 += 2;
    if ( v0 >= 10 )
      goto LABEL_11;
  }
  DeleteFileA(G_aSaveReplay10Re);
  v2 = 9;
  if ( v0 < 9 )
  {
    v3 = &v14;
    do
    {
      *((_DWORD *)v3 + 3) = *((_DWORD *)v3 + 1);
      *((_DWORD *)v3 + 2) = *(_DWORD *)v3;
      wsprintfA(FileName, "save/replay%d.rep", v2);
      wsprintfA(NewFileName, "save/replay%d.rep", v2 + 1);
      v4 = fopen(FileName, G_Mode);
      if ( v4 != NULL )
      {
        fclose(v4);
        sub_414675(FileName, NewFileName);
      }
      --v2;
      v3 -= 8;
    }
    while ( v2 > v0 );
  }
  v5 = dword_41F6A0;
  v13[2 * v0] = dword_41F698;
  v13[2 * v0 - 1] = v5;
LABEL_11:
  v6 = fopen(G_aSaveScoreSav, G_aWbc);
  v7 = v6;
  if ( v6 == NULL )
    return 11;
  fwrite(&Buffer, 8u, 0xAu, v6);
  fflush(v7);
  fclose(v7);
  v9 = v0 + 1;
  if ( v9 < 11 )
    sub_40FAD0(v9);
  return v9;

  return 0;
}
#undef FileName
#undef NewFileName
#undef Buffer
#undef v13
#undef v14

int sub_40FF30(void *Buffer)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  FILE *v1; // esi
  _DWORD *result; // eax
  int i; // ecx

  v1 = fopen(G_aSaveScoreSav, G_Mode);
  if ( v1 != NULL )
  {
    fread(Buffer, 8u, 0xAu, v1);
    return (_DWORD *)fclose(v1);
  }
  else
  {
    result = Buffer;
    for ( i = 10; i != 0; --i )
    {
      *result = 0;
      result[1] = 0;
      result += 2;
    }
  }
  return result;

  return 0;
}


int sub_40FF80(int ignored)
{
  _Alignas(16) unsigned char frame[1176] = {0};
#define FileName ((CHAR *)(frame + 32))
#define NewFileName ((CHAR *)(frame + 52))
#define Buffer (*((int *)(frame + 72)))
#define v14 ((_DWORD *)(frame + 76))
#define v15 (*((char *)(frame + 136)))
  int v0; // ebp
  _DWORD *v1; // eax
  int v2; // edi
  char *v3; // esi
  int v4; // ebx
  FILE *v5; // eax
  int v6; // ecx
  FILE *v7; // eax
  FILE *v8; // esi
  int v10; // ebp






  sub_4100B0(&Buffer);
  v0 = 0;
  v1 = v14;
  while ( dword_41F698 < *v1 )
  {
    ++v0;
    v1 += 2;
    if ( v0 >= 10 )
      goto LABEL_11;
  }
  DeleteFileA(G_aSaveReplay20Re);
  if ( v0 < 9 )
  {
    v2 = 20;
    v3 = &v15;
    do
    {
      v4 = v2 - 1;
      *((_DWORD *)v3 + 3) = *((_DWORD *)v3 + 1);
      *((_DWORD *)v3 + 2) = *(_DWORD *)v3;
      wsprintfA(FileName, "save/replay%d.rep", v2 - 1);
      wsprintfA(NewFileName, "save/replay%d.rep", v2);
      v5 = fopen(FileName, G_Mode);
      if ( v5 != NULL )
      {
        fclose(v5);
        sub_414675(FileName, NewFileName);
      }
      --v2;
      v3 -= 8;
    }
    while ( v4 - 11 > v0 );
  }
  v6 = dword_41F6A0;
  v14[2 * v0] = dword_41F698;
  v14[2 * v0 - 1] = v6;
LABEL_11:
  v7 = fopen(G_aSaveDainiScore, G_aWbc);
  v8 = v7;
  if ( v7 == NULL )
    return 11;
  fwrite(&Buffer, 8u, 0xAu, v7);
  fflush(v8);
  fclose(v8);
  v10 = v0 + 1;
  if ( v10 < 11 )
    sub_40FAD0(v10 + 10);
  return v10;

  return 0;
}
#undef FileName
#undef NewFileName
#undef Buffer
#undef v14
#undef v15

int sub_4100B0(void *Buffer)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  FILE *v1; // esi
  _DWORD *result; // eax
  int i; // ecx

  v1 = fopen(G_aSaveDainiScore, G_Mode);
  if ( v1 != NULL )
  {
    fread(Buffer, 8u, 0xAu, v1);
    return (_DWORD *)fclose(v1);
  }
  else
  {
    result = Buffer;
    for ( i = 10; i != 0; --i )
    {
      *result = 0;
      result[1] = 0;
      result += 2;
    }
  }
  return result;

  return 0;
}


int sub_410100(int ignored)
{
  _Alignas(16) unsigned char frame[1176] = {0};
#define FileName ((CHAR *)(frame + 32))
#define NewFileName ((CHAR *)(frame + 52))
#define Buffer (*((int *)(frame + 72)))
#define v14 ((_DWORD *)(frame + 76))
#define v15 (*((char *)(frame + 136)))
  int v0; // ebp
  _DWORD *v1; // eax
  int v2; // edi
  char *v3; // esi
  int v4; // ebx
  FILE *v5; // eax
  int v6; // ecx
  FILE *v7; // eax
  FILE *v8; // esi
  int v10; // ebp






  sub_410230(&Buffer);
  v0 = 0;
  v1 = v14;
  while ( dword_41F698 < *v1 )
  {
    ++v0;
    v1 += 2;
    if ( v0 >= 10 )
      goto LABEL_11;
  }
  DeleteFileA(G_aSaveReplay30Re);
  if ( v0 < 9 )
  {
    v2 = 30;
    v3 = &v15;
    do
    {
      v4 = v2 - 1;
      *((_DWORD *)v3 + 3) = *((_DWORD *)v3 + 1);
      *((_DWORD *)v3 + 2) = *(_DWORD *)v3;
      wsprintfA(FileName, "save/replay%d.rep", v2 - 1);
      wsprintfA(NewFileName, "save/replay%d.rep", v2);
      v5 = fopen(FileName, G_Mode);
      if ( v5 != NULL )
      {
        fclose(v5);
        sub_414675(FileName, NewFileName);
      }
      --v2;
      v3 -= 8;
    }
    while ( v4 - 21 > v0 );
  }
  v6 = dword_41F6A0;
  v14[2 * v0] = dword_41F698;
  v14[2 * v0 - 1] = v6;
LABEL_11:
  v7 = fopen(G_aSaveEndlessSco, G_aWbc);
  v8 = v7;
  if ( v7 == NULL )
    return 11;
  fwrite(&Buffer, 8u, 0xAu, v7);
  fflush(v8);
  fclose(v8);
  v10 = v0 + 1;
  if ( v10 < 11 )
    sub_40FAD0(v10 + 20);
  return v10;

  return 0;
}
#undef FileName
#undef NewFileName
#undef Buffer
#undef v14
#undef v15

int sub_410230(void *Buffer)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  FILE *v1; // esi
  _DWORD *result; // eax
  int i; // ecx

  v1 = fopen(G_aSaveEndlessSco, G_Mode);
  if ( v1 != NULL )
  {
    fread(Buffer, 8u, 0xAu, v1);
    return (_DWORD *)fclose(v1);
  }
  else
  {
    result = Buffer;
    for ( i = 10; i != 0; --i )
    {
      *result = 0;
      result[1] = 0;
      result += 2;
    }
  }
  return result;

  return 0;
}


int sub_410280(int ignored)
{
  _Alignas(16) unsigned char frame[1060] = {0};
#define Buffer (*((int *)(frame + 32)))
  FILE *result; // eax
  FILE *v1; // esi


  result = fopen(G_FileName, G_Mode);
  v1 = result;
  if ( result != NULL )
  {
    Buffer = 0;
    fread(&Buffer, 4u, 1u, result);
    fclose(v1);
    return (FILE *)Buffer;
  }
  return result;

  return 0;
}
#undef Buffer

int sub_4102D0(char Buffer)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  FILE *result; // eax
  FILE *v2; // esi

  result = fopen(G_FileName, G_aWb);
  v2 = result;
  if ( result != NULL )
  {
    fwrite(&Buffer, 4u, 1u, result);
    return (FILE *)fclose(v2);
  }
  return result;

  return 0;
}


int sub_410310(int ignored)
{
  _Alignas(16) unsigned char frame[1060] = {0};
#define Buffer (*((int *)(frame + 32)))
  FILE *result; // eax
  FILE *v1; // esi


  result = fopen(G_FileName, G_Mode);
  v1 = result;
  if ( result != NULL )
  {
    fseek(result, 4, 0);
    fread(&Buffer, 4u, 1u, v1);
    fclose(v1);
    return (FILE *)Buffer;
  }
  return result;

  return 0;
}
#undef Buffer

int sub_410360(char Buffer)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  FILE *result; // eax
  FILE *v2; // esi

  result = fopen(G_FileName, G_Mode);
  v2 = result;
  if ( result != NULL )
  {
    fseek(result, 4, 0);
    fwrite(&Buffer, 4u, 1u, v2);
    return (FILE *)fclose(v2);
  }
  return result;

  return 0;
}


int sub_4103A0(_DWORD *this)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // edx

  v1 = *(this + 1);
  if ( v1 != 0 )
    return (*(this + 2) - v1) >> 3;
  else
    return 0;

  return 0;
}


int sub_412770(int ignored)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int *v0; // ecx
  int *v1; // eax

  v0 = dword_4A85D8;
  v1 = (int *)&unk_4205D8;
  do
  {
    *v0 = (int)v1;
    v1 += 136;
    ++v0;
  }
  while ( (int)v1 < (int)dword_4A85D8 );
  dword_4A95D8 = 2;
  dword_4A95DC = 0;
  dword_4A95E0 = (int)&unk_4205D8;
  dword_4A95E4 = (int)&unk_4207F8;
  *(_DWORD *)(dword_4A85D8[0] + 28) = 0;
  *(_DWORD *)dword_4A85D8[0] = -1;
  *(_DWORD *)(dword_4A85D8[0] + 4) = 0;
  *(_BYTE *)(dword_4A85D8[0] + 24) = 0;
  *(_DWORD *)(dword_4A85D8[0] + 12) = 0;
  *(_DWORD *)(dword_4A85D8[0] + 20) = dword_4A95E4;
  *(_DWORD *)(dword_4A85D8[0] + 16) = 0;
  *(_BYTE *)(dword_4A85D8[0] + 32) = 0;
  *(_DWORD *)(dword_4A85DC + 28) = 0;
  *(_DWORD *)dword_4A85DC = 1000000;
  *(_DWORD *)(dword_4A85DC + 4) = 0;
  *(_BYTE *)(dword_4A85DC + 24) = 0;
  *(_DWORD *)(dword_4A85DC + 12) = 0;
  *(_DWORD *)(dword_4A85DC + 20) = 0;
  *(_DWORD *)(dword_4A85DC + 16) = dword_4A95E0;
  *(_BYTE *)(dword_4A85DC + 32) = 0;
  return 0;

  return 0;
}


int sub_412870(int ignored)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  _DWORD *v0; // esi
  int v1; // edi
  int i; // ebx
  int v3; // eax
  int ( *v4)(_DWORD *); // eax

  v0 = *(_DWORD **)(dword_4A95E0 + 20);
  v1 = 0;
  for ( i = dword_4A95E4; v0 != (_DWORD *)i; ++v1 )
  {
    v3 = v0[2];
    if ( v3 > 0 )
      v0[2] = v3 - 1;
    v4 = (int ( *)(_DWORD *))v0[7];
    if ( v4 != NULL )
      v4(v0);
    v0 = (_DWORD *)v0[5];
  }
  sub_412A30(0);
  return v1;

  return 0;
}


int sub_4128C0(const void *a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // ebx
  _DWORD *v2; // edx
  int result; // eax

  v1 = dword_4A95E4;
  v2 = *(_DWORD **)(dword_4A95E0 + 20);
  if ( dword_4A95D8 != dword_4A95DC )
  {
    qmemcpy((void *)dword_4A85D8[dword_4A95D8], a1, 544);
    result = dword_4A85D8[dword_4A95D8];
    if ( *(_DWORD *)result < *v2 )
    {
LABEL_5:
      *(_DWORD *)(v2[4] + 20) = result;
      *(_DWORD *)(result + 16) = v2[4];
      *(_DWORD *)(result + 20) = v2;
      v2[4] = result;
      *(_BYTE *)(result + 24) = 0;
      dword_4A95D8 = (dword_4A95D8 + 1) % 1024;
      return result;
    }
    while ( v2 != (_DWORD *)v1 )
    {
      v2 = (_DWORD *)v2[5];
      if ( *(_DWORD *)result < *v2 )
        goto LABEL_5;
    }
  }
  return 0;

  return 0;
}


int sub_412950(int ignored)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v0; // ecx
  int result; // eax

  v0 = dword_4A95E4;
  result = *(_DWORD *)(dword_4A95E0 + 20);
  if ( result != dword_4A95E4 )
  {
    do
    {
      *(_BYTE *)(result + 24) = 1;
      result = *(_DWORD *)(result + 20);
    }
    while ( result != v0 );
  }
  return result;

  return 0;
}


int sub_412970(int a1, int a2)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  _DWORD *result; // eax
  int i; // esi

  result = *(_DWORD **)(dword_4A95E0 + 20);
  for ( i = dword_4A95E4; result != (_DWORD *)i; result = (_DWORD *)result[5] )
  {
    if ( *result > a1 )
      break;
    if ( (*result & a1) != 0 )
      result[2] = a2;
  }
  return result;

  return 0;
}


int sub_4129B0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // esi
  _DWORD *result; // eax

  v1 = dword_4A95E4;
  result = *(_DWORD **)(dword_4A95E0 + 20);
  if ( result != (_DWORD *)dword_4A95E4 )
  {
    do
    {
      if ( *result > a1 )
        break;
      if ( (*result & a1) != 0 )
        result[2] = 999999999;
      result = (_DWORD *)result[5];
    }
    while ( result != (_DWORD *)v1 );
  }
  return result;

  return 0;
}


int sub_4129F0(int a1)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v1; // esi
  _DWORD *result; // eax

  v1 = dword_4A95E4;
  result = *(_DWORD **)(dword_4A95E0 + 20);
  if ( result != (_DWORD *)dword_4A95E4 )
  {
    do
    {
      if ( *result > a1 )
        break;
      if ( (*result & a1) != 0 )
        result[2] = 0;
      result = (_DWORD *)result[5];
    }
    while ( result != (_DWORD *)v1 );
  }
  return result;

  return 0;
}


int sub_412A30(int ignored)
{
  _Alignas(16) unsigned char frame[1056] = {0};

  int v0; // ecx
  int result; // eax

  v0 = dword_4A95E4;
  result = *(_DWORD *)(dword_4A95E0 + 20);
  if ( result != dword_4A95E4 )
  {
    do
    {
      if ( *(_BYTE *)(result + 24) != 0 )
      {
        *(_DWORD *)(*(_DWORD *)(result + 16) + 20) = *(_DWORD *)(result + 20);
        *(_DWORD *)(*(_DWORD *)(result + 20) + 16) = *(_DWORD *)(result + 16);
        dword_4A85D8[dword_4A95DC] = result;
        dword_4A95DC = (dword_4A95DC + 1) % 1024;
      }
      result = *(_DWORD *)(result + 20);
    }
    while ( result != v0 );
  }
  return result;

  return 0;
}


int web_callback(int ptr){
if(ptr==(int)sub_401000)return 0x401000;
if(ptr==(int)sub_401040)return 0x401040;
if(ptr==(int)sub_401100)return 0x401100;
if(ptr==(int)sub_401140)return 0x401140;
if(ptr==(int)sub_401210)return 0x401210;
if(ptr==(int)sub_401250)return 0x401250;
if(ptr==(int)sub_401340)return 0x401340;
if(ptr==(int)sub_401530)return 0x401530;
if(ptr==(int)sub_4015C0)return 0x4015C0;
if(ptr==(int)sub_401620)return 0x401620;
if(ptr==(int)sub_4017E0)return 0x4017E0;
if(ptr==(int)sub_401850)return 0x401850;
if(ptr==(int)sub_4019D0)return 0x4019D0;
if(ptr==(int)sub_401BC0)return 0x401BC0;
if(ptr==(int)sub_401C80)return 0x401C80;
if(ptr==(int)sub_401CC0)return 0x401CC0;
if(ptr==(int)sub_401FB0)return 0x401FB0;
if(ptr==(int)sub_4021D0)return 0x4021D0;
if(ptr==(int)sub_4022D0)return 0x4022D0;
if(ptr==(int)sub_402390)return 0x402390;
if(ptr==(int)sub_402450)return 0x402450;
if(ptr==(int)sub_4024F0)return 0x4024F0;
if(ptr==(int)sub_402590)return 0x402590;
if(ptr==(int)sub_402670)return 0x402670;
if(ptr==(int)sub_402770)return 0x402770;
if(ptr==(int)sub_402820)return 0x402820;
if(ptr==(int)sub_4028F0)return 0x4028F0;
if(ptr==(int)sub_402A80)return 0x402A80;
if(ptr==(int)sub_402B60)return 0x402B60;
if(ptr==(int)sub_402C30)return 0x402C30;
if(ptr==(int)sub_402D40)return 0x402D40;
if(ptr==(int)sub_402E00)return 0x402E00;
if(ptr==(int)sub_402EE0)return 0x402EE0;
if(ptr==(int)sub_402F90)return 0x402F90;
if(ptr==(int)sub_402FD0)return 0x402FD0;
if(ptr==(int)sub_402FE0)return 0x402FE0;
if(ptr==(int)sub_403040)return 0x403040;
if(ptr==(int)sub_4030C0)return 0x4030C0;
if(ptr==(int)sub_403110)return 0x403110;
if(ptr==(int)sub_4031C0)return 0x4031C0;
if(ptr==(int)sub_4032A0)return 0x4032A0;
if(ptr==(int)sub_403320)return 0x403320;
if(ptr==(int)sub_4033F0)return 0x4033F0;
if(ptr==(int)sub_403470)return 0x403470;
if(ptr==(int)sub_403540)return 0x403540;
if(ptr==(int)sub_403610)return 0x403610;
if(ptr==(int)sub_403690)return 0x403690;
if(ptr==(int)sub_4036F0)return 0x4036F0;
if(ptr==(int)sub_403870)return 0x403870;
if(ptr==(int)sub_4038E0)return 0x4038E0;
if(ptr==(int)sub_403980)return 0x403980;
if(ptr==(int)sub_4039D0)return 0x4039D0;
if(ptr==(int)sub_403A30)return 0x403A30;
if(ptr==(int)sub_403B70)return 0x403B70;
if(ptr==(int)sub_403BD0)return 0x403BD0;
if(ptr==(int)sub_403D60)return 0x403D60;
if(ptr==(int)sub_403DB0)return 0x403DB0;
if(ptr==(int)sub_403E20)return 0x403E20;
if(ptr==(int)sub_403ED0)return 0x403ED0;
if(ptr==(int)sub_403F50)return 0x403F50;
if(ptr==(int)sub_403FC0)return 0x403FC0;
if(ptr==(int)sub_4040B0)return 0x4040B0;
if(ptr==(int)sub_404170)return 0x404170;
if(ptr==(int)sub_404270)return 0x404270;
if(ptr==(int)sub_404300)return 0x404300;
if(ptr==(int)sub_404350)return 0x404350;
if(ptr==(int)sub_404870)return 0x404870;
if(ptr==(int)sub_4049A0)return 0x4049A0;
if(ptr==(int)sub_404A00)return 0x404A00;
if(ptr==(int)sub_404F30)return 0x404F30;
if(ptr==(int)sub_404FB0)return 0x404FB0;
if(ptr==(int)sub_4050F0)return 0x4050F0;
if(ptr==(int)sub_405140)return 0x405140;
if(ptr==(int)sub_405440)return 0x405440;
if(ptr==(int)sub_405490)return 0x405490;
if(ptr==(int)sub_405A00)return 0x405A00;
if(ptr==(int)sub_405B10)return 0x405B10;
if(ptr==(int)sub_405B60)return 0x405B60;
if(ptr==(int)sub_405F20)return 0x405F20;
if(ptr==(int)sub_405F70)return 0x405F70;
if(ptr==(int)sub_406590)return 0x406590;
if(ptr==(int)sub_4065E0)return 0x4065E0;
if(ptr==(int)sub_406840)return 0x406840;
if(ptr==(int)sub_406890)return 0x406890;
if(ptr==(int)sub_406DC0)return 0x406DC0;
if(ptr==(int)sub_406E20)return 0x406E20;
if(ptr==(int)sub_406F00)return 0x406F00;
if(ptr==(int)sub_406F60)return 0x406F60;
if(ptr==(int)sub_4074A0)return 0x4074A0;
if(ptr==(int)sub_407520)return 0x407520;
if(ptr==(int)sub_407640)return 0x407640;
if(ptr==(int)sub_407690)return 0x407690;
if(ptr==(int)sub_407990)return 0x407990;
if(ptr==(int)sub_407A20)return 0x407A20;
if(ptr==(int)sub_407C50)return 0x407C50;
if(ptr==(int)sub_407D40)return 0x407D40;
if(ptr==(int)sub_407E30)return 0x407E30;
if(ptr==(int)sub_407EF0)return 0x407EF0;
if(ptr==(int)sub_4080A0)return 0x4080A0;
if(ptr==(int)sub_408160)return 0x408160;
if(ptr==(int)sub_4081B0)return 0x4081B0;
if(ptr==(int)sub_408230)return 0x408230;
if(ptr==(int)sub_4082C0)return 0x4082C0;
if(ptr==(int)sub_408330)return 0x408330;
if(ptr==(int)sub_408390)return 0x408390;
if(ptr==(int)sub_408440)return 0x408440;
if(ptr==(int)sub_4084F0)return 0x4084F0;
if(ptr==(int)sub_4085F0)return 0x4085F0;
if(ptr==(int)sub_408660)return 0x408660;
if(ptr==(int)sub_4086E0)return 0x4086E0;
if(ptr==(int)sub_408720)return 0x408720;
if(ptr==(int)sub_408780)return 0x408780;
if(ptr==(int)sub_4087F0)return 0x4087F0;
if(ptr==(int)sub_408880)return 0x408880;
if(ptr==(int)sub_4088D0)return 0x4088D0;
if(ptr==(int)sub_408920)return 0x408920;
if(ptr==(int)sub_4089F0)return 0x4089F0;
if(ptr==(int)sub_408AE0)return 0x408AE0;
if(ptr==(int)sub_408B20)return 0x408B20;
if(ptr==(int)sub_408C10)return 0x408C10;
if(ptr==(int)sub_408D80)return 0x408D80;
if(ptr==(int)sub_408DF0)return 0x408DF0;
if(ptr==(int)sub_408E80)return 0x408E80;
if(ptr==(int)sub_408F50)return 0x408F50;
if(ptr==(int)sub_4090C0)return 0x4090C0;
if(ptr==(int)sub_409220)return 0x409220;
if(ptr==(int)sub_4092D0)return 0x4092D0;
if(ptr==(int)sub_409370)return 0x409370;
if(ptr==(int)sub_4093E0)return 0x4093E0;
if(ptr==(int)sub_409470)return 0x409470;
if(ptr==(int)sub_409540)return 0x409540;
if(ptr==(int)sub_4095C0)return 0x4095C0;
if(ptr==(int)sub_409760)return 0x409760;
if(ptr==(int)sub_4099D0)return 0x4099D0;
if(ptr==(int)sub_409BC0)return 0x409BC0;
if(ptr==(int)sub_409E70)return 0x409E70;
if(ptr==(int)sub_40A0A0)return 0x40A0A0;
if(ptr==(int)sub_40A2E0)return 0x40A2E0;
if(ptr==(int)sub_40A5F0)return 0x40A5F0;
if(ptr==(int)sub_40A850)return 0x40A850;
if(ptr==(int)sub_40AA30)return 0x40AA30;
if(ptr==(int)sub_40AA80)return 0x40AA80;
if(ptr==(int)sub_40AAE0)return 0x40AAE0;
if(ptr==(int)sub_40AC20)return 0x40AC20;
if(ptr==(int)sub_40ACB0)return 0x40ACB0;
if(ptr==(int)sub_40AD50)return 0x40AD50;
if(ptr==(int)sub_40AFA0)return 0x40AFA0;
if(ptr==(int)sub_40B030)return 0x40B030;
if(ptr==(int)sub_40B0C0)return 0x40B0C0;
if(ptr==(int)sub_40B2C0)return 0x40B2C0;
if(ptr==(int)sub_40B350)return 0x40B350;
if(ptr==(int)sub_40B390)return 0x40B390;
if(ptr==(int)sub_40B450)return 0x40B450;
if(ptr==(int)sub_40B490)return 0x40B490;
if(ptr==(int)sub_40B560)return 0x40B560;
if(ptr==(int)sub_40B5E0)return 0x40B5E0;
if(ptr==(int)sub_40C080)return 0x40C080;
if(ptr==(int)sub_40C420)return 0x40C420;
if(ptr==(int)sub_40C4A0)return 0x40C4A0;
if(ptr==(int)sub_40CA00)return 0x40CA00;
if(ptr==(int)sub_40CF10)return 0x40CF10;
if(ptr==(int)sub_40D410)return 0x40D410;
if(ptr==(int)sub_40D560)return 0x40D560;
if(ptr==(int)sub_40DF30)return 0x40DF30;
if(ptr==(int)sub_40E2D0)return 0x40E2D0;
if(ptr==(int)sub_40E750)return 0x40E750;
if(ptr==(int)sub_40E840)return 0x40E840;
if(ptr==(int)sub_40EF60)return 0x40EF60;
if(ptr==(int)sub_40F2D0)return 0x40F2D0;
if(ptr==(int)sub_40F420)return 0x40F420;
if(ptr==(int)sub_40F850)return 0x40F850;
if(ptr==(int)sub_40FAD0)return 0x40FAD0;
if(ptr==(int)sub_40FB90)return 0x40FB90;
if(ptr==(int)sub_40FE10)return 0x40FE10;
if(ptr==(int)sub_40FF30)return 0x40FF30;
if(ptr==(int)sub_40FF80)return 0x40FF80;
if(ptr==(int)sub_4100B0)return 0x4100B0;
if(ptr==(int)sub_410100)return 0x410100;
if(ptr==(int)sub_410230)return 0x410230;
if(ptr==(int)sub_410280)return 0x410280;
if(ptr==(int)sub_4102D0)return 0x4102D0;
if(ptr==(int)sub_410310)return 0x410310;
if(ptr==(int)sub_410360)return 0x410360;
if(ptr==(int)sub_4103A0)return 0x4103A0;
if(ptr==(int)sub_412770)return 0x412770;
if(ptr==(int)sub_412870)return 0x412870;
if(ptr==(int)sub_4128C0)return 0x4128C0;
if(ptr==(int)sub_412950)return 0x412950;
if(ptr==(int)sub_412970)return 0x412970;
if(ptr==(int)sub_4129B0)return 0x4129B0;
if(ptr==(int)sub_4129F0)return 0x4129F0;
if(ptr==(int)sub_412A30)return 0x412A30;
return 0;}
