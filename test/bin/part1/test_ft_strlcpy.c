/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_stlcpy.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/02/04 09:25:06 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/02/04 09:25:06 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	test_ft_strlcpy()
{
	char d1[5];
	char d2[1];
	char d3[5];
	
	printf("Check ft_strlcpy\n\nTest 1: ");	
	if (ft_strlcpy(d1, "1234567", 5) == 7 && strcmp(d1, "1234") == 0)
		OK
	else 
		ERROR
	
	printf("Test 2: ");	
	if (ft_strlcpy(d2, "1234567", 1) == 7 && strcmp(d2, "") == 0)
		OK
	else 
		ERROR
	
	printf("Test 3: ");	
	if (ft_strlcpy(d3, "", 5) == 0 && strcmp(d3, "") == 0)
		OK
	else 
		ERROR

	return(0);	
}
