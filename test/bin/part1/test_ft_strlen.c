/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strlen.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:22:48 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 18:22:50 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	test_ft_strlen()
{
	printf("Check ft_strlen\n\nTest 1 - \"\": ");
	if(strlen("") != ft_strlen(""))
		ERROR
	else 
		OK
	printf("Test 2 - \"a\": ");
	if(strlen("a") != ft_strlen("a"))
		ERROR
	else 
		OK
	printf("Test 3 - \"abc\": ");
	if(strlen("abc") != ft_strlen("abc"))
		ERROR
	else 
		OK
	printf("\n");
	return (0);
}
