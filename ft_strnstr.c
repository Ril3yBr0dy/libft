/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 07:01:21 by laymard           #+#    #+#             */
/*   Updated: 2017/05/03 16:55:03 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t l)
{
	int i;
	int a;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && l)
	{
		a = 0;
		while (little[a] == big[a + i] && l)
		{
			if (little[a + 1] == '\0')
			{
				return ((char *)big + i);
			}
			a++;
			l--;
		}
		i++;
		l--;
	}
	return (0);
}
