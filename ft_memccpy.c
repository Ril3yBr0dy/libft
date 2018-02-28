/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 18:40:34 by laymard           #+#    #+#             */
/*   Updated: 2017/05/03 18:52:48 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*i;
	unsigned char	*j;

	i = (unsigned char *)dst;
	j = (unsigned char *)src;
	while (n && *j != (unsigned char)c)
	{
		*(i++) = *(j++);
		n--;
	}
	if (*j == (unsigned char)c)
		*i = *j;
	return (*j == (unsigned char)c) ? i + 1 : (void *)0;
}
