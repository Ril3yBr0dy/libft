/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 16:47:08 by laymard           #+#    #+#             */
/*   Updated: 2017/05/03 13:20:55 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*constan;

	if (len == 0)
		return (b);
	constan = (unsigned char *)b;
	while (len--)
	{
		*constan = (unsigned char)c;
		if (len)
			constan++;
	}
	return (b);
}
