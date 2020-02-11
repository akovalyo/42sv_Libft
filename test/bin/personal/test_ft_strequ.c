/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strequ.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/27 11:34:49 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/27 11:34:49 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	test_ft_strequ()
{
	char s1[] = "hello";
	char s2[] = "hello";
		
	printf("Check ft_strequ\n\nTest 1 (s1 = hello, s2 = hello): ");
	if (ft_strequ(s1, s2) == 1)
		OK
	else
		ERROR
	printf("Test 2 (s1 = hello, s2 = hellow): ");
	if (ft_strequ(s1, "hellow") == 0)
		OK
	else
		ERROR
	printf("Test 3 (s1 = hellow, s2 = hello): ");
	if (ft_strequ("hellow", "hello") == 0)
		OK
	else
		ERROR
	printf("Test 4 (s1 = \\0, s2 = \\0): ");
	if (ft_strequ("", "") == 1)
		OK
	else
		ERROR
	printf("Test 5 (s1 = NULL, s2 = hello): ");
	if (ft_strequ(NULL, s2) == 0)
		OK
	else
		ERROR
	printf("Test 6 (s1 = hello, s2 = NULL): ");
	if (ft_strequ(s1, NULL) == 0)
		OK
	else
		ERROR
	printf("Test 7 (s1 = NULL, s2 = NULL): ");
	if (ft_strequ(NULL, NULL) == 0)
		OK
	else
		ERROR
	printf("\n");
	return (0);
}
