/* ************************************************************************** */
/*                                                                            */
/*                                               __________________________   */
/*   test_ft_lst.c                               _______ ______   ______ __   */
/*                                               ___    |___  /   ___  //_/   */
/*   By: akovalyo <al.kovalyov@gmail.com>        __  /| |__  /    __  ,<      */
/*                                               _  ___ |_  / ___ _  /| |     */
/*   Created: 2020/02/05 10:42:27 by akovalyo    /_/  |_|/_/  _(_)/_/ |_|     */
/*   Updated: 2020/02/19 19:12:30 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include "../../libft.h"

void	ft_f(void *d)
{
		
	char tmp[] = "f";
	ft_strcpy(d, tmp);	
	//char tmp2 = (char *)d;
	//(char *)d = *tmp;
	ft_putstr(d);
	
	
	
	
}

void	uf_del_callback(void *d)
{
	free(d);
}

void    ft_lstiter(t_list *lst, void (*f)(void *))
{       
        if (lst == NULL || f == NULL)
                return ;
        while(lst != NULL)
        {             
		f(lst->content);
                lst = lst->next;
        }
}

void	ft_lstdelone2(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	//free(lst);
}



void	ft_lstprint_str3(t_list *lst) 
{ 
	while (lst != NULL && lst->content != NULL) 
	{ 
		ft_putstr(lst->content);
		ft_putchar('\n');	 
     		lst = lst->next; 
	} 
} 

int	test_ft_lst()
{
	/*t_list *head = NULL;
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
	
	ft_lstprint_str(head);
	printf("\n");
	//ft_lstiter(third, ft_f);
	
	ft_lstdelone2(second, uf_del_callback);
	//if (head != NULL)
	//	ERROR;

	//free(&second->content);
	
	//printf("%s\n", head);

	//new = ft_lstlast(head);
	//printf("%s\n", new->content);
	ft_lstprint_str3(head);
	return (0);*/

	t_list	*begin;
	

	
	begin = ft_lstnew("a");
	begin->next = ft_lstnew("b");
	begin->next->next = ft_lstnew("c");
	/*ft_lstdelone(&begin->next->next, uf_del_callback);
	if (begin->next->next != NULL)
		D_ERROR;
	ft_lstdelone(&begin->next, uf_del_callback);
	if (begin->next != NULL)
		D_ERROR;
	ft_lstdelone(&begin, uf_del_callback);
	if (begin != NULL)
		D_ERROR;*/
	ft_lstprint_str(begin);
	ft_lstiter(begin, ft_f);
	//ft_lstdelone2(begin->next, uf_del_callback);
	ft_lstprint_str(begin);
}	
	
