# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isascii.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/23 13:35:29 by rmangili          #+#    #+#              #
#    Updated: 2015/05/23 15:17:01 by rmangili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global	_ft_isascii

_ft_isascii:
		cmp rdi, 0
		jl false
		cmp rdi, 127
		jg false

true:
	mov rax, 1
	ret

false:
	mov rax, 0
	ret
