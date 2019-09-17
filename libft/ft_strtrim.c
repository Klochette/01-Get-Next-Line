/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:15:23 by mchamayo          #+#    #+#             */
/*   Updated: 2018/11/30 19:01:29 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*newstring;

	i = -1;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		len--;
	if (len < 1)
		len = 0;
	if (!(newstring = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s = s + i;
	i = 0;
	while (i < len)
	{
		newstring[i++] = *s;
		++s;
	}
	newstring[i] = '\0';
	return (newstring);
}
