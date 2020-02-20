/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strclr.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/27 11:34:49 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/02/19 17:18:11 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	test_ft_strclr()
{
	char s1[] = "hello";
	char *s2 = NULL;
	int i = 0;

	printf("Check ft_strclr\n\nTest 1 - str = NULL: ");
	ft_strclr(s2);
	if (s2 != NULL)
		ERROR
	OK
	printf("Test 2:\n");
	ft_strclr(s1);
	while (i < 6)
	{
		if (s1[i] != '\0')
			ERROR
		OK		
		i++;
	}
	
	printf("\n");
	return (0);
}
