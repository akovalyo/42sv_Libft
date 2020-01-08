/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_isalpha.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:20:51 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 19:31:10 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

char	*check_alpha(int c)
{
	if(c > 0)
		return ("is an alphabet");
	return ("is not an alphabet");
}


int	test_ft_isalpha()
{
	char s1 = 'A';
	char s2 = 'a';
	char s3 = '1';
	char s4 = '*';
	
	printf("Check ft_isalpha\nChar: \"%c\", \"%c\", \"%c\", \"%c\"\n\n", s1, s2, s3, s4);
	printf("%c - isalpha:    %s\n    ft_isalpha: %s\n", s1, check_alpha(isalpha(s1)), check_alpha(ft_isalpha(s1)));
	printf("%c - isalpha:    %s\n    ft_isalpha: %s\n", s2, check_alpha(isalpha(s2)), check_alpha(ft_isalpha(s2)));
	printf("%c - isalpha:    %s\n    ft_isalpha: %s\n", s3, check_alpha(isalpha(s3)), check_alpha(ft_isalpha(s3)));
	printf("%c - isalpha:    %s\n    ft_isalpha: %s\n\n", s4, check_alpha(isalpha(s4)), check_alpha(ft_isalpha(s4)));
	return (0);
}

