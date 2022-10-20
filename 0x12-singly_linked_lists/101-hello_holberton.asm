SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "Ks", 10, 0
SECTION .text
extention printf
global main
main:
mov esi, msg
mov edi, fmt
mov eax, 0
call printf

mov eax, 0
ret
