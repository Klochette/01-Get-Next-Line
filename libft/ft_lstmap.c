/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:43:48 by mchamayo          #+#    #+#             */
/*   Updated: 2018/12/06 16:45:44 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*list;
	t_list	*i;

	if (lst && f)
	{
		list = f(lst);
		new = ft_lstnew(list->content, list->content_size);
		i = new;
		lst = lst->next;
		while (lst != NULL)
		{
			list = f(lst);
			new->next = ft_lstnew(list->content, list->content_size);
			new = new->next;
			lst = lst->next;
		}
		return (i);
	}
	return (NULL);
}
