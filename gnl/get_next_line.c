#include "get_next_line.h"
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 24
#endif

int	ft_is_position(char	*str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

char	*get_next_line(int fd)
{
	ssize_t		rtn;
	int			position;
	char		*line;
	static char	*stokage;
	char		buf[BUFFER_SIZE + 1];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!stokage)
		stokage = ft_strdup("");
	rtn = 1;
	while (rtn && !ft_is_position(stokage))
	{
		rtn = read(fd, buf, BUFFER_SIZE);
		if (rtn <= 0)
			return (free(stokage), NULL);
		buf[rtn] = '\0';
		stokage = ft_strjoin(stokage, buf);
	}
	position = ft_is_position(stokage);
	line = ft_strdup(stokage);
	stokage = ft_strdup(stokage + position + 1);
	return (line);
}
