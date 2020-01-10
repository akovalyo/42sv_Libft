/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 18:02:00 by akovalyo          #+#    #+#             */
/*   Updated: 2020/01/08 18:23:57 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t find_index;
	size_t remember;
	
	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && len > 0)
	{
		if (len < ft_strlen(little))
			return (NULL);
		find_index = 0;
		remember = i;
		while (big[remember] == little[find_index] && big[remember] && little[find_index])
		{
			find_index++;
			remember++;
		}
		if (little[find_index] == '\0')
			return ((char *)big + i);
		len--;
		i++;
	}
	return (NULL);
}
