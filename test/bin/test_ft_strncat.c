/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strncat.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/08 20:46:42 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/08 20:46:42 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */


#include "test.h"
#include "../libft.h"

int	test_ft_strncat()
{
	char d1[50] = {0};
	char d2[50] = {0};
	
	strncat(d1, "Hello", 3);
	ft_strncat(d2, "Hello", 3);	
	printf("Check ft_strncat\n\nTest 1: ");
	if (ft_strlen(d1) != ft_strlen(d2))
		ERROR
	else
		OK
	printf("Test 2: ");
	strncat(d1, "Hello", 3);    
        ft_strncat(d2, "Hello", 3); 
	if (ft_strlen(d1) != ft_strlen(d2))
		ERROR
	else
		OK
	printf("\n");
	return (0);

}
