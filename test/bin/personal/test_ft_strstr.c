/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/08 18:25:51 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/01/08 18:35:53 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	test_ft_strstr()
{
	char *str = "Hello, str test";
	
	printf("Check ft_strstr. String \"Hello, str test\"\n\nTest 1 - To find: \"Hello\": ");
	if (strstr(str, "Hello") != ft_strstr(str, "Hello"))
		ERROR
	else
		OK
	printf("Test 2 - To find: \", str\": ");
        if (strstr(str, "Hello") != ft_strstr(str, "Hello"))
                ERROR
        else
                OK
	printf("Test 3 - To find: \"s\": ");
        if (strstr(str, "s") != ft_strstr(str, "s"))
                ERROR
        else
                OK
	printf("Test 4 - To find: \"\": ");
        if (strstr(str, "") != ft_strstr(str, ""))
                ERROR
        else
                OK
	printf("Test 5 - String \"\". To find: \"\": ");
        if (strstr("", "") != ft_strstr("", ""))
                ERROR
        else
                OK
	return (0);
}
	
