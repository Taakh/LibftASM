global _ft_strlen

section .text

_ft_strlen:
	; prologue
	push rbp
	mov rbp, rsp
	; core
	cmp rdi, 0
	je ifnull
	push rdi
	sub rcx, rcx
	not rcx
	sub al, al
	cld
	repne scasb
	not rcx
	dec rcx
	mov rax, rcx
	jmp end

ifnull:
	mov rax, 0

end:
	pop rdi
	; epilogue
	mov rsp, rbp
	pop rbp
	ret