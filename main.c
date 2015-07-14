/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 15:05:33 by rmangili          #+#    #+#             */
/*   Updated: 2015/07/14 03:39:53 by rmangili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftasm.h"
#include <string.h>
/* === FONCTION DE TEST PART 1 ===  */

void	test_bzero(void);   // [ok]
void	test_strcat(void);	// [ok]
void	test_isalpha(void); // [ok]
void 	test_isdigit(void); // [ok]
void	test_isalnum(void);	// [ok]
void	test_isascii(void); // [ok]
void	test_isprint(void); // [ok]
void 	test_toupper(void); // [ok]
void 	test_tolower(void); // [ok]
void	test_puts(void); // [ok]

/* === FONCTION DE TEST PART 2 === */

void 	test_strlen(void); // [ok]
void 	test_memset(void); // [ok]
void	test_memcpy(void); // [ok]
void 	test_strdup(void); // [ok]

/* === FONCTION DE TEST PART 3 === */

void	ft_cat(int fd);

void	test_bzero(void)
{
	char str[4] = "plo";

	printf("\n");
	printf("[Chaine remplis]\n");
	printf("\n");
	printf("str[0] = %d\n", str[0]);
	printf("str[1] = %d\n", str[1]);
	printf("str[2] = %d\n", str[2]);
	ft_bzero(str, 3);
	printf("\n");
	printf(" ! ft_bzero done !\n");
	printf("\n");
	printf("[Chaine vide]\n");
	printf("\n");
	printf("str[0] = %d\n", str[0]);
	printf("str[1] = %d\n", str[1]);
	printf("str[2] = %d\n", str[2]);
}

void	test_isalpha(void)
{
	printf("\n");
	printf("[True tests]\n");
	printf("\n");
	printf("%s %d\n", "A est dans l'alphabet ? 	-", ft_isalpha('A'));
	printf("%s %d\n", "a est dans l'alphabet ? 	-", ft_isalpha('a'));
	printf("%s %d\n", "Z est dans l'alphabet ? 	-", ft_isalpha('Z'));
	printf("%s %d\n", "z est dans l'alphabet ? 	-", ft_isalpha('z'));
	printf("%s %d\n", "65 est dans l'alphabet ? 	-", ft_isalpha(65));
	printf("\n");
	printf("[False tests]\n");
	printf("\n");
	printf("%s %d\n", "-1 est dans l'alphabet ? 	-", ft_isalpha(-1));
	printf("%s %d\n", "9 est dans l'alphabet ? 	-", ft_isalpha('9'));
	printf("%s %d\n", "64 est dans l'alphabet ? 	-", ft_isalpha(64));
}

void	test_isdigit(void)
{
	printf("\n");
	printf("[True tests]\n");
	printf("\n");
	printf("%s %d\n", "1 est un Nombre ? 		-", ft_isdigit('1'));
	printf("%s %d\n", "0 est un Nombre ? 		-", ft_isdigit('0'));
	printf("%s %d\n", "9 est un Nombre ? 		-", ft_isdigit('9'));
	printf("\n");
	printf("[False tests]\n");
	printf("\n");
	printf("%s %d\n", "+ est un Nombre ? 		-", ft_isdigit('+'));
	printf("%s %d\n", "~ est un Nombre ? 		-", ft_isdigit('~'));
	printf("%s %d\n", "NULL est un Nombre ?  		-", ft_isdigit('\0'));
}

void	test_isalnum(void)
{
	printf("\n");
	printf("[True tests]\n");
	printf("\n");
	printf("%s %d\n", "A est Alpha ou Num ? 		-", ft_isalnum('A'));
	printf("%s %d\n", "B est Alpha ou Num ? 		-", ft_isalnum('B'));
	printf("%s %d\n", "a est Alpha ou Num ? 		-", ft_isalnum('a'));
	printf("%s %d\n", "b est Alpha ou Num ? 		-", ft_isalnum('b'));
	printf("%s %d\n", "0 est Alpha ou Num ? 		-", ft_isalnum('0'));
	printf("%s %d\n", "9 est Alpha ou Num ? 		-", ft_isalnum('9'));
	printf("\n");
	printf("[False test]\n");
	printf("\n");
	printf("%s %d\n", "~ est Alpha ou Num ? 		-", ft_isalnum('~'));
	printf("%s %d\n", ". est Alpha ou Num ? 		-", ft_isalnum('.'));
	printf("%s %d\n", "NULL est Alpha ou Num ?  	-", ft_isalnum('\0'));
	printf("%s %d\n", "/ est Alpha ou Num ? 		-", ft_isalnum('/'));
	printf("%s %d\n", "+ est Alpha ou Num ? 		-", ft_isalnum('+'));
	printf("%s %d\n", "_ est Alpha ou Num ? 		-", ft_isalnum('_'));
}

void	test_isascii(void)
{
	printf("\n");
	printf("[True tests]\n");
	printf("\n");
	printf("%s %d\n", "0 est un ASCII ? 		-", ft_isascii(0));
	printf("%s %d\n", "127 est un ASCII ? 		-", ft_isascii(127));
	printf("%s %d\n", "67 est un ASCII ? 		-", ft_isascii(67));
	printf("\n");
	printf("[False tests]\n");
	printf("\n");
	printf("%s %d\n", "-1 est un ASCII ? 		-", ft_isascii(-1));
	printf("%s %d\n", "128 est un ASCII ? 		-", ft_isascii(128));
	printf("%s %d\n", "250 est un ASCII ? 		-", ft_isascii(250));
}

void	test_isprint(void)
{
	printf("\n");
	printf("[True tests]\n");
	printf("\n");
	printf("%s %d\n", "Espace est-il affichable ? 	- ", ft_isprint(' '));
	printf("%s %d\n", "~ est-il affichable ? 		- ", ft_isprint('~'));
	printf("%s %d\n", "` est-il affichable ? 		- ", ft_isprint('`'));
	printf("\n");
	printf("[False tests]\n");
	printf("\n");
	printf("%s %d\n", "NULL est-il affichable ? 	- ", ft_isprint('\0'));
	printf("%s %d\n", "DEL est-il affichable ? 	- ", ft_isprint(127));
	printf("%s %d\n", "SUB est-il affichable ? 	- ", ft_isprint(26));
}

void 	test_toupper(void)
{
	printf("\n");
	printf("[True tests]\n");
	printf("\n");
	printf("%s %d\n", "Majuscule de A ? 		-", ft_toupper('A'));
	printf("%s %d\n", "Majuscule de a ? 		-", ft_toupper('a'));
	printf("%s %d\n", "Majuscule de 65 ? 		-", ft_toupper(65));
	printf("%s %d\n", "Majuscule de Z ? 		-", ft_toupper('Z'));
	printf("%s %d\n", "Majuscule de z ? 		-", ft_toupper('z'));
	printf("\n"); 
	printf("[False tests]\n");
	printf("\n");
	printf("%s %d\n", "Majuscule de 1 ? 		-", ft_toupper('1'));
	printf("%s %d\n", "Majuscule de - ? 		-", ft_toupper('-'));
	printf("%s %d\n", "Majuscule de ~ ? 		-", ft_toupper('~'));
	printf("%s %d\n", "Majuscule de . ? 		-", ft_toupper('.'));
}

void 	test_tolower(void)
{
	printf("\n");
	printf("[True tests]\n");
	printf("\n");
	printf("%s %d\n", "Minuscule de A ? 		-", ft_tolower('A'));
	printf("%s %d\n", "Minuscule de Z ? 		-", ft_tolower('Z'));
	printf("%s %d\n", "Minuscule de a ? 		-", ft_tolower('a'));
	printf("%s %d\n", "Minuscule de A ? 		-", ft_tolower(65));
	printf("\n");
	printf("[False tests]\n");
	printf("\n");
	printf("%s %d\n", "Minuscule de 1 ? 		-", ft_tolower('1'));
	printf("%s %d\n", "Minuscule de - ? 		-", ft_tolower('-'));
	printf("%s %d\n", "Minuscule de ~ ? 		-", ft_tolower('~'));
	printf("%s %d\n", "Minuscule de . ? 		-", ft_tolower('.'));
}

void	test_puts(void)
{
	printf("\n");
	printf("[Tests]\n");
	printf("\n");
	ft_puts("Tro test1");
	printf("\n");

}

void	test_strlen(void)
{
	printf("\n");
	printf("[Tests]\n");
	printf("\n");
	char str2[6] = "12345";

	printf("La string = %s\n", str2);
	printf("Sa taille = %d\n", (int)ft_strlen(str2));

	printf("\n");
	char str3[2] = "a";

	printf("La string = %s\n", str3);
	printf("Sa taille = %d\n", (int)ft_strlen(str3));
}

void 	test_strcat (void)
{

	printf("\n");
	printf("[Tests]\n");
	printf("\n");
	char		toast[7] = "abc";
	char		chips[4] = "def";

	toast[3] = '\0';
	toast[6] = '\0';

	printf("String 1 = %s\n", toast);
	printf("String 2 = %s\n", chips);
	printf("Resultat = %s\n", ft_strcat(toast, chips));
	printf("\n");
}

void	test_memset(void)
{
	printf("\n");
	printf("[Tests]\n");
	printf("\n");
	printf("Before memset: %s\n", "abcd");
	printf("After memset: %s\n", (char*)ft_memset(ft_strdup("abcd"), 'A', 3));
	printf("\n");
}

void	test_strdup(void)
{
	char		*str;
	char		f[] = "h";
	char		s[] = "hello";
	char		t[] = "";

	printf("\n");
	printf("[Tests]\n");
	printf("\n");
	str = ft_strdup(f);
	printf("Str after strdup (\"%s\") %d\n", str, (int)ft_strlen(str));
	str = ft_strdup(s);
	printf("Str after strdup (\"%s\") %d\n", str, (int)ft_strlen(str));
	str = ft_strdup(t);
	printf("Str after strdup (\"%s\") %d\n", str, (int)ft_strlen(str));
	printf("\n");
}

void	test_memcpy(void)
{
	char		str[2];
	char		str2[6];

	ft_bzero(str, 2);
	ft_bzero(str2, 6);

	printf("\n");
	printf("[Tests]\n");
	printf("\n");
	printf("Str1 size: %d, Content: %s\n", (int)ft_strlen(str), str);
	printf("Str2 size: %d, Content: %s\n", (int)ft_strlen(str2), str2);
	ft_memcpy((void*)str, (void*)"a", 1);
	ft_memcpy((void*)str2, (void*)"hello", 5);
	printf("\n");
	printf("\033[33mUsing ft_memcpy\n\033[0m");
	printf("\n");
	printf("Str1 size: %d, Content: %s\n", (int)ft_strlen(str), str);
	printf("Str2 size: %d, Content: %s\n", (int)ft_strlen(str2), str2);
	printf("\n");
}

void	test_cat(void)
{
	int		fd;

	printf("\n");
	printf("[Tests]\n");
	printf("\n");
	fd = open("Makefile", O_RDONLY); // CTRL + d to go
	ft_cat(0);
	printf("\n");
	//ft_cat(open(__FILE__, O_RDONLY));
	ft_cat(fd);
	ft_cat(-42);
	close(fd);
}

int		main(void)
{
	printf("\n");

	printf ("\033[31m1 = Oui / 0 = Non\n\n\033[0m");
	
	printf("\033[33m=== FT_BZERO   ===\n\033[0m");

		test_bzero();
		printf("\n");
	
	printf("\033[33m=== FT_STRCAT  ===\n\033[0m");	
	
		test_strcat();
		printf("\n");

	printf("\033[33m=== FT_ISALPHA ===\n\033[0m");
	
		test_isalpha();
		printf("\n");

	printf("\033[33m=== FT_ISDIGIT ===\n\033[0m");
	
		test_isdigit();
		printf("\n");

	printf("\033[33m=== FT_ISALNUM ===\n\033[0m");
	
		test_isalnum();
		printf("\n");

	printf("\033[33m=== FT_ISASCII ===\n\033[0m");
	
		test_isascii();
		printf("\n");

	printf("\033[33m=== FT_ISPRINT ===\n\033[0m");

		test_isprint();
		printf("\n");
	printf("\033[33m=== FT_TOUPPER ===\n\033[0m");

		test_toupper();
		printf("\n");

	printf("\033[33m=== FT_TOLOWER ===\n\033[0m");

		test_tolower();
		printf("\n");

	printf("\033[33m=== FT_PUTS ===\n\033[0m");

		test_puts();
		printf("\n");

	printf("\033[33m=== FT_STRLEN ===\n\033[0m");

		test_strlen();
		printf("\n");

	printf("\033[33m=== FT_MEMSET ===\n\033[0m");	

		test_memset();
		printf("\n");

	printf("\033[33m=== FT_STRDUP ===\n\033[0m");

		test_strdup();
		printf("\n");

	printf("\033[33m=== FT_MEMCPY ===\n\033[0m");

		test_memcpy();
		printf("\n");
	
	printf("\033[33m=== FT_CAT ===\n\033[0m");

		test_cat();
		printf("\n");
	return (0);
}