/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 14:48:06 by laymard           #+#    #+#             */
/*   Updated: 2017/05/03 19:31:08 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	unsigned int	i;
	int				j;
	int				tmp;
	char			*res;

	if (!s)
		return (0);
	i = 0;
	j = -1;
	while (s[++j] == ' ' || s[j] == '\t' || s[j] == '\n')
		++i;
	tmp = j--;
	while (s[++j])
		if ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') &&
				!(s[j - 1] == ' ' || s[j - 1] == '\t' || s[j - 1] == '\n'))
			tmp = j;
	if (!(s[j - 1] == ' ' || s[j - 1] == '\t' || s[j - 1] == '\n'))
		tmp = j;
	if (!(res = (char*)malloc(sizeof(char) * (tmp - i))))
		return (0);
	res = ft_strsub(s, i, tmp - i);
	res[tmp - i] = 0;
	return (res);
}
