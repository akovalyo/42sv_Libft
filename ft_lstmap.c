/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 20:41:34 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/19 20:48:24 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *tmp;

	new = NULL;
	if (lst == NULL || f == NULL)
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
