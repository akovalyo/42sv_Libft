/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strmap.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/27 11:34:49 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/27 11:34:49 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

char	f_map(char s)
{
	return (s + 1);
}

int	test_ft_strmap()
{
	char s1[] = "hello";
	char *new;
	
	printf("Check ft_strmap\n\nTest 1: ");
	if (ft_strmap(NULL, NULL) == NULL)
		OK
	printf("Test 2: ");
	if (ft_strmap(s1, NULL) == NULL)
		OK
	printf("Test 3: ");
	if (ft_strmap(NULL, f_map) == NULL)
		OK
	printf("Test 4: ");
	new = ft_strmap(s1, f_map);
	if (strcmp(new, "ifmmp") != 0)
		ERROR
	else
		OK
		
	
	printf("\n");
	free(new);
	return (0);
}
