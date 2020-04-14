/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 12:42:53 by akovalyo          #+#    #+#             */
/*   Updated: 2020/04/13 22:03:56 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*outp;
	int		begin;
	int		end;

	begin = 0;
	end = ft_strlen(s1) - 1;
	while (ft_check(s1[begin], set) == 1)
		begin++;
	if ((begin - 1) == end)
	{
		outp = malloc(1);
		outp[0] = 0;
		return (outp);
	}
	while (ft_check(s1[end], set) == 1)
		end--;
	outp = ft_substr(s1, begin, (end - begin + 1));
	return (outp);
}