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
	// check ft_strncpy
	char d[] = "hello";
	char s[] = "worldddddddd";
	int n = 5;
	int n2 = 5;
	char d2[] = "hello";
	char s2[] = "worldddddddd";
	
	printf("Check ft_strncpy.\ndest = \"%s\" src = \"%s\", n = %d\n\n", d, s, n);
	ft_strncpy(d, s, n);
	strncpy(d2, s2, n2);
	printf("ft_strncpy: %s\n", d);
	printf("strncpy: %s\n\n", d2);
		
	return 0;
}
