# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_tolower.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/28 08:08:44 by rmangili          #+#    #+#              #
#    Updated: 2015/07/14 03:55:17 by rmangili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

extern _ft_isalpha

section .text
	global _ft_tolower

_ft_tolower:
			call _ft_isalpha
			cmp rax, 0
			je false
			cmp rdi, 'Z'
			jg false

true:
	mov rax, rdi
	add rax, 32
	ret

false:
	mov rax, rdi
	ret
