/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <akovalyo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 11:36:43 by akovalyo          #+#    #+#             */
/*   Updated: 2020/07/27 12:19:26 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_base(char c, int base)
{
	int int_c;

	if (base <= 10)
	{
		int_c = ft_atoi(&c);
		return (c >= '0' && int_c < base);
	}
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10)) || \
	(c >= 'a' && c <= ('a' + base - 10)));
}

static int	convert_ch(char c, int nbr, int base)
{
	if (c >= 'A' && c <= 'F')
		return ((nbr * base) + (c - 'A' + 10));
	else if (c >= 'a' && c <= 'f')
		return ((nbr * base) + (c - 'a' + 10));
	else
		return ((nbr * base) + (c - '0'));
}

int			ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	nbr;
	int	int_base;

	int_base = ft_atoi(base);
	if (!str || (int_base < 2 || int_base > 16))
		return (0);
	i = 0;
	nbr = 0;
	sign = 1;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' ||
			str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = (str[i] == '-') ? -1 : 1;
		i++;
	}
	while (str[i] && check_base(str[i], int_base))
	{
		nbr = convert_ch(str[i], nbr, int_base);
		i++;
	}
	return (nbr * sign);
}
