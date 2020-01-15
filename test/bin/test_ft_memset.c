/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_memset.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/11 20:42:21 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/11 20:42:21 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_memset()
{
	char s[] = "123456789";
	char s2[] = "123456789";
	char s3[] = "123456789";
	char s4[] = "123456789";
	
	printf("Check ft_memset\n\nTest 1 - \"123456789\" - \"z\" - \"0\": ");
	memset(s, 'z', 0);	
	ft_memset(s2, 'z', 0);	
	if (strcmp(s, s2) == 0)
		OK
	else
		ERROR
	printf("Test 2 - \"123456789\" - \"z\" - \"1\": ");
	memset(s, 'z', 1);	
	ft_memset(s2, 'z', 1);	
	if (strcmp(s, s2) == 0)
		OK
	else
		ERROR
	printf("Test 3 - \"123456789\" - \"z\" - \"9\": ");
	memset(s3, 'z', 9);	
	ft_memset(s4, 'z', 9);	
	if (strcmp(s3, s4) == 0)
		OK
	else
		ERROR
	return (0);

}

