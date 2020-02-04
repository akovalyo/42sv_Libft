/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strncmp.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/10 20:11:53 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/10 20:11:53 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_strncmp()
{
	
	printf("Check ft_strncmp\n\nTest 1 - \"abc\" - \"abc\" - \"2\": ");
	if (ft_strncmp("abc", "abc", 2) == 0)
		OK
	else
		ERROR
	printf("Test 2 - \"abc\" - \"fgh\" - \"2\": ");
	if (ft_strncmp("abc", "fgh", 2) < 0)
		OK
	else
		ERROR
	printf("Test 3 - \"fgh\" - \"abc\" - \"2\": ");
	if (ft_strncmp("fgh", "abc", 2) > 0)
		OK
	else
		ERROR
	printf("Test 4 - \"abc\" - \"abf\" - \"2\": ");
	if (ft_strncmp("abc", "abf", 2) == 0)
		OK
	else
		ERROR
	printf("Test 5 - \"\" - \"\" - \"20\": ");
	if (ft_strncmp("", "", 20) == 0)
		OK
	else
		ERROR
	printf("Test 6 - \"a\" - \"b\" - \"0\": ");
	if (ft_strncmp("a", "b", 0) == 0)
		OK
	else
		ERROR
	printf("Test 7: ");
	if (ft_strncmp("a", "abc", 2) < 0)
		OK
	else
		ERROR
	printf("Test 8: ");
	if (ft_strncmp("abc", "a", 0) == 0)
		OK
	else
		ERROR
	printf("\n");
	return (0);
}
