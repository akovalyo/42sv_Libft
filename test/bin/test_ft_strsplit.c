/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strsplit.c                          _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/28 18:19:04 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/28 18:19:04 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_strsplit()
{
	char **split;
	printf("Check ft_strsplit\n\nTest 1 (\"*hello*\", '*'): ");
	split = ft_strsplit("*hello*", '*');
	if (strcmp(split[0], "hello") == 0 && split[1] == NULL)
		OK
	else
		ERROR
	free(*split);
	
	printf("Test 2 (\"-hello---world\", '-'): ");
	split = ft_strsplit("-hello---world", '-');
	if (strcmp(split[0], "hello") == 0 && strcmp(split[1], "world") == 0 && split[2] == NULL)
		OK
	else
		ERROR	
	free(*split);
	
	printf("Test 3 (\"*****\", '*'): ");
	split = ft_strsplit("*****", '*');
	if (split[0] == NULL)
		OK
	else
		ERROR	
	free(*split);	
	
	printf("Test 4 (\"word\", '*'): ");
	split = ft_strsplit("word", '*');
	if (strcmp(split[0], "word") == 0 && split[1] == NULL)
		OK
	else
		ERROR
	free(*split);	


	printf("Test 5 (\"\", '*'): ");
	split = ft_strsplit("", '*');
	if (split[0] == NULL)
		OK
	else
		ERROR		
	free(*split);	

	
	printf("Test 6 (\"word\", 0): ");
	if (ft_strsplit("word", 0) == NULL)
		OK
	else
		ERROR
	
	printf("Test 7 (0, '*'): ");
	if (ft_strsplit(0, '*') == NULL)
		OK
	else
		ERROR
	printf("\n");	
	
	return (0);
}
