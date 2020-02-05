/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test.h                                      _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:19:44 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 18:19:48 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
#define TEST_H

#include <stdio.h>
#include <ctype.h>

#define ERROR { printf("\033[1;31m"); printf("Test failed\n\n"); printf("\033[0m"); } 
#define OK { printf("\033[0;32m"); printf("OK\n"); printf("\033[0m"); }

void	divider();
int	test_ft_strlen();
int	test_ft_strncpy();
int	test_ft_strdup();
int	test_ft_strcpy();
int	test_ft_atoi();
int	test_ft_isalpha();
int	test_ft_isdigit();
int	test_ft_isascii();
int	test_ft_isalnum();
int	test_ft_isprint();
int	test_ft_toupper();
int	test_ft_tolower();
int	test_ft_strstr();
int	test_ft_strcat();
int	test_ft_strncat();
int	test_ft_strlcat();
int	test_ft_strnstr();
int	test_ft_strcmp();
int	test_ft_strncmp();
int	test_ft_strchr();
int	test_ft_strrchr();
int	test_ft_bzero();
int	test_ft_memset();
int	test_ft_memchr();
int	test_ft_memcpy();
int	test_ft_memccpy();
int	test_ft_memcmp();
int	test_ft_memmove();
int	test_ft_putnbr();
int	test_ft_strclr();
int	test_ft_striter();
int	test_ft_striteri();
int	test_ft_strequ();
int	test_ft_strnequ();
int	test_ft_memalloc();
int	test_ft_strmap();
int	test_ft_strmapi();
int	test_ft_substr();
int	test_ft_strjoin();
int	test_ft_strtrim();
int	test_ft_split();
int	test_ft_itoa();
int	test_ft_strlcpy();
int	test_ft_lstnew();



#endif
