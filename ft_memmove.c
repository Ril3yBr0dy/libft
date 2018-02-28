/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 13:05:04 by laymard           #+#    #+#             */
/*   Updated: 2017/05/03 19:07:56 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*j;
	char	*k;
	char	*l;

	if (!(l = (char *)malloc(sizeof(char) * len)))
		return (dst);
	i = 0;
	j = (char *)dst;
	k = (char *)src;
	while (i++ < len)
		*(l++) = *(k++);
	i = 0;
	l -= len;
	while (i++ < len)
		*(j++) = *(l++);
	return ((void *)dst);
}
