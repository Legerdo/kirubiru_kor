int sub_412770()
{
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
}