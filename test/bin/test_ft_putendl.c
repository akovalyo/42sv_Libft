/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_putendl.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/17 20:42:48 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/17 21:20:39 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_putendl()
{
	char *s1 = "Hello";
	char *s2 = "world!"; 
	printf("Check ft_putendl\n\nTest 1 - s1 = \"Hello\", s2 = \"world!\": \n");
	ft_putendl(s1);
	ft_putendl(s2);
	printf("\n");
	return (0);
}
