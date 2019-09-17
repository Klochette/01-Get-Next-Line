/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 13:49:20 by mchamayo          #+#    #+#             */
/*   Updated: 2018/11/30 16:35:28 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(str, '\0', size + 1);
	return (str);
}
