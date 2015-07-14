# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isdigit.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/24 16:12:41 by rmangili          #+#    #+#              #
#    Updated: 2015/05/24 16:12:43 by rmangili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_isdigit

_ft_isdigit:
		cmp rdi, '9'
		jg false
		cmp rdi, '0'
		jl false
		cmp rdi, '0'
		jg true
		

true:
	mov rax, 1
	ret

false:
	mov rax, 0
	ret