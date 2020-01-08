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

#include "test.h"
#include "../libft.h"

int	test_ft_strlen()
{
	char s[] = "abc";
	int a, b;
	
	a = strlen(s);
	b = ft_strlen(s);
	printf("Check ft_strlen.\nString \"%s\"\n\n", s); 
	printf("ft_strlen: %d\n", b);
	printf("strlen: %i\n\n", a);
		
	return (0);
}
