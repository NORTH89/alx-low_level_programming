section .data
	format db "Hello, Holberton", 0
	new_line db "\n", 0

section .text
	extern printf

global main
main:
	sub rsp, 8
	lea rdi, [format]
	xor eax, eax
	call printf

	lea rdi, [new_line]
	call printf

	add rsp, 8
	xor eax, eax
	ret