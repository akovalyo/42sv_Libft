/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_toupper.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 22:24:02 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 22:37:04 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_toupper()
{
	char *str = "Test ft_toupper!";
	int i = 0;
	
	printf("Check ft_toupper:\nStr: \"%s\"\n\nft_toupper: ", str);
	while(str[i])
	{
		putchar(ft_toupper(str[i]));
		i++;
	}
	printf("\ntoupper:    ");
	i = 0;
	while(str[i])
        {
                putchar(toupper(str[i]));
                i++;
        }
	printf("\n\n");
	return (0);
}
