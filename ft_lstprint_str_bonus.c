/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_str_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 10:59:59 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/05 10:59:59 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint_str(t_list *lst) 
{ 
	while (lst != NULL && lst->content != NULL) 
	{ 
		ft_putstr(lst->content);
		ft_putchar('\n');	 
     		lst = lst->next; 
	} 
} 

