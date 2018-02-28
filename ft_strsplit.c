/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 19:39:28 by laymard           #+#    #+#             */
/*   Updated: 2017/05/03 17:05:25 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_copy(char *src, char *dst, int length)
{
	int	i;

	i = 0;
	while (i < length)
	{
		dst[i] = src[i];
		if (src[i] == '\n' && src[i - 1] == '\n')
			if (src[i + 1] != '\0')
				dst[i] = '\0';
		i++;
	}
	dst[i] = '\0';
}

static int		count_words(char *str, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] >= 33 && str[i] <= 126)
			j++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (j);
}

static int		count_letters(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

char			**ft_strsplit(char const *str, char c)
{
	char	**nl;
	int		i;
	int		j;
	int		k;
	int		l;

	i = count_words(((char*)str), c);
	if (!(nl = (char **)malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	j = 0;
	l = -1;
	while (++l < i)
	{
		while (str[j] == c)
			j++;
		k = count_letters(((char *)str + j), c);
		if (!(nl[l] = (char *)malloc(sizeof(*nl) * (k + 1))))
			return (NULL);
		ft_copy((char *)str + j, nl[l], k);
		j = j + k;
	}
	nl[l] = 0;
	return (nl);
}
