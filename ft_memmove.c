/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 21:22:35 by akovalyo          #+#    #+#             */
/*   Updated: 2020/02/20 14:15:21 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	char		*n_dst;
	const char	*n_src;

	i = (int)len;
	n_dst = (char *)dst;
	n_src = (const char *)src;
	if (!dst && !src)
		return (dst);
	if (src == dst)
		return (dst);
	else if (src < dst && dst < src + len)
	{
		while (i >= 0)
		{
			n_dst[i] = n_src[i];
			i--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
