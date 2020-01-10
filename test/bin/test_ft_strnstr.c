/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strnstr.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/08 18:25:51 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/08 18:35:53 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "../libft.h"

char	*n_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	k;

	if (!to_find[0])
		return ((char*)str);
	i = -1;
	while (str[++i])
	{
		k = 0;
		while (to_find[k] == str[i + k] && i + k < len)
			if (!to_find[k++])
				return ((char*)&str[i]);
		if (k != 0 && !to_find[k])
			return ((char*)&str[i]);
	}
	return (NULL);
}

int	test_ft_strnstr()
{
	char *str = "Hello, str test";
	
	printf("Check ft_strnstr\n\nTest 1: ");
	if (n_strnstr(str, "Hello", 6) != ft_strnstr(str, "Hello", 6))
		ERROR
	else
		OK
	printf("Test 2: ");
	if (n_strnstr(str, "Hello", 2) != ft_strnstr(str, "Hello", 2))
		ERROR
	else
		OK
	printf("Test 3: ");
        if (n_strnstr(str, "str", 1) != ft_strnstr(str, "str", 1))
                ERROR
        else
                OK
	printf("Test 4: ");
        if (n_strnstr(str, "test", 0) != ft_strnstr(str, "test", 0))
                ERROR
        else
                OK
	printf("Test 5: ");
        if (n_strnstr(str, "", 5) != ft_strnstr(str, "", 5))
                ERROR
        else
                OK
	printf("Test 6: ");
        if (n_strnstr("", "", 3) != ft_strnstr("", "", 3))
                ERROR
        else
                OK
	return (0);
}
	
