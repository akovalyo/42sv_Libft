/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strlcat.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/08 21:54:19 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/08 21:54:19 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

size_t  n_strlcat(char *dst, const char *src, size_t size)
{
    size_t  len;
    size_t  slen;

    len = 0;
    slen = strlen(src);
    while (*dst && size > 0) 
    {
        dst++;
        len++;
        size--;
    }
    while (*src && size-- > 1) 
        *dst++ = *src++;
    if (size == 1 || *src == 0) 
        *dst = '\0';
    return (slen + len);
}

int	test_ft_strlcat()
{
	char	dest[50] = {0};
	char	dest2[50] = {0};
		
	printf("Check ft_strlcat\n\nTest 1: ");
	if (n_strlcat(dest, "Hello ", 4) != ft_strlcat(dest2, "Hello ", 4))
		ERROR
	else
		OK
	printf("Test 2: ");
	if (n_strlcat(dest, "Hello", 0) != ft_strlcat(dest2, "Hello", 0))
		ERROR
	else
		OK
	printf("\n");
	return (0);
}
