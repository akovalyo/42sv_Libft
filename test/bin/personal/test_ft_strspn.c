/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strspn.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/02/10 17:15:37 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/02/10 17:15:37 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	test_ft_strspn()
{
	
	printf("Check ft_strspn\n\nTest 1 - \"abc\" - \"abc\": ");
	if (ft_strspn("abc", "abc") == strspn("abc", "abc"))
		OK
	else
		ERROR

	printf("Test 2 - \"abca\" - \"abcd\": ");
        if (ft_strspn("abca", "abcd") == strspn("abca", "abcd"))
                OK
        else
                ERROR

	printf("Test 3 - \"\" - \"\": ");
        if (ft_strspn("", "") == strspn("", ""))
                OK
        else
                ERROR

	printf("Test 4 - \"\" - \"abc\": ");
        if (ft_strspn("", "abc") == strspn("", "abc"))
                OK
        else
                ERROR
	
	printf("Test 5 - \"abc\" - \"\": ");
        if (ft_strspn("abc", "") == strspn("abc", ""))
                OK
        else
                ERROR
	
		
	return (0);
}
