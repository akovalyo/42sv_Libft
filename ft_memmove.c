/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 21:22:35 by akovalyo          #+#    #+#             */
/*   Updated: 2020/01/15 21:49:08 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *tmp;
	size_t i;
	char *n_dest;
	const char *n_src;

	tmp = NULL;
	i = 0;
	n_dest = (char *)dest;
	n_src = (const char *)src;
	tmp = (char *)malloc(sizeof(char) * n);
	if (tmp == NULL)
		return (NULL);
	while (i < n)
	{
		tmp[i] = n_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		n_dest[i] = tmp[i];
		i++;
	}
	free(tmp);
	return (dest);
}
