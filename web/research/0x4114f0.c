int __thiscall sub_4114F0(void *this, int a2, LPCSTR lpFileName, int a4, int a5)
{
  LPCSTR v5; // ebp
  HANDLE FileA; // esi
  int v8; // esi
  _WORD Buffer[8]; // [esp+10h] [ebp-38h] BYREF
  unsigned int v11; // [esp+20h] [ebp-28h] BYREF
  int v12; // [esp+24h] [ebp-24h]
  int v13; // [esp+28h] [ebp-20h]
  int v14; // [esp+30h] [ebp-18h]

  v5 = lpFileName;
  FileA = CreateFileA(
            lpFileName,
            dwDesiredAccess: 0x80000000,
            dwShareMode: 1u,
            lpSecurityAttributes: nullptr,
            dwCreationDisposition: 3u,
            dwFlagsAndAttributes: 0x80u,
            hTemplateFile: nullptr);
  if ( FileA != (HANDLE)-1 )
  {
    if ( ReadFile(
           hFile: FileA,
           lpBuffer: Buffer,
           nNumberOfBytesToRead: 0xEu,
           lpNumberOfBytesRead: (LPDWORD)&lpFileName,
           lpOverlapped: nullptr)
      && lpFileName == (LPCSTR)14
      && Buffer[0] == 19778
      && ReadFile(
           hFile: FileA,
           lpBuffer: &v11,
           nNumberOfBytesToRead: 0x28u,
           lpNumberOfBytesRead: (LPDWORD)&lpFileName,
           lpOverlapped: nullptr)
      && v11 >= 0x28
      && v14 == 0 )
    {
      CloseHandle(hObject: FileA);
      v8 = (*(int (__thiscall **)(void *, int, int, int, int))(*(_DWORD *)this + 44))(
             a1: this,
             a2,
             a3: v12,
             a4: v13,
             a5);
      (*(void (__thiscall **)(int, LPCSTR, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int))(*(_DWORD *)v8 + 8))(
        a1: v8,
        a2: v5,
        a3: 0,
        a4: 0,
        a5: v12,
        a6: v13,
        a7: 0,
        a8: 0,
        a9: a4);
      return v8;
    }
    CloseHandle(hObject: FileA);
  }
  return 0;
}