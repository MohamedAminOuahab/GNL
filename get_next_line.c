/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:36:44 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/15 23:19:01 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#ifndef BUFFER_SIZE 
# define BUFFER_SIZE 5
#endif

static char	*ft_strncpy(char	*dest, const char	*src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*ft_strncat(char	*dest, const char	*src, size_t n)
{
	size_t	i;
	size_t	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (i < n && src[i])
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

static char	*ft_strjoin(char const	*s1, char const	*s2)
{
	size_t	len;
	size_t	len_s1;
	size_t	len_s2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	ft_strncpy(str, s1, len_s1);
	ft_strncat(str, s2, len_s2);
	return (str);
}


char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	char		*buf[BUFFER_SIZE + 1];
	size_t		rtn_read;
	int			new_position;

	if (!stash)
		ft_strdup("");
	while (!ft_strchr(stash, '\n'))
	{
		rtn_read = read(fd, buf, BUFFER_SIZE);
		if (rtn_read == -1 || rtn_read == 0)
		{
			free(stash);
			return (NULL);
		}
		buf[rtn_read] = '\0';
		stash = ft_strjoin(stash, buf);
	}
	new_position = ft_strchr(stash, '\n') - stash;
	line = ft_stdndup(stash, new_position);
	stash = ft_strdup(stash + new_position + 1);
	return (line);
}
