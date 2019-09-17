/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 13:41:50 by mchamayo          #+#    #+#             */
/*   Updated: 2018/11/30 16:12:05 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;
	size_t	i;

	i = 0;
	if (!(mem = malloc(size)))
		return (NULL);
	while (i < size)
	{
		mem[i] = '\0';
		++i;
	}
	return (mem);
}
