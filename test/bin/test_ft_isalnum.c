/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_isalnum.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:20:51 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 19:48:09 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

char	*check_alnum(int c)
{
	if(c > 0)
		return ("is an alphanumeric");
	return ("is not an alphanumeric");
}


int	test_ft_isalnum()
{
	char s1 = '1';
	char s2 = 'a';
	char s3 = ' ';
	char s4 = '*';
	
	printf("Check ft_isalnum\nChar: \"%c\", \"%c\", \"%c\", \"%c\"\n\n", s1, s2, s3, s4);
	printf("%c - isalnum:    %s\n    ft_isalnum: %s\n", s1, check_alnum(isalnum(s1)), check_alnum(ft_isalnum(s1)));
	printf("%c - isalnum:    %s\n    ft_isalnum: %s\n", s2, check_alnum(isalnum(s2)), check_alnum(ft_isalnum(s2)));
	printf("%c - isalnum:    %s\n    ft_isalnum: %s\n", s3, check_alnum(isalnum(s3)), check_alnum(ft_isalnum(s3)));
	printf("%c - isalnum:    %s\n    ft_isalnum: %s\n\n", s4, check_alnum(isalnum(s4)), check_alnum(ft_isalnum(s4)));
	return (0);
}

