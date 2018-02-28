/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 20:05:46 by laymard           #+#    #+#             */
/*   Updated: 2017/04/25 07:00:06 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int a;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		a = 0;
		while (little[a] == big[a + i])
		{
			if (little[a + 1] == '\0')
			{
				return ((char *)big + i);
			}
			a++;
		}
		i++;
	}
	return (0);
}
