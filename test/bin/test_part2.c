/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_part2.c                                _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:19:14 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/02/19 17:26:40 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

int	main()
{
	printf("\033[01;33m"); 
	printf("\n********* PART 2 *******\n\n");  
	printf("\033[0m");

	test_ft_strclr();
	divider();
	test_ft_striter();
	divider();
	test_ft_striteri();
	divider();
	test_ft_strmap();
	divider();
	test_ft_strmapi();
	divider();
	test_ft_strequ();
	divider();
	test_ft_strnequ();
	divider();
	test_ft_strsub();
	divider();
	test_ft_strjoin();
	divider();
	test_ft_strtrim();
	divider();
	test_ft_strsplit();
	divider();
	test_ft_itoa();
	divider();
	test_ft_putnbr();
	divider();
	return (0);
}

