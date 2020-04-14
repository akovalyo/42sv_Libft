/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_straddchr_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 10:08:28 by akovalyo          #+#    #+#             */
/*   Updated: 2020/04/13 22:57:42 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_straddchr(char *str, char ch)
{
	char	*new;
	size_t	len;
	
	len = 0;
	if (str)
	{
		len = ft_strlen(str);
		if(!(new = ft_strnew(len + 2)))
			return (NULL);
		ft_memmove(new, str, len);
		ft_strdel(&str);
	}
	else
		new = ft_strnew(1);
	new[len] = ch;
	return (new);
}
