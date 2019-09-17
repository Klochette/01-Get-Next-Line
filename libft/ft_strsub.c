/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 13:58:01 by mchamayo          #+#    #+#             */
/*   Updated: 2018/11/30 17:41:24 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(sub = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		sub[i] = s[start];
		++start;
		++i;
	}
	sub[i] = '\0';
	return (sub);
}
