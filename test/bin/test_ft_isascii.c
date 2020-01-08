/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_isascii.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:06:58 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 19:29:56 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */


#include "test.h"
#include "../libft.h"

char	*check_ascii(int c)
{
	if(c > 0)
		return ("is an ASCII character");
	return ("is not an ASCII character");
}


int	test_ft_isascii()
{
	char s1 = '9';
	char s2 = 129;
	
	printf("Check ft_isascii\nChar: \"%c\", \"%c\"\n\n", s1, s2);
	printf("%c - isascii:    %s\n    ft_isascii: %s\n", s1, check_ascii(isascii(s1)), check_ascii(ft_isascii(s1)));
	printf("%c - isdigit:    %s\n    ft_isascii: %s\n\n", s2, check_ascii(isascii(s2)), check_ascii(ft_isascii(s2)));
	return (0);
}

