/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strjoin.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/28 12:25:36 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/28 12:25:36 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	test_ft_strjoin()
{	
	char *new;
	
	printf("Check ft_strjoin\n\nTest 1 (\"Hello \", \"world\"): ");
	new = ft_strjoin("Hello ", "world");
	if (strcmp(new, "Hello world") != 0)
		ERROR
	else
		OK
	free(new);
	printf("Test 2 (\"\", \"world\"): ");
	new = ft_strjoin("", "world");
	if (strcmp(new, "world") != 0)
		ERROR
	else
		OK
	free(new);
	printf("Test 3 (\"Hello\", \"\"): ");
	new = ft_strjoin("Hello", "");
	if (strcmp(new, "Hello") != 0)
		ERROR
	else
		OK
	printf("Test 4 (NULL, NULL): ");	
	if (ft_strjoin(NULL, NULL) == NULL)
		OK
	printf("Test 5 (NULL, \"\"): ");
	if (ft_strjoin(NULL, "") == NULL)
		OK	
	printf("Test 6 (\"\", NULL): ");
	if (ft_strjoin("", NULL) == NULL)
		OK
	return (0);	
}
