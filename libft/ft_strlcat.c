/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:56:25 by mchamayo          #+#    #+#             */
/*   Updated: 2018/11/30 16:33:38 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t lendst;
	size_t lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = 0;
	j = 0;
	if (size > lendst)
	{
		while (dst[i] && i < (size - 1))
			i++;
		while (src[j] && i < (size - 1))
		{
			dst[i] = src[j];
			j++;
			i++;
		}
		dst[i] = '\0';
		return (lendst + lensrc);
	}
	return (lensrc + size);
}
