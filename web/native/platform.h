#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdarg.h>
#include <unistd.h>
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
// Recovered game words are signed coordinates/counters. Explicit unsigned
// casts in the retained analysis remain unsigned at their original sites.
typedef int32_t _DWORD;
typedef unsigned short _WORD;
typedef unsigned char _BYTE;
typedef unsigned long long _QWORD;
typedef int BOOL;
typedef char CHAR;
typedef int HDC;
typedef int HFONT;
typedef int HGDIOBJ;
typedef const char *LPCSTR;
typedef const char *LPCCH;
#define qmemcpy memcpy
#define abs32 abs
#define LOBYTE(x) (*((unsigned char *)&(x)))
#define LODWORD(x) (*((unsigned int *)&(x)))
#define LOWORD(x) (*((unsigned short *)&(x)))
#define HIDWORD(x) (*((unsigned int *)&(x)+1))
#define hostfn __attribute__((import_module("game")))
hostfn int host_blit(int id,int x,int y,int w,int h,int sx,int sy);
hostfn int host_rect(int x,int y,int w,int h,int color);
hostfn int host_clear(int color);
hostfn int host_palette(const void *palette);
hostfn int host_getdc(int *out);
hostfn int host_sound(int id);
hostfn int host_music(int action,int start,int end);
hostfn int host_text(int x,int y,const char *s,int len,int color);
hostfn int host_read_file(const char *name,void *out,int capacity);
extern unsigned char image[0x8d700];
int sub_411780(void);
int sub_411370(int x,int y,int w,int h,int color);
int sub_411410(int color);
int sub_411760(void *palette);
int sub_412090();
int sub_412130();
int sub_412150(int key);
int sub_412180(int key);
int sub_4121B0(int key);
int sub_4121D0(int device,int key,int code);
int sub_412B90(const char *path,int slot);
int sub_412CB0(int slot);
int sub_412D20(int slot);
int sub_412D80(int slot,int start,int end);
int sub_413610(int id);
int sub_413F09(int seed);
int sub_4108E0();
int sub_4103D0(int end,int count,const void *item);
int sub_410620(int start,int end,int target);
int sub_410660(int start,int count,const void *item);
int nullsub_2(int start,int end);
int sub_414675(const char *oldname,const char *newname);
int DeleteFileA(const char *name);
int SetBkMode(int hdc,int mode);
int SelectObject(int hdc,int object);
int SetTextColor(int hdc,int color);
int TextOutA(int hdc,int x,int y,const char *s,int n);
int wsprintfA(char *out,const char *fmt,...);
int native_rand(void);
#define rand native_rand
int sub_401920(int);
int sub_401A70(int);
int sub_404100(int);
int sub_4048D0(int);
int sub_405A60(int);
int sub_407CE0(int);
int sub_407DB0(int);
int sub_4080F0(int);
