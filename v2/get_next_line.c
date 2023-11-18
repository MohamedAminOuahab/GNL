/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:20:24 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/18 14:34:49 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif

char	*get_next_line(int fd)
{
	static char	*stash = NULL;
	char		buf[BUFFER_SIZE + 1];
	char		*line;

	line = NULL;
	if (fd <= 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!stash)
		ft_memmove(stash, "", 0);
	while (!ft_strchr(stash , '\n'))
	{
		if (read(fd, buf, BUFFER_SIZE) < 0)
		{
			free(stash);
			return (NULL);
		}
		stash = ft_strncat(stash, buf, BUFFER_SIZE);
	}
	ft_memmove(&line, &stash, BUFFER_SIZE);
	line[ft_strlen(line)] = '\0';
	return (line);
}
