/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   README.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 15:17:38 by rmangili          #+#    #+#             */
/*   Updated: 2015/07/14 03:26:32 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

gcc -c main.c
~/.brew/Cellar/nasm/2.11.08/bin/nasm -f macho64 ft_isascii.s -o ft_isascii.o
ld main.o ft_isascii.o -macosx_version_min 10.08 -lSystem

make fclean
make
gcc -c main.c
gcc *.o
./a.out