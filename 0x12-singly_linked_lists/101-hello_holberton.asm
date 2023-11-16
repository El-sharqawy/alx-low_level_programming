section .data
	hello_message: db "Hello, Holberton", 0
	len: db "%s", 10, 0

section .text
	extern printf
	global main

main:
	mov esi, hello_message
	mov edi, len
	mov eax, 0
	call printf

	mov eax, 0
	ret
