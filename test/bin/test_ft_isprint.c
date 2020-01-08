/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_isprint.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:06:58 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 21:52:00 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */


#include "test.h"
#include "../libft.h"

char	*check_print(int c)
{
	if(c > 0)
		return ("can be printed");
	return ("can't be printed");
}


int	test_ft_isprint()
{
	char s1 = 31;
	char s2 = 'a';
	char s3 = 127;
	
	printf("Check ft_isprint\nChar: <UNIT SEPARATOR>, \"%c\", <DEL>\n\n", s2);
	printf("<UNIT SEPARATOR> - isprint:    %s\n                   ft_isprint: %s\n\n", check_print(isprint(s1)), check_print(ft_isprint(s1)));
	printf("%c -                isprint:    %s\n                   ft_isprint: %s\n\n", s2, check_print(isprint(s2)), check_print(ft_isprint(s2)));
	printf("<DEL> -            isprint:    %s\n                   ft_isprint: %s\n\n", check_print(isprint(s3)), check_print(ft_isprint(s3)));
	return (0);
}

