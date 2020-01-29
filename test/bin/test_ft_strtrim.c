/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strtrim.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/28 13:25:14 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/28 13:25:14 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_strtrim()
{
	char *new;
	printf("Check ft_strtrim\n\nTest 1 (\"test\"): ");
	new = ft_strtrim("test");
	if (strcmp(new, "test") == 0)
		OK
	else
		ERROR
	free(new);
	printf("Test 2 (\" test \"): ");
	new = ft_strtrim(" test ");
	if (strcmp(new, "test") == 0)
		OK
	else
		ERROR
	free(new);
	printf("Test 3 (\" \ttest\t \"): ");
	new = ft_strtrim(" \ttest\t ");
	if (strcmp(new, "test") == 0)
		OK
	else
		ERROR
	free(new);
	printf("Test 4 (\"\"): ");
	new = ft_strtrim("");
	if (strcmp(new, "") == 0)
		OK
	else
		ERROR
	free(new);
	printf("Test 5 (\" \\t\\n\\t \"): ");
	new = ft_strtrim(" \t\n\t ");
	if (strcmp(new, "") == 0)
		OK
	else
		ERROR
	free(new);
	printf("Test 6 (NULL): ");
	if (ft_strtrim(NULL) == NULL)
		OK
	printf("Test 7 (\" test test \"): ");
	new = ft_strtrim(" test test ");
	if (strcmp(new, "test test") == 0)
		OK
	else
		ERROR
	printf("\n");
	free(new);
	return (0);
}
