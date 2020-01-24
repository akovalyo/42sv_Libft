/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_putnbr.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/22 21:24:15 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/22 21:24:15 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_putnbr()
{

	ft_putstr("Check ft_putnbr, ft_putnbr_fd\n\nTest 1 - n=0: ");
	ft_putnbr(0);
	ft_putstr(", ");
	ft_putnbr_fd(0, 1);
	ft_putstr("\nTest 2 - n=1234: ");
	ft_putnbr(1234);
	ft_putstr(", ");
	ft_putnbr_fd(1234, 1);
	ft_putstr("\nTest 3 - n=-1234: ");
	ft_putnbr(-1234);
	ft_putstr(", ");
	ft_putnbr_fd(-1234, 1);
	ft_putstr("\nTest 4 - n=-2147483648: ");
	ft_putnbr(-2147483648);
	ft_putstr(", ");
	ft_putnbr_fd(-2147483648, 1);
	ft_putstr("\nTest 5 - n=2147483647: ");
	ft_putnbr(2147483647);
	ft_putstr(", ");
	ft_putnbr_fd(2147483647, 1);
	ft_putstr("\n\n");
}

