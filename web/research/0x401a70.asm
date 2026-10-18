push    esi
push    edi
push    7Fh
call    sub_4129B0
mov     esi, [esp+10h]
add     esp, 4
mov     eax, [esi+2Ch]
cmp     eax, 4
jge     short loc_401ACA
inc     eax
mov     [esi+2Ch], eax
call    sub_40B5E0
mov     edx, [eax+8]
add     eax, 8
add     edx, 14h
mov     [eax], edx
call    sub_40B5E0
mov     ecx, [eax+8]
test    ecx, ecx
jle     short loc_401AB4
call    sub_40B5E0
mov     dword ptr [eax+8], 0
call    sub_40B5E0
mov     edi, [eax+8]
add     edi, 1E0h
call    sub_40B5E0
mov     [eax+0Ch], edi
mov     al, [esi+30h]
test    al, al
jz      short loc_401B2C
call    sub_40B5E0
mov     eax, [eax+8]
mov     ecx, [esi+34h]
cmp     eax, ecx
jle     short loc_401B09
call    sub_40B5E0
mov     ecx, [eax+8]
add     eax, 8
add     ecx, 0FFFFFFECh
mov     [eax], ecx
call    sub_40B5E0
mov     esi, [eax+8]
add     esi, 1E0h
call    sub_40B5E0
mov     [eax+0Ch], esi
pop     edi
pop     esi
retn
mov     byte ptr [esi+30h], 0
call    sub_40B5E0
mov     ecx, [esi+34h]
mov     [eax+8], ecx
mov     esi, [esi+34h]
add     esi, 1E0h
call    sub_40B5E0
mov     [eax+0Ch], esi
pop     edi
pop     esi
retn
mov     eax, [esi+28h]
cmp     eax, 14h
jge     short loc_401B3B
inc     eax
pop     edi
mov     [esi+28h], eax
pop     esi
retn
call    sub_40B5E0
mov     edx, [eax+8]
mov     eax, [esi+24h]
cmp     edx, eax
jge     short loc_401B8E
call    sub_40B5E0
mov     edi, [eax+8]
add     eax, 8
add     edi, 28h ; '('
mov     [eax], edi
call    sub_40B5E0
mov     edi, [eax+8]
add     edi, 1E0h
call    sub_40B5E0
mov     [eax+0Ch], edi
call    sub_40B5E0
mov     ecx, [eax+8]
test    ecx, ecx
jle     short loc_401BBD
call    sub_40B5E0
mov     dword ptr [eax+8], 0
mov     byte ptr [esi+18h], 1
jmp     short loc_401B9D
mov     byte ptr [esi+18h], 1
call    sub_40B5E0
mov     ecx, [esi+24h]
mov     [eax+8], ecx
call    sub_40B5E0
mov     esi, [eax+8]
add     esi, 1E0h
call    sub_40B5E0
push    7Fh
mov     [eax+0Ch], esi
call    sub_4129F0
add     esp, 4
pop     edi
pop     esi
retn