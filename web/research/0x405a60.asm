mov     edx, [esp+4]
push    ebx
push    esi
mov     ecx, [edx+20h]
mov     eax, [edx+24h]
mov     bl, [ecx+18h]
test    bl, bl
jz      short loc_405A7A
pop     esi
mov     byte ptr [edx+18h], 1
pop     ebx
retn
mov     bl, [eax+18h]
test    bl, bl
jz      short loc_405A88
pop     esi
mov     byte ptr [edx+18h], 1
pop     ebx
retn
mov     esi, [eax+20h]
mov     ecx, [ecx+24h]
add     esi, 78h ; 'x'
add     ecx, 96h
cmp     ecx, esi
jge     short loc_405B04
mov     cl, [eax+3Ch]
test    cl, cl
jnz     short loc_405B04
mov     byte ptr [eax+3Ch], 1
mov     dword ptr [eax+38h], 0
call    sub_40B5E0
mov     ecx, [eax+14h]
add     eax, 14h
inc     ecx
mov     [eax], ecx
call    _rand
cdq
mov     ecx, 3
idiv    ecx
push    edx
call    sub_413610
add     esp, 4
call    sub_40B5E0
cmp     dword ptr [eax+14h], 3E7h
jle     short loc_405AEB
call    sub_40B5E0
mov     dword ptr [eax+14h], 3E7h
call    sub_40B5E0
sub     esi, [eax+8]
sub     esi, 1Eh
push    esi
push    0BAh
call    sub_403110
add     esp, 8
pop     esi
pop     ebx
retn