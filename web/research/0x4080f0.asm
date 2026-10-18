push    edi
mov     edi, [esp+8]
mov     ecx, [edi+28h]
inc     ecx
mov     eax, ecx
mov     [edi+28h], ecx
cmp     eax, 3
jle     short loc_408109
mov     byte ptr [edi+18h], 1
pop     edi
retn
push    esi
xor     esi, esi
call    _rand
and     eax, 80000001h
jns     short loc_40811D
dec     eax
or      eax, 0FFFFFFFEh
inc     eax
inc     eax
push    eax
call    _rand
cdq
mov     ecx, 3Ch ; '<'
idiv    ecx
add     edx, [edi+24h]
push    edx
call    _rand
cdq
mov     ecx, 0Ah
idiv    ecx
add     edx, [edi+20h]
lea     edx, [edx+esi-14h]
push    edx
call    sub_404170
add     esi, 14h
add     esp, 0Ch
cmp     esi, 0A0h
jl      short loc_40810C
pop     esi
pop     edi
retn