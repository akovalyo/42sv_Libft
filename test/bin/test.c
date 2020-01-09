/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test.c                                      _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:19:14 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 18:19:20 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"


int	main()
{
	test_ft_strlen();
	divider();	
	test_ft_strcpy();
	divider();	
	test_ft_strncpy();
	divider();	
	test_ft_strdup();
	divider();	
	test_ft_atoi();
	divider();
	test_ft_isalpha();
	divider();
	test_ft_isdigit();
	divider();
	test_ft_isascii();
	divider();
	test_ft_isalnum();
	divider();
	test_ft_isprint();
	divider();
	test_ft_toupper();
	divider();
	test_ft_tolower();
	divider();
	test_ft_strstr();
	divider();
	test_ft_strcat();
	divider();
	test_ft_strncat();
	divider();
	test_ft_strlcat();
	divider();
	
	return (0);
}

