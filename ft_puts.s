global _ft_puts

extern _ft_strlen
default rel

section .data
lolReturn: db 0x0a
nullMsg: db "(null)", 10, 0

segment .text
_ft_puts:
	cmp rdi, 0
	je null
	call _ft_strlen
	mov rdx, rax
	mov rcx, rdi
	mov rax, 0x2000004
	mov rdi, 1
	mov rsi, rcx
	syscall
	jc abort

lol:
	mov rax, 0x2000004
	mov rdi, 1
	lea rsi, [lolReturn]
	mov rdx, 1
	syscall
	mov rax, 42
	ret

null:
	mov rax, 0x2000004
	mov rdi, 1
	lea rsi, [nullMsg]
	mov rdx, 7
	syscall
	mov rax, -1
	ret	
	
abort:
	ret