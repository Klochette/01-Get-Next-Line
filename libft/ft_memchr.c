/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:46:54 by mchamayo          #+#    #+#             */
/*   Updated: 2018/11/19 13:00:54 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cc;
	int				i;

	str = (unsigned char *)s;
	i = 0;
	cc = c;
	while (n)
	{
		if (str[i] == cc)
			return (str + i);
		i++;
		n--;
	}
	return (NULL);
}
