/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 15:51:15 by mchamayo          #+#    #+#             */
/*   Updated: 2019/02/13 14:25:55 by mchamayo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*ft_fd_check(const int fd, t_list **list)
{
	t_list	*tmp;

	tmp = *list;
	while (tmp)
	{
		if (tmp->content_size == (unsigned int)fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("\0", fd);
	ft_lstadd(list, tmp);
	tmp = *list;
	return (tmp);
}

void	ft_copyline(char **line, char *str, char s)
{
	int i;

	i = 0;
	while (str[i] != s && str[i])
		i++;
	*line = ft_strnew(i + 1);
	*line = ft_strncpy(*line, str, i);
}

char	*ft_dup(char *str, char s)
{
	int		len;
	int		i;
	char	*tmp;

	i = 0;
	len = ft_strlen(str);
	while ((str[i] != s) && str[i])
		i++;
	if (i == len)
		ft_strclr(str);
	else
	{
		tmp = str;
		str = ft_strdup(str + i + 1);
		free(tmp);
	}
	return (str);
}

int		get_next_line(const int fd, char **line)
{
	t_list			*list;
	static t_list	*newlist = NULL;
	char			buf[BUFF_SIZE + 1];
	int				ret;
	char			*tmp;

	if (line == NULL || fd < 0 || (!(list = ft_fd_check(fd, &newlist)))
			|| read(list->content_size, buf, BUFF_SIZE < 0))
		return (-1);
	while ((ret = read(list->content_size, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		tmp = list->content;
		list->content = ft_strjoin(list->content, buf);
		free(tmp);
		if (ft_strchr(list->content, '\n'))
			break ;
	}
	if (ret <= BUFF_SIZE && !ft_strlen(list->content))
		return (0);
	ft_copyline(line, list->content, '\n');
	list->content = ft_dup(list->content, '\n');
	return (1);
}
