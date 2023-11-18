/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:20:24 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/18 17:50:42 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1084
#endif

char	*get_next_line(int fd)
{
	static char	*stash = NULL;
	char		buf[BUFFER_SIZE + 1];
	char		*line;
	int		position;
	int		rtn_read;

	line = NULL;
	if (fd <= 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!stash)
		stash = ft_strdup("");
	rtn_read = 1;
	while (rtn_read && !ft_strchr(stash , '\n'))
	{
		rtn_read = read(fd, buf, BUFFER_SIZE);
		if (rtn_read < 0)
			return (free(stash), free(buf), (NULL));
		buf[rtn_read] = '\0';
		stash = ft_strjoin(stash, buf, BUFFER_SIZE);
	}
	position = is_position(stash);
	line = strndup(stash, position);
	line[ft_strlen(line)] = '\0';
	free(line);
	return (line);
}


int	is_position(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}
