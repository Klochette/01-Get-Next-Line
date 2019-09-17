/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:04:39 by mchamayo          #+#    #+#             */
/*   Updated: 2018/11/30 16:16:40 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*cdst;
	const char	*csrc;
	size_t		len;

	csrc = (const char *)src;
	cdst = (char *)dst;
	len = 0;
	while (len < n)
	{
		cdst[len] = csrc[len];
		++len;
	}
	return (dst);
}
