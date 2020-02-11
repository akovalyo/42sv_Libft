/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strcat.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/08 20:46:42 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/08 20:46:42 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */


#include "../test.h"
#include "../../libft.h"

int	test_ft_strcat()
{
	char d1[100] = {0};
	char d2[100] = {0};
	
	strcat(d1, "Hello");
	ft_strcat(d2, "Hello");	
	printf("Check ft_strcat\n\nTest 1: ");
	if (ft_strlen(d1) != ft_strlen(d2))
		ERROR
	else
		OK
	printf("Test 2: ");
	strcat(d1, "Hello");    
        ft_strcat(d2, "Hello"); 
	if (ft_strlen(d1) != ft_strlen(d2))
		ERROR
	else
		OK
	printf("\n");
	return (0);

}
