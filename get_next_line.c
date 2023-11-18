/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 03:18:06 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/16 05:28:06 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif

char	*get_next_line(int fd)
{
	static char	*str = NULL;
	char		buff[BUFFER_SIZE];
	char		*line;
	size_t		rtn_read;

	if (!str)
		str = ft_strdup(" ");
	while (!ft_strchr(str, '\n'))
	{
		rtn_read = read(fd, &buff, BUFFER_SIZE);
		if (rtn_read == -1 || rtn_read == 0)
		{
			free(str);
			return (NULL);
		}
		buff[rtn_read] = '\0';
		str = ft_strjoin(str, buff);
	}

	return (line);
}