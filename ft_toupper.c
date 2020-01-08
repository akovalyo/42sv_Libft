/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                _______ ______   ______ __   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalyo <al.kovalyov@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 22:10:12 by akovalyo          #+#    #+#             */
/*   Updated: 2020/01/07 22:21:42 by akovalyo    __________________________   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
