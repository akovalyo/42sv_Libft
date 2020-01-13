/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_bzero.c                             _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/11 20:42:21 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/11 20:42:21 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_bzero()
{
	char s[] = "123456789";
	char s2[] = "123456789";
	char s3[] = "123456789";
	char s4[] = "123456789";
	
	printf("Check ft_bzero\n\nTest 1 - \"123456789\" - \"0\": ");
	bzero(s, 0);	
	ft_bzero(s2, 0);	
	if (strlen(s) != strlen(s2))
		ERROR
	else
		OK
	printf("Test 2 - \"123456789\" - \"1\": ");
	bzero(s, 1);	
	ft_bzero(s2, 1);	
	if (strlen(s) != strlen(s2))
		ERROR
	else
		OK
	printf("Test 3 - \"123456789\" - \"9\": ");
	bzero(s3, 9);	
	ft_bzero(s4, 9);	
	if (strlen(s3) != strlen(s4))
		ERROR
	else
		OK
	return (0);

}

