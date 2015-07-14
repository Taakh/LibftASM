# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isprint.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/28 12:59:11 by rmangili          #+#    #+#              #
#    Updated: 2015/05/28 12:59:14 by rmangili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_isprint

_ft_isprint:
			cmp rdi, 32
			jl false
			cmp rdi, 126
			jg false

true:
	mov rax, 1
	ret

false:
	mov rax, 0
	ret