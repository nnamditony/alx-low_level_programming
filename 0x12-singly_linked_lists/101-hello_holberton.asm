section .data
    message db 'Hello, Holberton', 0

section .text
    extern printf

global main
main:
    push rbp
    mov rbp, rsp

    sub rsp, 8  ; Allocate space for the format string
    mov rdi, format
    mov rsi, message
    xor eax, eax  ; Clear the EAX register
    call printf

    add rsp, 8  ; Restore the stack pointer
    mov eax, 0  ; Return 0
    leave
    ret

section .data
    format db "%s\n", 0
