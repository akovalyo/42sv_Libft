/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strnequ.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/27 11:34:49 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/27 11:34:49 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_strnequ()
{
	char s1[] = "helloa";
	char s2[] = "hellob";
		
	printf("Check ft_strnequ\n\nTest 1 (s1 = helloa, s2 = hellob, n = 5): ");
	if (ft_strnequ(s1, s2, 5) == 1)
		OK
	else
		ERROR
	printf("Test 2 (s1 = helloa, s2 = hellob, n = 6): ");
        if (ft_strnequ(s1, s2, 6) == 0)
                OK
        else
                ERROR

	printf("Test 3 (s1 = hello, s2 = hello, n = 6): ");
	if (ft_strnequ("hello", "hello", 6) == 1)
		OK
	else
		ERROR
	printf("Test 4 (s1 = \\0, s2 = \\0, n = 5): ");
	if (ft_strnequ("", "", 5) == 1)
		OK
	else
		ERROR
	printf("Test 5 (s1 = NULL, s2 = hello): ");
	if (ft_strnequ(NULL, s2, 5) == 0)
		OK
	else
		ERROR
	printf("Test 6 (s1 = hello, s2 = NULL): ");
	if (ft_strnequ(s1, NULL, 5) == 0)
		OK
	else
		ERROR
	printf("Test 7 (s1 = NULL, s2 = NULL): ");
	if (ft_strnequ(NULL, NULL, 5) == 0)
		OK
	else
		ERROR
	printf("Test 8 (s1 = helloa, s2 = hellob, n = 0): ");
        if (ft_strnequ(s1, s2, 0) == 1)
                OK
        else
                ERROR

	printf("\n");
	return (0);
}
