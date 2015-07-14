# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isalpha.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/24 16:27:40 by rmangili          #+#    #+#              #
#    Updated: 2015/05/24 16:27:42 by rmangili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_isalpha

_ft_isalpha:
		cmp rdi, 'A'
		jl false
		cmp rdi, 'z'
		jg false
		cmp rdi, 'Z'
		jle true
		cmp rdi, 'a'
		jge true

true:
	mov rax, 1
	ret

false: 
	mov rax, 0
	ret
