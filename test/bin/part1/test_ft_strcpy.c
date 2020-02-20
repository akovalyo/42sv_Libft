/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strcpy.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:21:22 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/02/19 17:06:55 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	test_ft_strcpy()
{
	// check ft_strcpy
	char d1[50];
	char d2[50];
		
	printf("Check ft_strcpy\nTest 1: ");
	ft_strcpy(d1, "Hello");
	strcpy(d2, "Hello");
	if (strcmp(d1, d2) != 0)
		ERROR
	else
		OK
	printf("Test 2: ");
	ft_strcpy(d1, "Hello");
	strcpy(d2, "Hello");	
	if (strcmp(d1, d2) != 0)
		ERROR
	else
		OK

	printf("\n");
	return 0;
}
