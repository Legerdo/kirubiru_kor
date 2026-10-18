int sub_407C50()
{
  int v0; // esi
  int v1; // ebx
  _DWORD *v2; // edi
  int v3; // eax
  int v5; // [esp+10h] [ebp-22Ch]
  int v6; // [esp+14h] [ebp-228h]
  int v7; // [esp+18h] [ebp-224h]
  _DWORD v8[136]; // [esp+1Ch] [ebp-220h] BYREF

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
  v1 = sub_4128C0(a1: v8);
  v2 = (_DWORD *)(v1 + 36);
  do
  {
    v3 = sub_407D40(a1: v1, a2: v0);
    *v2 = v3;
    ++v0;
    ++v2;
    *(_DWORD *)(v3 + 8) = 180;
  }
  while ( v0 < 3 );
  sub_403D60();
  return v1;
}