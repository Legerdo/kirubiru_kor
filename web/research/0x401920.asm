mov     ecx, [esp+4]
mov     edx, [ecx+0Ch]
mov     eax, [ecx+8]
add     edx, 20h ; ' '
test    eax, eax
jg      locret_4019C4
fld     dword ptr [edx+24h]
fcomp   ds:flt_41C20C
fnstsw  ax
test    ah, 1
jz      short loc_401988
mov     al, [ecx+28h]
test    al, al
jz      short loc_40195A
fld     dword ptr [edx+20h]
fsub    ds:flt_41C208
fstp    dword ptr [ecx+20h]
jmp     short loc_40199A
fld     dword ptr [ecx+24h]
fadd    dword ptr [ecx+20h]
fstp    dword ptr [ecx+20h]
fld     dword ptr [ecx+24h]
fsub    ds:flt_41C204
fstp    dword ptr [ecx+24h]
fld     dword ptr [edx+20h]
fsub    ds:flt_41C208
fcomp   dword ptr [ecx+20h]
fnstsw  ax
test    ah, 1
jz      short loc_40199A
mov     byte ptr [ecx+28h], 1
jmp     short loc_40199A
mov     byte ptr [ecx+28h], 0
mov     dword ptr [ecx+24h], 0
mov     dword ptr [ecx+1Ch], offset sub_401850
fld     dword ptr [ecx+20h]
push    esi
call    __ftol
mov     esi, eax
call    sub_40B5E0
mov     [eax+8], esi
call    sub_40B5E0
mov     esi, [eax+8]
add     esi, 1E0h
call    sub_40B5E0
mov     [eax+0Ch], esi
pop     esi
retn