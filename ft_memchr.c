/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 14:28:31 by laymard           #+#    #+#             */
/*   Updated: 2017/05/03 19:30:19 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*j;

	j = (unsigned char *)s;
	while (n--)
	{
		if (*j == (unsigned char)c)
			return ((char *)j);
		j++;
	}
	return (0);
}
