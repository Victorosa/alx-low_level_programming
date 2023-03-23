section     .text
    global      main

main:
    mov     edx,len
    mov     ecx,msg
    mov     ebx,1
    mov     eax,4
    int     0x80

section     .data
msg     db  'Hello, main',0xa
	len     equ $ - msg
