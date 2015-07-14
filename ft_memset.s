# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memset.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/14 03:54:31 by rmangili          #+#    #+#              #
#    Updated: 2015/07/14 03:54:37 by rmangili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_memset

_ft_memset:
	push rdi
	mov rax, rsi
	mov rcx, rdx
	cld
	rep stosb

end:
	pop rax
	ret
