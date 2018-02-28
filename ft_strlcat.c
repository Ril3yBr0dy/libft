/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 18:16:37 by laymard           #+#    #+#             */
/*   Updated: 2017/04/27 11:20:52 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		len;
	size_t		i;

	i = 0;
	if (size == 0)
		return (ft_strlen((char*)src));
	while (dest[i] && i < size)
		i++;
	len = i;
	while (src[i - len] && i < size - 1)
	{
		dest[i] = src[i - len];
		i++;
	}
	if (len < size)
		dest[i] = '\0';
	return (len + ft_strlen((char*)src));
}
