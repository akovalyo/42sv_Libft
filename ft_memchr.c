/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 19:17:04 by akovalyo          #+#    #+#             */
/*   Updated: 2020/01/13 19:17:04 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;	
	while (i < n)
	{
		if (((unsigned char *)s)[i] == c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}