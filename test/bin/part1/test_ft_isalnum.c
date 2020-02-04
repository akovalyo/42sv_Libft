/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_isalnum.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:20:51 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 19:48:09 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	test_ft_isalnum()
{
	printf("Check ft_isalnum\n\nTest 1 - \"1\": ");
	if (isalnum(49) > 0 && ft_isalnum(49) > 0)
		OK
	else
		ERROR
	printf("Test 2 - \"a\": ");
	if (isalnum(97) > 0 && ft_isalnum(97) > 0)
		OK
	else
		ERROR
	printf("Test 3 - \" \": ");
	if (isalpha(32) != ft_isalpha(32))
		ERROR
	else
		OK
	printf("Test 4 - \"*\": ");
	if (isalpha(42) != ft_isalpha(42))
		ERROR
	else
		OK
	printf("\n");
	return (0);
}

