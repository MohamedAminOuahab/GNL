#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define TRUE 1
# define FALSE 0

size_t	ft_strlen(char	*str);

char	*get_next_line(int fd);

char	*ft_strjoin( char	*s1, char	*s2);
char	*ft_strdup( char	*str);
char	*ft_strndup(char	*str, size_t len);


#endif
