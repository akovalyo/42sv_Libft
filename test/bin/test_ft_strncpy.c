/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strncpy.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:23:11 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 18:23:16 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_strncpy()
{
	
	char d1[100] = {0};
	char d2[100] = {0};
	
	printf("Check ft_strncpy\nTest 1: ");
	ft_strncpy(d1, "Hellooooo", 5);
	strncpy(d2, "Hellooooo", 5);
	if (ft_strlen(d1) != ft_strlen(d2))
		ERROR
	else
		OK
	printf("Test 2: ");
	ft_strncpy(d1, "Hellooooo", 5);
	strncpy(d2, "Helloooooo", 5);	
	if (ft_strlen(d1) != ft_strlen(d2))
		ERROR
	else
		OK

	printf("\n");
	return 0;
}
