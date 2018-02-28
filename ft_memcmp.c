/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 17:24:27 by laymard           #+#    #+#             */
/*   Updated: 2017/05/03 19:20:13 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*j;
	unsigned char	*k;

	j = (unsigned char*)s1;
	k = (unsigned char*)s2;
	i = 0;
	while (++i <= n)
		if (j[i - 1] != k[i - 1])
			return (j[i - 1] - k[i - 1]);
	return (0);
}
