/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_memcmp.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/10 20:11:53 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/10 20:11:53 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_memcmp()
{
	
	printf("Check ft_memcmp\n\nTest 1 - \"abc\" - \"abc\" - \"2\": ");
	if (memcmp("abc", "abc", 2) == ft_memcmp("abc", "abc", 2))
		OK
	else
		ERROR
	printf("Test 2 - \"abc\" - \"fgh\" - \"2\": ");
	if (ft_memcmp("abc", "fgh", 2) < 0)
		OK
	else
		ERROR
	printf("Test 3 - \"fgh\" - \"abc\" - \"2\": ");
	if (ft_memcmp("fgh", "abc", 2) > 0)
		OK
	else
		ERROR
	printf("Test 4 - \"abc\" - \"abf\" - \"2\": ");
	if (ft_memcmp("abc", "abf", 2) == 0)
		OK
	else
		ERROR
	printf("Test 5 - \"\" - \"\" - \"20\": ");
	if (ft_memcmp("", "", 20) == 0)
		OK
	else
		ERROR
	printf("Test 6 - \"a\" - \"b\" - \"0\": ");
	if (memcmp("a", "b", 0) == ft_memcmp("a", "b", 0))
		OK
	else
		ERROR
	printf("\n");
	return (0);
}
