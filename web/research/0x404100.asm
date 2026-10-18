push    edi
mov     edi, [esp+8]
mov     edx, [edi+28h]
inc     edx
mov     eax, edx
mov     [edi+28h], edx
cmp     eax, 3
jle     short loc_404119
mov     byte ptr [edi+18h], 1
pop     edi
retn
push    esi
mov     esi, 0FFFFFF38h
call    _rand
cdq
mov     ecx, 3
idiv    ecx
push    edx
call    _rand
cdq
mov     ecx, 78h ; 'x'
idiv    ecx
add     edx, [edi+24h]
push    edx
call    _rand
cdq
mov     ecx, 14h
idiv    ecx
mov     eax, [edi+20h]
sub     eax, edx
add     eax, esi
push    eax
call    sub_404170
add     esi, 32h ; '2'
add     esp, 0Ch
cmp     esi, 0C8h
jl      short loc_40411F
pop     esi
pop     edi
retn