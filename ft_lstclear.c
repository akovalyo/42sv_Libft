/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 13:28:49 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/05 13:28:49 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *last;
	t_list *tmp;

	if (*lst == NULL || lst == NULL || del == NULL)
		return ;
	last = *lst;
	while (last != NULL)
	{
		tmp = last;
		last = last->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
