# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/05/24 13:18:37 by rmangili          #+#    #+#              #
#    Updated: 2015/07/14 03:32:42 by rmangili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.s \
	  ft_isdigit.s \
	  ft_isascii.s \
	  ft_isalnum.s \
	  ft_toupper.s \
	  ft_isprint.s \
	  ft_bzero.s \
	  ft_tolower.s \
	  ft_puts.s \
	  ft_strlen.s \
	  ft_strcat.s \
	  ft_memset.s \
	  ft_strdup.s \
	  ft_memcpy.s \
	  ft_cat.s

OBJ = $(SRC:%.s=%.o)
NAME = libftasm.a

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o: %.s libftasm.h
	@~/.brew/Cellar/nasm/2.11.08/bin/nasm -f macho64 $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all -f macho64 $<
