/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_part2.c                                _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:19:14 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 18:19:20 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test.h"

int	main()
{
	printf("\033[01;33m"); 
	printf("\n********* PART 2 *******\n\n");  
	printf("\033[0m");

	test_ft_substr();
	divider();
	test_ft_strjoin();
	divider();
	test_ft_strtrim();
	divider();
	test_ft_split();
	divider();
	test_ft_itoa();
	divider();
	test_ft_strmapi();
	divider();
	
	return (0);
}

