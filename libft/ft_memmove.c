/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:26:02 by mchamayo          #+#    #+#             */
/*   Updated: 2018/11/30 16:04:16 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;

	cdst = (char *)dst;
	csrc = (char *)src;
	if (csrc <= cdst)
	{
		while (len > 0)
		{
			cdst[len - 1] = csrc[len - 1];
			--len;
		}
	}
	else
		ft_memcpy(cdst, csrc, len);
	return (dst);
}
