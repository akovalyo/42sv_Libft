/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strrchr.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/11 20:42:21 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/11 20:42:21 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	test_ft_strrchr()
{
	
	printf("Check ft_strrchr\n\nTest 1 - \"Hello hello\" - \"e\": ");
	if (strchr("Hello hello", 'e') != ft_strchr("Hello hello", 'e'))
		ERROR
	else
		OK
	printf("Test 2 - \"llllll\" - \"l\": ");
	if (strchr("llllll", 'l') != ft_strchr("llllll", 'l'))
		ERROR
	else
		OK
	printf("Test 3 - \"Hello\" - \"d\": ");
	if (strchr("Hello", 'd') != ft_strchr("Hello", 'd'))
		ERROR
	else
		OK
	printf("Test 4 - \"Hello\" - NULL: ");
	if (strchr("Hello", 0) != ft_strchr("Hello", 0))
		ERROR
	else
		OK
	return (0);
}

