# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_toupper.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/28 08:08:38 by rmangili          #+#    #+#              #
#    Updated: 2015/05/28 08:08:39 by rmangili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

extern _ft_isalpha

section .text
	global _ft_toupper

_ft_toupper:
			call _ft_isalpha
			cmp rax, 0
			je false
			cmp rdi, 'a'
			jl false

true:
	mov rax, rdi
	sub rax, 32
	ret

false:
	mov rax, rdi
	ret
