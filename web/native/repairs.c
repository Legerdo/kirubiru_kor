#include "platform.h"
#include "globals.h"
#include "prototypes.h"
// Small callbacks whose original mixed x87 paths could not be decompiled.
// Each implementation is transcribed from its retained .asm, not inferred play.
#define I(a,o) (*(int*)((a)+(o)))
#define B(a,o) (*(_BYTE*)((a)+(o)))
#define F(a,o) (*(float*)((a)+(o)))
int sub_401920(int a){
 if(I(a,8)>0)return 0;int p=I(a,12)+32;
 if(F(p,36)<-2.0f){if(B(a,40))F(a,32)=F(p,32)-250.0f;else{F(a,32)+=F(a,36);F(a,36)-=0.4f;if(F(p,32)-250.0f<F(a,32))B(a,40)=1;}}
 else{B(a,40)=0;F(a,36)=0;I(a,28)=(int)sub_401850;}
 dword_41F690=(int)F(a,32);dword_41F694=dword_41F690+480;return 0;
}
int sub_401A70(int a){
 sub_4129B0(127);if(I(a,44)<4){I(a,44)++;dword_41F690+=20;if(dword_41F690>0)dword_41F690=0;dword_41F694=dword_41F690+480;}
 if(B(a,48)){if(dword_41F690>I(a,52)){dword_41F690-=20;dword_41F694=dword_41F690+480;return 0;}B(a,48)=0;dword_41F690=I(a,52);dword_41F694=dword_41F690+480;return 0;}
 if(I(a,40)<20){I(a,40)++;return 0;}
 if(dword_41F690<I(a,36)){dword_41F690+=40;dword_41F694=dword_41F690+480;if(dword_41F690>0){dword_41F690=0;B(a,24)=1;}else return 0;}
 else{B(a,24)=1;dword_41F690=I(a,36);}dword_41F694=dword_41F690+480;sub_4129F0(127);return 0;
}
int sub_404100(int a){if(++I(a,40)>3){B(a,24)=1;return 0;}for(int i=-200;i<200;i+=50){int k=native_rand()%3,y=I(a,36)+native_rand()%120,x=I(a,32)-native_rand()%20+i;sub_404170(x,y,k);}return 0;}
int sub_4080F0(int a){if(++I(a,40)>3){B(a,24)=1;return 0;}for(int i=0;i<160;i+=20){int k=native_rand()%2+1,y=I(a,36)+native_rand()%60,x=I(a,32)+native_rand()%10+i-20;sub_404170(x,y,k);}return 0;}
static void special_hit(int y){dword_41F69C++;sub_413610(native_rand()%3);if(dword_41F69C>999)dword_41F69C=999;sub_403110(186,y-dword_41F690-30);}
int sub_4048D0(int a){int p=I(a,32),b=I(a,36);if(B(p,24)){B(a,24)=1;return 0;}if(B(b,24)){byte_41F6B1=0;dword_41F6C8=0;B(a,24)=1;return 0;}int y=I(b,32)+120*I(b,48);if(I(p,36)+150<y&&!B(b,52)){I(b,60)=5;B(b,52)=1;I(b,56)=1;special_hit(y);}return 0;}
int sub_405A60(int a){int p=I(a,32),b=I(a,36);if(B(p,24)||B(b,24)){B(a,24)=1;return 0;}int y=I(b,32)+120;if(I(p,36)+150<y&&!B(b,60)){B(b,60)=1;I(b,56)=0;special_hit(y);}return 0;}
int sub_407CE0(int a){if(I(a,8)>0)return 0;if(I(a,32)>0){I(a,32)--;return 0;}for(int i=0;i<3;i++)if(I(I(a,36+4*i),40))return 0;B(a,24)=1;byte_41F6B1=0;dword_41F6C8=0;return 0;}
int sub_407DB0(int a){int p=I(a,12);if(B(p,24)){B(a,24)=1;return 0;}if(I(a,8)>0)return 0;if(--I(a,44)<0&&I(p,32)>0){I(a,40)++;int item=sub_407E30(a,I(a,48)),old=I(a,32);if(old){I(old,68)=item;sub_408160(item,old);I(a,32)=item;}else I(a,32)=I(a,36)=item;I(a,44)=native_rand()%100+30;}return 0;}
