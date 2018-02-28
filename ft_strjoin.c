/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 14:10:11 by laymard           #+#    #+#             */
/*   Updated: 2017/04/30 14:47:26 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*l;

	i = 0;
	k = 0;
	j = (ft_strlen((char *)s1) + ft_strlen((char *)s2));
	if (!(l = (char *)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	while (s1[i] != '\0')
	{
		l[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		l[i] = s2[k];
		i++;
		k++;
	}
	l[i] = '\0';
	return (l);
}
