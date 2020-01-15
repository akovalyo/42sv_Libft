/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_memcpy.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:23:11 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 18:23:16 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_memcpy()
{
	
	char d1[10] = {0};
	char d2[10] = {0};
	char d3[10] = {0};
        char d4[10] = {0};
	printf("Check ft_memcpy\n\nTest 1: ");
	if (strcmp(memcpy(d1, "Helloooo", 5), ft_memcpy(d2, "Hellooooo", 5)) != 0)
		ERROR
	else
		OK
	printf("Test 2: ");
        if (strcmp(memcpy(d3, "He", 8), ft_memcpy(d4, "He", 8)) != 0)
                ERROR
        else
                OK

	printf("Test 3: ");
        if (strcmp(memcpy(d3, "Hello", 0), ft_memcpy(d4, "Hello", 0)) != 0)
                ERROR
        else
                OK

	printf("\n");
	return 0;
}
