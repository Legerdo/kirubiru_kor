#include "platform.h"
#include "globals.h"
#include "prototypes.h"
_Alignas(16) unsigned char image[0x8d700];
static int graphics[400];
static unsigned char physical[256],held[256],previous[256];
static unsigned int rng=1;
static int music_start,music_end,music_second,text_color=0xffffff;
static unsigned char base_palette[1024];

int sub_411780(){return (int)graphics;}
int sub_411370(int x,int y,int w,int h,int color){return host_rect(x,y,w,h,color);}
int sub_411410(int color){return color;}
int sub_411760(void *p){memcpy(p,base_palette,1024);return 0;}
int sub_412090(){memcpy(previous,held,256);memcpy(held,physical,256);return 0;}
int sub_412130(){memset(held,0,256);return 0;}
int sub_412150(int key){return held[key]!=0;}
int sub_412180(int key){return held[key]&&!previous[key];}
int sub_4121B0(int key){held[key]=128;return 0;}
int sub_4121D0(int device,int key,int code){return 0;}
int sub_412B90(const char *p,int slot){music_second=strstr(p,"data")!=NULL;return 0;}
int sub_412D80(int slot,int start,int end){music_start=start;music_end=end;return 0;}
int sub_412CB0(int slot){return host_music(music_second+1,music_start,music_end);}
int sub_412D20(int slot){return host_music(0,0,0);}
int sub_413610(int id){return host_sound(id);}
int sub_413F09(int seed){rng=(unsigned)seed;return seed;}
int native_rand(void){rng=rng*214013u+2531011u;return (rng>>16)&32767;}
int sub_4108E0(){
 sub_412950(0);sub_412A30(0);dword_41F798=1;dword_41F79C=(int)sub_40C080;
 byte_41E058=1;dword_41F838=0;dword_41F844=0;dword_41F84C=0;dword_41F854=0;
 host_palette(base_palette);host_music(0,0,0);return 0;
}
int SetBkMode(int hdc,int mode){return 0;}
int SelectObject(int hdc,int object){return 0;}
int SetTextColor(int hdc,int color){text_color=color;return color;}
int TextOutA(int hdc,int x,int y,const char *s,int n){return host_text(x,y,s,n,text_color);}
int wsprintfA(char *out,const char *fmt,...){va_list ap;va_start(ap,fmt);int n=vsprintf(out,fmt,ap);va_end(ap);return n;}
int DeleteFileA(const char *name){return remove(name)==0;}
int sub_414675(const char *a,const char *b){return rename(a,b)==0;}
int nullsub_2(int a,int b){return 0;}
int sub_410620(int start,int end,int dst){memmove((void*)dst,(void*)start,end-start);return dst+end-start;}
int sub_410660(int start,int count,const void *item){for(int i=0;i<count;i++)memcpy((void*)(start+i*8),item,8);return start+count*8;}
int sub_4103D0(int end,int count,const void *item){
 int size=(dword_41F7BC-(int)G_Block)/8,cap=(dword_41F7C0-(int)G_Block)/8;
 int at=(end-(int)G_Block)/8;if(size+count>cap){cap=cap*2;if(cap<size+count)cap=size+count;G_Block=realloc(G_Block,cap*8);dword_41F7BC=(int)G_Block+size*8;dword_41F7C0=(int)G_Block+cap*8;}
 memmove((char*)G_Block+(at+count)*8,(char*)G_Block+at*8,(size-at)*8);
 for(int i=0;i<count;i++)memcpy((char*)G_Block+(at+i)*8,item,8);
 dword_41F7BC+=count*8;return dword_41F7BC;
}
int web_data(){return (int)image;}
int web_init(){
 #include "relocations.h"
 memset(graphics,0,sizeof(graphics));*((unsigned char*)graphics+1564)=1;
 unsigned char palette_bmp[1084];host_read_file("image/game.pal",palette_bmp,1084);memcpy(base_palette,palette_bmp+54,1024);
 *(int*)(image+0x36d0)=0xFE9656;*(int*)(image+0x36d4)=0x2020A0;*(int*)(image+0x36d8)=0x343434;
 sub_412770(0);sub_40B560(0);
 *(_DWORD*)dword_41F6DC=sub_410280(0);*(_DWORD*)G_Buffer=sub_410310(0);
 dword_41F798=1;dword_41F79C=(int)sub_40C080;return 0;
}
int web_step(){return ((int(*)(int))dword_41F79C)(0);}
int web_input(int key,int down){if(key>=0&&key<256)physical[key]=down?128:0;return 0;}
int web_state(){return (int)(image+0x3688);}
int web_seed(int seed){return sub_413F09(seed);}
int web_read(int addr){return *(int*)(image+(addr-0x41c000));}
int web_write(int addr,int value){*(int*)(image+(addr-0x41c000))=value;return value;}
int web_reset(){return sub_4108E0();}
int web_tasks(){int n=0;int t=*(int*)(dword_4A95E0+20);while(t!=dword_4A95E4&&n<1024){n++;t=*(int*)(t+20);}return n;}
