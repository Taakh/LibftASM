section .text
	global _ft_strcat

_ft_strcat:
	push rbp
	mov rbp, rsp

	mov rcx, rdi
	mov rbx, rsi

word1:
	cmp byte[rcx], 0
	je word2
	inc rcx
	jmp word1

word2:
	cmp byte[rbx], 0
	je end
	mov al, [rbx]
	mov [rcx], al
	inc rbx
	inc rcx
	jmp word2

end:
	mov byte[rcx], 0
	mov rax, rdi

	mov rsp, rbp
	pop rbp
	ret