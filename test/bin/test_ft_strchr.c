/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strchr.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/11 20:42:21 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/11 20:42:21 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_strchr()
{
	
	printf("Check ft_strchr\nTest 1 - \"Hello\" - \"i\": ");
	if (strchr("Hello", 'i') != ft_strchr("Hello", 'i'))
		ERROR
	else
		OK
	printf("Test 2 - \"Hello\" - \"e\": ");
	if (strchr("Hello", 'e') != ft_strchr("Hello", 'e'))
		ERROR
	else
		OK
	printf("Test 3 - \"Hello\" - NULL: ");
	if (strchr("Hello", 0) != ft_strchr("Hello", 0))
		ERROR
	else
		OK
	return (0);
}

