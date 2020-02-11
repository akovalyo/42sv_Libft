/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strcspn.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/02/10 17:15:37 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/02/10 17:15:37 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	test_ft_strcspn()
{
	
	printf("Check ft_strcspn\n\nTest 1 - \"abc\" - \"abc\": ");
	if (ft_strcspn("abc", "abc") == strcspn("abc", "abc"))
		OK
	else
		ERROR

	printf("Test 2 - \"abca\" - \"abcd\": ");
        if (ft_strcspn("abca", "abcd") == strcspn("abca", "abcd"))
                OK
        else
                ERROR

	printf("Test 3 - \"\" - \"\": ");
        if (ft_strcspn("", "") == strcspn("", ""))
                OK
        else
                ERROR

	printf("Test 4 - \"\" - \"abc\": ");
        if (ft_strcspn("", "abc") == strcspn("", "abc"))
                OK
        else
                ERROR
	
	printf("Test 5 - \"abc\" - \"\": ");
        if (ft_strcspn("abc", "") == strcspn("abc", ""))
                OK
        else
                ERROR
	
		
	return (0);
}
