/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strcpy.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:21:22 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 18:21:25 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_strcpy()
{
	// check ft_strcpy
	char d[] = "hello";
	char s[] = "world";
	char d2[] = "hello";
	char s2[] = "world";
	
	printf("Check ft_strcpy\ndest = \"%s\" src = \"%s\"\n\n", d, s);
	ft_strcpy(d, s);
	strcpy(d2, s2);
	printf("ft_strcpy: %s\n", d);
	printf("strcpy: %s\n\n", d2);
	
	return 0;
}
