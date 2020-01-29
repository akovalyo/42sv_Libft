/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strsub.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/28 11:15:43 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/28 11:15:43 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_strsub()
{
	char *new;
	char str[] = "123456";

	printf("Check ft_strsub\n\nTest 1 (\"123456\", 1, 5): ");
	new = ft_strsub(str, 1, 5);
	if (strcmp(new, "23456") != 0)
		ERROR
	else
		OK
	free(new);
	printf("Test 2 (\"123456\", 1, 1): ");
	new = ft_strsub(str, 1, 1);
	if (strcmp(new, "2") != 0)
		ERROR
	else
		OK
	free(new);
	printf("Test 3 (\"123456\", 1, 0): ");
	new = ft_strsub(str, 1, 0);
	if (strcmp(new, "") != 0)
		ERROR
	else
		OK
	free(new);
	printf("Test 4 (NULL, 0, 0): ");	
	if (ft_strsub(NULL, 0, 0) == NULL)
		OK
	printf("Test 5 (NULL, 1, 0): ");
	if (ft_strsub(NULL, 1, 0) == NULL)
		OK
	printf("Test 6 (NULL, 1, 1): ");
	if (ft_strsub(NULL, 1, 1) == NULL)
		OK
	printf("Test 7 (NULL, 0, 1): ");
	if (ft_strsub(NULL, 0, 1) == NULL)
		OK	
	printf("\n");
	return (0);
}
