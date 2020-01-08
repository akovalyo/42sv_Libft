/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_isdigit.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:06:58 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 19:32:01 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */


#include "test.h"
#include "../libft.h"

char	*check_digit(int c)
{
	if(c > 0)
		return ("is a digit");
	return ("is not a digit");
}


int	test_ft_isdigit()
{
	char s1 = '9';
	char s2 = 'a';
	
	printf("Check ft_isdigit\nChar: \"%c\", \"%c\"\n\n", s1, s2);
	printf("%c - isdigit:    %s\n    ft_isdigit: %s\n", s1, check_digit(isdigit(s1)), check_digit(ft_isdigit(s1)));
	printf("%c - isdigit:    %s\n    ft_isdigit: %s\n\n", s2, check_digit(isdigit(s2)), check_digit(ft_isdigit(s2)));
	return (0);
}

