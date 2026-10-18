00402EE0 push    ebx
00402EE1 push    esi
00402EE2 mov     esi, [esp+8+arg_0]
00402EE6 push    edi
00402EE7 fld     dword ptr [esi+44h]
00402EEA fcomp   ds:flt_41C1F4
00402EF0 fnstsw  ax
00402EF2 test    ah, 1
00402EF5 jz      short loc_402EFE
00402EF7 mov     dword ptr [esi+44h], 0
00402EFE fld     dword ptr [esi+44h]
00402F01 fadd    ds:flt_41C22C
00402F07 fst     dword ptr [esi+44h]
00402F0A fadd    dword ptr [esi+40h]
00402F0D fcom    ds:flt_41C200
00402F13 fst     dword ptr [esi+40h]
00402F16 fnstsw  ax
00402F18 test    ah, 41h
00402F1B jnz     short loc_402F2F
00402F1D fstp    st
00402F1F mov     dword ptr [esi+40h], 43980000h
00402F26 mov     dword ptr [esi+24h], 130h
00402F2D jmp     short loc_402F37
00402F2F call    __ftol
00402F34 mov     [esi+24h], eax
00402F37 call    sub_40B5E0
00402F3C mov     edi, [esi+20h]
00402F3F mov     edx, [eax]
00402F41 mov     esi, [esi+24h]
00402F44 sub     edi, edx
00402F46 call    sub_40B5E0
00402F4B mov     ecx, [eax+8]
00402F4E mov     ebx, esi
00402F50 sub     ebx, ecx
00402F52 cmp     esi, 130h
00402F58 jnz     short loc_402F67
00402F5A call    sub_411780
00402F5F mov     edx, [eax]
00402F61 push    0
00402F63 push    0
00402F65 jmp     short loc_402F78
00402F67 call    sub_411780
00402F6C mov     edx, [eax]
00402F6E push    80h
00402F73 push    180h
00402F78 push    80h
00402F7D push    80h
00402F82 push    ebx
00402F83 push    edi
00402F84 push    0
00402F86 mov     ecx, eax
00402F88 call    dword ptr [edx+0Ch]
00402F8B pop     edi
00402F8C pop     esi
00402F8D pop     ebx
00402F8E retn