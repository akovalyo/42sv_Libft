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

#define ERROR printf("Test failed\n\n"); 
#define OK printf("OK\n");

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


#endif
