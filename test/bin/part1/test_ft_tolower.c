/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_tolower.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 22:24:02 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 22:43:52 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"
int	test_ft_tolower()
{
	char *str = "TEST FT_TOLOWER!";
	int i = 0;
	
	printf("Check ft_tolower:\nStr: \"%s\"\n\nft_tolower: ", str);
	while(str[i])
	{
		putchar(ft_tolower(str[i]));
		i++;
	}
	printf("\ntolower:    ");
	i = 0;
	while(str[i])
        {
                putchar(tolower(str[i]));
                i++;
        }
	printf("\n\n");
	return (0);
}
