/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:04:57 by laymard           #+#    #+#             */
/*   Updated: 2017/05/03 15:54:43 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*i;
	int		j;
	int		k;

	if (s != 0 && f != 0)
	{
		j = 0;
		k = ft_strlen((char *)s);
		if (!(i = (char *)malloc(sizeof(char) * (k + 1))))
			return (NULL);
		while (s[j] != '\0')
		{
			i[j] = f(s[j]);
			j++;
		}
		i[j] = '\0';
		return (i);
	}
	return (NULL);
}
