/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 13:04:27 by mchamayo          #+#    #+#             */
/*   Updated: 2018/12/07 14:26:26 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlelen;

	needlelen = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len >= needlelen)
	{
		if ((*haystack == *needle)
				&& (ft_memcmp(needle, haystack, needlelen) == 0))
			return ((char *)haystack);
		len--;
		haystack++;
	}
	return (NULL);
}
