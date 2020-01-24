/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_putstr.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/17 20:42:48 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/17 20:42:48 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_put()
{
	char *s1 = "Hello";
	char *s2 = "world!"; 
	printf("Check ft_puchar, ft_putstr, ft_putendl, ft_putchar_fd, ft_putstr_fd, ft_putendl_fd\n\nTest 1 (ft_putstr) - s1 = \"Hello\", s2 = \"world!\": \n");
	ft_putstr(s1);
	ft_putstr(s2);
	ft_putchar('\n');
	printf("Test 2 (ft_putendl) - s1 = \"Hello\", s2 = \"world!\": \n");
	ft_putendl(s1);
	ft_putendl(s2);
	ft_putchar('\n');
	ft_putstr("Test ft_putchar_fd: ");
	ft_putchar_fd('+', 1);
	ft_putchar('\n');
	ft_putstr_fd("Test ft_putstr_fd: +", 1);
	ft_putchar('\n');
	ft_putendl_fd("Test ft_putendl_fd: +", 1);
	ft_putchar('\n');
	ft_putchar('\n');
	return (0);
}
