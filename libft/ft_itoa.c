/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:00:00 by mchamayo          #+#    #+#             */
/*   Updated: 2018/12/03 18:11:58 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_neg(int *n, int *neg)
{
	if (*n < 0)
	{
		*n *= -1;
		*neg = 1;
	}
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		n2;
	int		neg;

	len = 1;
	n2 = n;
	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_neg(&n, &neg);
	while ((n2 = n2 / 10))
		++len;
	len += neg;
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[--len + 1] = '\0';
	while (len >= 0)
	{
		str[len--] = n % 10 + '0';
		n = n / 10;
	}
	if (neg > 0)
		str[0] = '-';
	return (str);
}
