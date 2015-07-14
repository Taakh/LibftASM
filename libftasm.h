/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftasm.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 11:49:03 by rmangili          #+#    #+#             */
/*   Updated: 2015/07/14 03:36:29 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTASM_H
# define LIBFTASM_H

#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/* === FONCTION PART 1 ===  */

void	ft_bzero(void *s, size_t n); 
int 	ft_isascii(int c);
int 	ft_isalnum(int c);
int 	ft_isdigit(int c);
int 	ft_isalpha(int c);
int 	ft_tolower(int c);
int 	ft_toupper(int c);
int		ft_isprint(int c);
int 	ft_puts(char *const str);
char 	*ft_strcat(char * s1, const char * s2);


/* === FONCTION PART 2 ===  */

size_t 	ft_strlen(const char *);
void 	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void 	*ft_strdup(const char *s1);

/* === FONCTION PART 3 ===  */

void	ft_cat(int fd);

#endif