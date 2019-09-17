/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 10:46:24 by mchamayo          #+#    #+#             */
/*   Updated: 2018/11/19 18:03:53 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*cdst;
	unsigned char	*csrc;
	size_t			len;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	len = 0;
	while (len < n)
	{
		cdst[len] = csrc[len];
		if (csrc[len] == (unsigned char)c)
			return (dst + len + 1);
		len++;
	}
	return (NULL);
}
