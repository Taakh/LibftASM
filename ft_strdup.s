# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strdup.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/14 03:55:01 by rmangili          #+#    #+#              #
#    Updated: 2015/07/14 03:55:02 by rmangili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_strdup
	extern _malloc
	extern _ft_strlen
	extern _ft_memcpy

_ft_strdup:
	push rbp
	mov rbp, rsp

	push rdi
	call _ft_strlen
	inc rax
	push rax
	mov rdi, rax
	call _malloc
	pop rdx
	mov rdi, rax
	pop rsi
	call _ft_memcpy
	
end:
	mov rsp, rbp
	pop rbp
	ret
