/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_memchr.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/11 20:42:21 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/13 20:58:01 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

void	*ft_memchr3(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;	
	while (i < n)
	{
		if (((unsigned char *)s)[i] == c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}

void		*ft_memchr2(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == ((unsigned char*)s)[i])
			return (((unsigned char*)s) + i);
		i++;
	}
	return (NULL);
}
int	test_ft_memchr()
{
	char s[] = "Hello world";
	char s2[] = "Hello world";

	printf("Check ft_memchr\n\nTest 1 - \"Hello world\" - \"o\" - \"3\": ");
	if (memchr(s, 'o', 4) == ft_memchr(s2, 'o', 4))
		OK
	else
		ERROR
	printf("Test 2 - \"Hello world\" - \"l\" - \"4\": ");
	if (strcmp(memchr(s, 'l', 4), ft_memchr(s2, 'l', 4)) == 0)
		OK
	else
		ERROR
	printf("Test 3 - \"Hello world\" - \"f\" - \"11\": ");
	if (memchr(s, 'f', 11) == ft_memchr(s2, 'f', 11))
		OK
	else
		ERROR
	printf("Test 4 - \"Hello world\" - NULL - \"11\": ");
	if (memchr(s, 0, 11) == ft_memchr(s2, 0, 11))
		OK
	else
		ERROR
	printf("Test 5 - \"Hello world\" - \"w\" - \"0\": ");
	if (memchr(s, 'w', 0) == ft_memchr(s2, 'w', 0))
		OK
	else
		ERROR


	/*printf("Test 2 - \"Hello\" - \"e\": ");
	if (strchr("Hello", 'e') != ft_strchr("Hello", 'e'))
		ERROR
	else
		OK
	printf("Test 3 - \"Hello\" - NULL: ");
	if (strchr("Hello", 0) != ft_strchr("Hello", 0))
		ERROR
	else
		OK*/
	return (0);
}

