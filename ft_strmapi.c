/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:11:36 by akovalyo          #+#    #+#             */
/*   Updated: 2020/01/27 12:11:36 by akovalyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	char *fresh;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	fresh = (char *)(malloc(ft_strlen(s) + 1));
	if (fresh == NULL)
		return (NULL);
	while (s[i])
	{
		fresh[i] = f(i, s[i]);
		i++;
	}
	return (fresh);
}
