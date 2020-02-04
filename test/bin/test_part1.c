/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_part1.c                                _______ ______   ______ __   */
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
	printf("\033[01;33m"); 
	printf("\n********* PART 1 *******\n\n"); 
	printf("\033[0m");	
	test_ft_memset();
	divider();	
	test_ft_bzero();
	divider();
	test_ft_memcpy();
	divider();
	test_ft_memccpy();
	divider();
	test_ft_memmove();
	divider();
	test_ft_memchr();
	divider();
	test_ft_memcmp();
	divider();
	test_ft_strlen();
	divider();
	test_ft_strlcpy();
	divider();
	test_ft_strlcat();
	divider();
	test_ft_strchr();
	divider();
	test_ft_strrchr();
	divider();
	test_ft_strnstr();
	divider();
	test_ft_strncmp();
	divider();
	test_ft_atoi();
	divider();
	test_ft_isalpha();
	divider();
	test_ft_isdigit();
	divider();
	test_ft_isalnum();
	divider();
	test_ft_isascii();
	divider();
	test_ft_isprint();
	divider();
	test_ft_toupper();
	divider();
	test_ft_tolower();
	divider();
	
	
	return (0);
}
