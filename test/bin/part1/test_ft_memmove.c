/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_memmove.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/15 22:05:39 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/15 22:05:39 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	test_ft_memmove()
{
	char str1[50] = "1 23 45678 9123 45678 91 234567890";
	char str2[50] = "1 23 45678 9123 45678 91 234567890";
	char str3[] = "1 23 45678 9123 45678 91 234567890";
	char str4[] = "1 23 45678 9123 45678 91 234567890";
		
	printf("Check ft_memmove\n\nTest 1: ");
	if (strcmp(memmove(str1 + 11, str1 + 5, 29), ft_memmove(str2 + 11, str2 + 5, 29)) != 0)
		ERROR
	else
		OK
	printf("Test 2: ");
	if (strcmp(memmove(str3 + 5, str3 + 10, 10), ft_memmove(str4 + 5, str4 + 10, 10)) != 0)
		ERROR
        else
                OK
	printf("\n");
	return (0);
}
