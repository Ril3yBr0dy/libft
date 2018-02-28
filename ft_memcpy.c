/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 18:10:29 by laymard           #+#    #+#             */
/*   Updated: 2017/05/03 13:22:29 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *i;
	char *j;

	if (n == 0 || dst == src)
		return (dst);
	i = (char *)dst;
	j = (char *)src;
	while (n)
	{
		*i = *j;
		i++;
		j++;
		n--;
	}
	return (dst);
}
