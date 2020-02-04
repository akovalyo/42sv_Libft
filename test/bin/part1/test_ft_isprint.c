/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_isprint.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:06:58 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 21:52:00 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	test_ft_isprint()
{
	printf("Check ft_isprint\n\nTest 1: ");
	if (isprint(97) > 0 && ft_isprint(97) > 0)
		OK
	else
		ERROR
	printf("Test 2: ");
	if (isprint(31) != ft_isprint(31))
		ERROR
	else
		OK
	printf("Test 3: ");
	if (isprint(127) != ft_isprint(127))
		ERROR
	else
		OK
	printf("\n");
	return (0);
}

