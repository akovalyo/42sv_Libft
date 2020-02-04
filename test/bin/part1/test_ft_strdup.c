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

#include "../test.h"
#include "../../libft.h"

int	test_ft_strdup()
{
	char *src = "hello";
	char *new;
	char *new2;
	
	printf("Check ft_strdup\nTest 1: ");
	new = ft_strdup(src);
	new2 = strdup(src);
	if (ft_strlen(new) != ft_strlen(new2))
		ERROR
	else
		OK	
	printf("\n");
	
	return(0);
}
