0040FF80 sub     esp, 78h
0040FF83 lea     eax, [esp+78h+Buffer]
0040FF87 push    ebp
0040FF88 push    esi
0040FF89 push    eax; Buffer
0040FF8A call    sub_4100B0
0040FF8F mov     ecx, dword_41F698
0040FF95 add     esp, 4
0040FF98 xor     ebp, ebp
0040FF9A lea     eax, [esp+80h+var_4C]
0040FF9E cmp     ecx, [eax]
0040FFA0 jge     short loc_40FFB0
0040FFA2 inc     ebp
0040FFA3 add     eax, 8
0040FFA6 cmp     ebp, 0Ah
0040FFA9 jl      short loc_40FF9E
0040FFAB jmp     loc_41004A
0040FFB0 push    offset aSaveReplay20Re; "save/replay20.rep"
0040FFB5 call    ds:DeleteFileA; KERNEL32
0040FFBB cmp     ebp, 9
0040FFBE jge     short loc_410037
0040FFC0 push    ebx
0040FFC1 push    edi
0040FFC2 mov     edi, 14h
0040FFC7 lea     esi, [esp+88h+var_10]
0040FFCB mov     ecx, [esi+4]
0040FFCE lea     ebx, [edi-1]
0040FFD1 mov     [esi+0Ch], ecx
0040FFD4 mov     edx, [esi]
0040FFD6 push    ebx
0040FFD7 lea     eax, [esp+8Ch+FileName]
0040FFDB push    offset aSaveReplayDRep; "save/replay%d.rep"
0040FFE0 push    eax; LPSTR
0040FFE1 mov     [esi+8], edx
0040FFE4 call    ds:wsprintfA; USER32
0040FFEA push    edi
0040FFEB lea     ecx, [esp+98h+NewFileName]
0040FFEF push    offset aSaveReplayDRep; "save/replay%d.rep"
0040FFF4 push    ecx; LPSTR
0040FFF5 call    ds:wsprintfA; USER32
0040FFFB lea     edx, [esp+0A0h+FileName]
0040FFFF push    offset Mode; "rb"
00410004 push    edx; FileName
00410005 call    _fopen
0041000A add     esp, 20h
0041000D test    eax, eax
0041000F jz      short loc_410029
00410011 push    eax; Stream
00410012 call    _fclose
00410017 lea     eax, [esp+8Ch+NewFileName]
0041001B lea     ecx, [esp+8Ch+FileName]
0041001F push    eax; lpNewFileName
00410020 push    ecx; lpExistingFileName
00410021 call    sub_414675
00410026 add     esp, 0Ch
00410029 mov     edi, ebx
0041002B sub     esi, 8
0041002E lea     edx, [edi-0Bh]
00410031 cmp     edx, ebp
00410033 jg      short loc_40FFCB
00410035 pop     edi
00410036 pop     ebx
00410037 mov     eax, dword_41F698
0041003C mov     ecx, dword_41F6A0
00410042 mov     [esp+ebp*8+80h+var_4C], eax
00410046 mov     [esp+ebp*8+80h+Buffer], ecx
0041004A push    offset aWbc; "wbc"
0041004F push    offset aSaveDainiScore; "save/daini_score.sav"
00410054 call    _fopen
00410059 mov     esi, eax
0041005B add     esp, 8
0041005E test    esi, esi
00410060 jnz     short loc_41006D
00410062 pop     esi
00410063 mov     eax, 0Bh
00410068 pop     ebp
00410069 add     esp, 78h
0041006C retn
0041006D push    esi; Stream
0041006E push    0Ah; ElementCount
00410070 lea     edx, [esp+88h+Buffer]
00410074 push    8; ElementSize
00410076 push    edx; Buffer
00410077 call    _fwrite
0041007C push    esi; Stream
0041007D call    _fflush
00410082 push    esi; Stream
00410083 call    _fclose
00410088 add     esp, 18h
0041008B inc     ebp
0041008C cmp     ebp, 0Bh
0041008F jge     short loc_41009D
00410091 lea     eax, [ebp+0Ah]
00410094 push    eax; Buffer
00410095 call    sub_40FAD0
0041009A add     esp, 4
0041009D mov     eax, ebp
0041009F pop     esi
004100A0 pop     ebp
004100A1 add     esp, 78h
004100A4 retn