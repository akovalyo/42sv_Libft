/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_isascii.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:06:58 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 19:29:56 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */


#include "../test.h"
#include "../../libft.h"

int	test_ft_isascii()
{
	printf("Check ft_isascii\n\nTest 1 - \"9\": ");
	if (isascii(57) > 0 && ft_isascii(57) > 0)
		OK
	else
		ERROR
	printf("Test 2 - \"�\": ");
	if (isascii(129) != ft_isascii(129))
		ERROR
	else
		OK
	printf("\n");
	return (0);
}

