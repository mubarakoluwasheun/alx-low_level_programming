section .data
    format db 'Hello, Holberton', 10, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp
    mov rdi, format
    xor rax, rax
    call printf
    mov rax, 0
    pop rbp
    ret
