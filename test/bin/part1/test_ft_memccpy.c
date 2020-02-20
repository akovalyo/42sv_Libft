/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_memccpy.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:23:11 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/02/19 21:44:25 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	test_ft_memccpy()
{
	
	char d1[10] = {0};
	char d2[10] = {0};
	char d3[10] = {0};
        char d4[10] = {0};
	char d5[10] = {0};
        char d6[10] = {0};
	printf("Check ft_memccpy\n\nTest 1: ");
	if (memccpy(d1, "Helloooo", 'o', 2) != ft_memccpy(d2, "Hellooooo", 'o', 2))
		ERROR
	else
		OK
	printf("Test 2: ");
        if (memccpy(d3, "Helloooooo", 'z', 8) != ft_memccpy(d4, "Helloooooo", 'z', 8))
                ERROR
        else
                OK
	printf("Test 3: ");
        if (strcmp(memccpy(d5, "Helloooooo", 'o', 8), ft_memccpy(d6, "Helloooooo", 'o', 8)) != 0)
                ERROR
        else
                OK
	printf("\n");
	return 0;
}
