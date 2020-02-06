/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 18:24:12 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/05 18:24:12 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *tmp;

	new = NULL;
	if(lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst != NULL)
	{
		if ((tmp = ft_lstnew((*f)(lst->content))) != NULL)
		{
			ft_lstadd_back(&new, tmp);
			lst = lst->next;
		}
		else
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
	}
	return (new);
}
		
