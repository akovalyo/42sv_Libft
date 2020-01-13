/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 20:32:53 by akovalyo          #+#    #+#             */
/*   Updated: 2020/01/11 20:32:53 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	size_t rem;

	i = 0;	
	rem = 0;
	while (s[i] && s[i] != c)
	{
		rem = i;
		i++;
	}
	if (s[i] == '\0')
		return ((char *)&s[rem]);
	return (NULL);
}
