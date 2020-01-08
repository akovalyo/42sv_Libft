/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strdup.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/07 18:21:48 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/07 18:21:50 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

int	test_ft_strdup()
{
	char *src;
	char *new;
	char *new2;

	src = "hello";
	new = ft_strdup(src);
	new2 = strdup(src);
	printf("Check ft_strcpy\nSrc = %s\n\nft_strdup: %s\nstrdup: %s\n\n", src, new, new2);
	
	return(0);
}
