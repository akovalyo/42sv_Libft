/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 20:29:16 by akovalyo          #+#    #+#             */
/*   Updated: 2020/01/06 21:03:06 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int sign;
	int collector;
	size_t i;

	sign = 1;
	collector = 0;
	i = 0;

	while(nptr[i] == '\n' || nptr[i] == '\t' || nptr[i] == '\v' || 
			nptr[i] == '\r' || nptr[i] == '\f' || nptr[i] == ' ')
		i++;
	if(nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(nptr[i] >= '0' && nptr[i] <= '9')
	{
		collector = collector * 10 + nptr[i] - '0';
		i++;
	}
	return (collector * sign);
}


