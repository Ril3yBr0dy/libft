/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:50:02 by laymard           #+#    #+#             */
/*   Updated: 2017/05/03 15:54:55 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	int				j;

	if (s != 0 && f)
	{
		i = 0;
		j = ft_strlen((char*)s);
		if (!(str = (char *)malloc(j + 1 * sizeof(char))))
			return (NULL);
		while (s[i] != 0)
		{
			str[i] = f(i, s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);
}
