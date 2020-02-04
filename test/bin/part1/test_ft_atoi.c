/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_atoi.c                              _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:20:13 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 18:20:19 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	atoi_check(char *str)
{
	if(atoi(str) != ft_atoi(str))
		return (1);
	return (0);
}

int	test_ft_atoi()
{
	printf("Check ft_atoi\n\nTest 1 - \"\": ");
	if(atoi_check("") == 1)
		ERROR
	else 
		OK	
	printf("Test 2 - \"\\n\\t\\v\\r\\f 123\": ");
	if(atoi_check("\n\t\v\r\f 123") == 1)
		ERROR
	else 
		OK
	printf("Test 3 - \"a123\": ");
	if(atoi_check("a123") == 1)
		ERROR
	else 
		OK
	printf("Test 4 - \"123a\": ");
	if(atoi_check("123a") == 1)
		ERROR
	else 
		OK
	printf("Test 5 - \"-123\": ");
	if(atoi_check("-123") == 1)
		ERROR
	else 
		OK
	printf("Test 6 - \"--123\": ");
	if(atoi_check("--123") == 1)
		ERROR
	else 
		OK
	printf("Test 7 - \"-2147483648\": ");
	if(atoi_check("-2147483648") == 1)
		ERROR
	else 
		OK
	printf("Test 8 - \"2147483647\": ");
	if(atoi_check("2147483647") == 1)
		ERROR
	else 
		OK
	printf("\n");
	return (0);
}
