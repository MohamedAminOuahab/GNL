/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:26:32 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/18 19:01:22 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1024
#endif

char	*ft_strcpy_mall(char *str)
{
	char *dest;
	int	i;

	if (!str || str == NULL)
		return (NULL);
	dest = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dest)
		return (dest);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int	i;
	int	j;

	if (!s1 || s1 == NULL)
		return (ft_strcpy_mall(s2));
	i = 0;
	j = 0;
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	free(s1);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str[1024];
	char		*buff;
	char		*line;
	size_t		rtn_read;

	rtn_read = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	while (rtn_read && !ft_strchr(str[fd], '\n'))
	{
		rtn_read = read(fd, buff, BUFFER_SIZE);
		if (rtn_read <= 0)
			return (free(buff), free(str[fd]), (NULL));
		buff[rtn_read] = '\0';
		str[fd] = ft_strjoin(str[fd], buff);
	}
	free(buff);
	line = ft_res(str[fd]);
	str[fd] = ft_delete(str[fd]);
	return (line);
}

char	*ft_delete(char *str)
{
	char	*str1;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str1 = NULL;
	if (!str || str == NULL)
		return (NULL);
	str1 = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!str1)
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	while (str[i + j])
	{
		str1[j] = str[i + j];
		j++;
	}
	str1[j] = '\0';
	free(str);
	return (str1);
}

char	*ft_res(char *str)
{
	// printf("line recu")
	char	*res;
	int		i;

	if (!str || str == NULL)
		return (NULL);
	res = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		res[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		res[i] = '\n';
		i++;
	}
	res[i] = '\0';
	return (res);
}
