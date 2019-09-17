/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:58:52 by mchamayo          #+#    #+#             */
/*   Updated: 2018/12/03 18:36:20 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;
	char c2;

	str = (char *)s;
	c2 = (char)c;
	while (*str != c2 && *str != '\0')
		str++;
	if (*str == c2)
		return (str);
	return (NULL);
}
