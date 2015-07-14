# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_bzero.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/28 14:58:12 by rmangili          #+#    #+#              #
#    Updated: 2015/07/14 03:53:51 by rmangili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section	.text
	global _ft_bzero

_ft_bzero:
		cmp rdi, 0
		jz zz
		mov rbx, rdi
		mov rax, rsi

loopi:
	cmp rax, 0
	jle zz
	mov byte[rbx], 0
	inc rbx
	dec rax
	jmp loopi
	
zz:
	ret
