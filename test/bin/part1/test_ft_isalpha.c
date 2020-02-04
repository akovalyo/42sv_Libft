/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_isalpha.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:20:51 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 19:31:10 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	test_ft_isalpha()
{
	printf("Check ft_isalpha\n\nTest 1 - \"A\": ");
	if (isalpha(65) > 0 && ft_isalpha(65) > 0)
		OK
	else
		ERROR
	printf("Test 2 - \"a\": ");
	if (isalpha(97) > 0 && ft_isalpha(97) > 0)
		OK
	else
		ERROR
	printf("Test 3 - \"1\": ");
	if (isalpha(49) != ft_isalpha(49))
		ERROR
	else
		OK
	printf("Test 4 - \"*\": ");
	if (isalpha(42) != ft_isalpha(42))
		ERROR
	else
		OK
	printf("Test 5 - \" \": ");
	if (isalpha(32) != ft_isalpha(32))
		ERROR
	else
		OK
	printf("Test 6 - \"\" : ");
	if (isalpha(0) != ft_isalpha(0))
		ERROR
	else
		OK
	printf("\n");
	return (0);
}

