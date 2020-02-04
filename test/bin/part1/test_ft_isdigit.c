/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_isdigit.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:06:58 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 19:32:01 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	test_ft_isdigit()
{
	printf("Check ft_isdigit\n\nTest 1 - \"9\": ");
	if (isdigit(57) > 0 && ft_isdigit(57) > 0)
		OK
	else
		ERROR
	printf("Test 2 - \"a\": ");
	if (isdigit(97) != ft_isdigit(97))
		ERROR
	else
		OK
	printf("\n");
	return (0);
}

