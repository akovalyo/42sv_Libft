/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_atoi.c                              _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:20:13 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 18:20:19 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_atoi()
{
	char s1[] = "123b";
	char s2[] = " 123b";
	char s3[] = "b123";
	char s4[] = "123b123";
	
	printf("Check ft_atoi\nstr: \"%s\", \"%s\", \"%s\", \"%s\"\n\n", s1, s2, s3, s4);
	printf("ft_atoi: %d, %d, %d, %d\n", ft_atoi(s1), ft_atoi(s2), ft_atoi(s3), ft_atoi(s4));	
	printf("atoi:    %d, %d, %d, %d\n\n", atoi(s1), atoi(s2), atoi(s3), atoi(s4));	
	return (0);
}
