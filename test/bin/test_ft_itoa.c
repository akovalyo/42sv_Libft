/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_itoa.c                              _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/29 12:25:40 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/29 12:25:40 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_itoa()
{
	printf("Check ft_itoa\n\nTest 1 - \"120\": ");
	if (strcmp(ft_itoa(120), "120") == 0)
		OK
	else
		ERROR
	printf("Test 2 - \"-120\": ");
	if (strcmp(ft_itoa(-120), "-120") == 0)
		OK
	else
		ERROR
	printf("Test 3 - \"0\": ");
	if (strcmp(ft_itoa(0), "0") == 0)
		OK
	else
		ERROR
	printf("Test 4- \"-2147483648\": ");
	if (strcmp(ft_itoa(-2147483648), "-2147483648") == 0)
		OK
	else
		ERROR
	printf("Test 5 - \"2147483647\": ");
	if (strcmp(ft_itoa(2147483647), "2147483647") == 0)
		OK
	else
		ERROR
	printf("Test 6 - \"\": ");
	if (strcmp(ft_itoa(-2147483648), "-2147483648") == 0)
		OK
	else
		ERROR
	return (0);
}	
