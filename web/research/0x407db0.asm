push    esi
mov     esi, [esp+8]
mov     eax, [esi+0Ch]
mov     cl, [eax+18h]
test    cl, cl
jz      short loc_407DC5
mov     byte ptr [esi+18h], 1
pop     esi
retn
mov     ecx, [esi+8]
test    ecx, ecx
jg      short loc_407E29
mov     ecx, [esi+2Ch]
dec     ecx
mov     [esi+2Ch], ecx
jns     short loc_407E29
mov     ecx, [eax+20h]
test    ecx, ecx
jle     short loc_407E29
mov     edx, [esi+28h]
mov     eax, [esi+30h]
push    edi
inc     edx
push    eax
push    esi
mov     [esi+28h], edx
call    sub_407E30
mov     edi, eax
mov     eax, [esi+20h]
add     esp, 8
test    eax, eax
jz      short loc_407E0F
mov     [eax+44h], edi
mov     ecx, [esi+20h]
push    ecx
push    edi
call    sub_408160
add     esp, 8
mov     [esi+20h], edi
jmp     short loc_407E15
mov     [esi+20h], edi
mov     [esi+24h], edi
call    _rand
cdq
mov     ecx, 64h ; 'd'
pop     edi
idiv    ecx
add     edx, 1Eh
mov     [esi+2Ch], edx
pop     esi
retn