; Compile with: nasm -f elf64 -o hello.o hello.asm && gcc-o hello hello.o
; Run with: ./hello

extern printf

section .data
	message db 'Hello, Holberton', 10, 0

section .text
	global main

main:
	; Write message to stdout
	push rbp
	mov rdi, message
	xor rax, rax
	call printf
	pop rbp

	; Exit program
	mov rax, 60
	xor rdi, rdi
	syscall
