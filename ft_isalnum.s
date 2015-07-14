# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isalnum.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/24 15:30:38 by rmangili          #+#    #+#              #
#    Updated: 2015/05/24 15:30:39 by rmangili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_isalnum

_ft_isalnum:
		cmp rdi, '0'
		jl false
		cmp rdi, '9'
		jle true
		cmp rdi, 'A'
		jl false
		cmp rdi, 'z'
		jg false
		cmp rdi, 'Z'
		jle true
		cmp rdi, 'a'
		jl false
		cmp rdi, 'a'
		jge true

		

true:
	mov rax, 1
	ret

false:
	mov rax, 0
	ret
