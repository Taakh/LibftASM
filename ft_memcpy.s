# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/14 03:54:24 by rmangili          #+#    #+#              #
#    Updated: 2015/07/14 03:54:25 by rmangili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_memcpy

_ft_memcpy:
	push rdi
	mov rcx, rdx
	cld
	rep movsb
	pop rax
	ret
