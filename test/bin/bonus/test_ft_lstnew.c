/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_lstnew.c                            _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/02/04 17:54:25 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/02/04 17:54:25 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

int	test_ft_lstnew()
{
	t_list *test1 = NULL;
	t_list *test2 = NULL;
	t_list *test3 = NULL;

	printf("Check ft_lstnew\n\nTest 1: ");
	test1 = ft_lstnew("0");
	if (strcmp(test1->content, "0") == 0 && test1->next == NULL)
		OK
	else
		ERROR
	
	printf("Test 2: ");
	test2 = ft_lstnew(NULL);
	if (test2->content == NULL && test2->next == NULL)
		OK
	else
		ERROR

	return (0);
}
	


