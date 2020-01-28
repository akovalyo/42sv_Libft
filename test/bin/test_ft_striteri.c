/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_striteri.c                          _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/27 11:34:49 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/27 11:34:49 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

void			f2(unsigned int i, char *s)
{
	*s = *s + i;
}

int	test_ft_striteri()
{
	char s1[] = "hello";
	
	printf("Check ft_striteri\n\nTest 1: ");
	ft_striteri(NULL, NULL);
	printf("OK\n");
	printf("Test 2: ");
	ft_striteri(s1, NULL);
	printf("OK\n");
	printf("Test 3: ");
	ft_striteri(NULL, f2);
	printf("OK\n");
	printf("Test 4: ");
	ft_striteri(s1, f2);
	if (strcmp(s1, "hfnos") != 0)
		ERROR
	else
		OK
		
	
	printf("\n");
	return (0);
}
