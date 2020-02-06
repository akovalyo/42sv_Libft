/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_lst.c                               _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/02/05 10:42:27 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/02/05 10:42:27 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

void	ft_f(void *d)
{
	char *c = "1";	
	printf("%s\n", d);	
	d = c;
	printf("%s\n", d);
	
	
}

void    ft_lstiter(t_list *lst, void (*f)(void *))
{       
        if (lst == NULL || f == NULL)
                return ;
        while(lst != NULL)
        {       
		printf("*\n");                
		f(lst->content);
                lst = lst->next;
        }
}



int	test_ft_lst()
{
	t_list *head = NULL;
	t_list *first = NULL;
	t_list *second = NULL;
	t_list *third = NULL;
	t_list *four = NULL;
	t_list *new = NULL;
	
	first = ft_lstnew("a");
	ft_lstadd_back(&head, first);
	printf("Check lst functions:\n\nft_lstnew: ");
	if (strcmp(first->content, "a") == 0 && first->next == NULL)
		OK
	else
		ERROR
	printf("\n");
	
	printf("ft_lstadd_back: ");
	if (strcmp(head->content, "a") == 0)
		OK
	else
		ERROR
	printf("\n");

	second = ft_lstnew("b");
	ft_lstadd_front(&head, second);
	
	printf("ft_lstadd_front: ");
	if (strcmp(head->content, "b") == 0)
		OK
	else
		ERROR
	printf("\n");
	third = ft_lstnew("d");
	ft_lstadd_front(&head, third);

	printf("ft_lstsize:\nTest 1: ");
	if (ft_lstsize(head) == 3)
		OK
	else
		ERROR
	printf("Test 2: ");
	if (ft_lstsize(four) == 0)
		OK
	else
		ERROR
	printf("\n");
	
	printf("ft_lstlast:\nTest 1: ");
	if (strcmp(ft_lstlast(head)->content, "a") == 0)
		OK
	else
		ERROR
	printf("Test 2: ");
	if (ft_lstlast(new) == NULL)
		OK
	else
		ERROR
	printf("\n");
	
	ft_lstprint_str(third);
	printf("\n");
	ft_lstiter(third, ft_f);
	
	
	//printf("%s\n", head);

	//new = ft_lstlast(head);
	//printf("%s\n", new->content);
	ft_lstprint_str(third);
	return (0);
}	
	
