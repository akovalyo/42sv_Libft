/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_strmapi.c                           _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/01/27 11:34:49 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/02/19 17:19:22 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

char			f2_map(unsigned int i, char s)
{
	return (s + i);
}

int	test_ft_strmapi()
{
	char s1[] = "hello";
	char *new;
	
	printf("Check ft_strmapi\n\nTest 1: ");
	if (ft_strmapi(NULL, NULL) == NULL)
		OK
	printf("Test 2: ");
	if (ft_strmapi(s1, NULL) == NULL)
		OK
	printf("Test 3: ");
	if (ft_strmapi(NULL, f2_map) == NULL)
		OK
	printf("Test 4: ");
	new = ft_strmapi(s1, f2_map);	
	if (strcmp(new, "hfnos") != 0)
		ERROR
	else
		OK
	printf("\n");
	free(new);
	return (0);
}
