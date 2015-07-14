%define BUFF_SIZE	4096
%define SYSCALL(n)	0x2000000 | n

section .bss
	buffer: resb BUFF_SIZE

section .text
	global _ft_cat

_ft_cat:
	push rbp
	mov rbp, rsp

read:
	push rdi
	lea rsi, [rel buffer]
	mov rdx, BUFF_SIZE
	mov rax, SYSCALL(3)
	syscall
	jc end
	cmp rax, 0
	jle end
	mov rdi, 1
	mov rdx, rax
	mov rax, SYSCALL(4)
	syscall
	pop rdi
	jmp read

end:
	mov rsp, rbp
	pop rbp
	ret