/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strcmp.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/10 20:11:53 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/10 20:11:53 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int     ft_strcmp2(char *s1, char *s2)
{
        int i;

        i = 0;
        while (s1[i] && s2[i] && s1[i] == s2[i])
                i++;
        return (s1[i] - s2[i]);
}


int	test_ft_strcmp()
{
	
	printf("Check ft_strcmp\n\nTest 1 - \"abc\" - \"abc\": ");
	if (ft_strcmp2("abc", "abc") == 0)
		OK
	else
		ERROR
	printf("Test 2 - \"a\" - \"abc\": ");
	if (ft_strcmp2("a", "abc") < 0)
		OK
	else
		ERROR
	printf("Test 3 - \"abc\" - \"a\": ");
	if (ft_strcmp2("abc", "a") > 0)
		OK
	else
		ERROR
	printf("Test 4 - \"abc\" - \"fgh\": ");
	if (ft_strcmp2("abc", "fgh") < 0)
		OK
	else
		ERROR
	printf("Test 5 - \"\" - \"abc\": ");
	if (ft_strcmp2("", "abc") < 0)
		OK
	else
		ERROR
	printf("Test 6 - \"abc\" - \"\": ");
	if (ft_strcmp2("abc", "") > 0)
		OK
	else
		ERROR
	printf("\n");
	return (0);
}
