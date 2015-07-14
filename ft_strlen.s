# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/14 03:55:09 by rmangili          #+#    #+#              #
#    Updated: 2015/07/14 03:55:10 by rmangili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
