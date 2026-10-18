push    esi
mov     esi, [esp+8]
mov     edx, [esi+20h]
mov     eax, [esi+24h]
mov     cl, [edx+18h]
test    cl, cl
jz      short loc_4048E8
mov     byte ptr [esi+18h], 1
pop     esi
retn
mov     cl, [eax+18h]
test    cl, cl
jz      short loc_40490A
call    sub_40B5E0
mov     byte ptr [eax+29h], 0
call    sub_40B5E0
mov     dword ptr [eax+40h], 0
mov     byte ptr [esi+18h], 1
pop     esi
retn
mov     ecx, [eax+30h]
mov     esi, [eax+20h]
mov     edx, [edx+24h]
lea     ecx, [ecx+ecx*2]
add     edx, 96h
lea     ecx, [ecx+ecx*4]
lea     esi, [esi+ecx*8]
cmp     edx, esi
jge     short loc_404996
mov     cl, [eax+34h]
test    cl, cl
jnz     short loc_404996
mov     ecx, 1
mov     dword ptr [eax+3Ch], 5
mov     [eax+34h], cl
mov     [eax+38h], ecx
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
jle     short loc_40497D
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
retn