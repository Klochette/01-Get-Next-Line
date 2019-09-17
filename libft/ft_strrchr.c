/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 13:00:09 by mchamayo          #+#    #+#             */
/*   Updated: 2018/11/30 16:38:00 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	char			*s2;
	unsigned char	c2;

	s2 = (char *)s;
	c2 = c;
	len = ft_strlen(s2);
	while (len != 0 && s2[len] != c2)
		--len;
	if (s2[len] == c2)
		return (s2 + len);
	return (NULL);
}
