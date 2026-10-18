mov     edx, [esp+4]
mov     eax, [edx+8]
test    eax, eax
jg      short locret_407D30
mov     eax, [edx+20h]
test    eax, eax
jle     short loc_407CF7
dec     eax
mov     [edx+20h], eax
retn
push    esi
push    edi
xor     eax, eax
lea     ecx, [edx+24h]
mov     esi, [ecx]
mov     edi, [esi+28h]
test    edi, edi
jnz     short loc_407D10
inc     eax
add     ecx, 4
cmp     eax, 3
jl      short loc_407CFE
pop     edi
cmp     eax, 3
pop     esi
jnz     short locret_407D30
mov     byte ptr [edx+18h], 1
call    sub_40B5E0
mov     byte ptr [eax+29h], 0
call    sub_40B5E0
mov     dword ptr [eax+40h], 0
retn