/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_striter.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/27 11:34:49 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/02/19 17:18:37 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

void			f(char *s)
{
	*s = *s + 1;
}

int	test_ft_striter()
{
	char s1[] = "hello";
	
	printf("Check ft_striter\n\nTest 1: ");
	ft_striter(NULL, NULL);
	printf("OK\n");
	printf("Test 2: ");
	ft_striter(s1, NULL);
	printf("OK\n");
	printf("Test 3: ");
	ft_striter(NULL, f);
	printf("OK\n");
	printf("Test 4: ");
	ft_striter(s1, f);
	if (strcmp(s1, "ifmmp") != 0)
		ERROR
	else
		OK
	printf("\n");
	return (0);
}
