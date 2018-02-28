/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 11:29:54 by laymard           #+#    #+#             */
/*   Updated: 2017/05/03 17:04:32 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		is_negative(int *i, int *subzero)
{
	if (*i < 0)
	{
		*i *= -1;
		*subzero = 1;
	}
}

char			*ft_itoa(int n)
{
	int		tmp;
	int		len;
	int		neg;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	tmp = n;
	len = 2;
	neg = 0;
	is_negative(&n, &neg);
	while (tmp /= 10)
		len++;
	len += neg;
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
