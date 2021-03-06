/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:07:23 by akovalyo          #+#    #+#             */
/*   Updated: 2020/09/24 22:05:06 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;

	i = 0;
	while (s[i] && ft_strchr(reject, s[i]) == NULL)
		i++;
	return (i);
}
