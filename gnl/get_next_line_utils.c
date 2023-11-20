#include "get_next_line.h"


/* ========  strlen ===========*/

size_t	ft_strlen(char	*str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* ============strndup=========*/

char	*ft_strndup(char	*src, size_t len)
{
	char	*dest;
	size_t	i;

	if (!src || len == 0)
		return (NULL);
	i = 0;
	dest = (char *)malloc((len + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*===========strdup==========*/

char	*ft_strdup(char	*src)
{
	char	*dest;
	int	i;

	if (!src)
		return (NULL);
	i = 0;
	dest = malloc(ft_strlen(src) + 1);
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*==========strjoin ========*/

char *ft_strjoin(char *s1, char *s2)
{
	char	*dest;
	size_t	len_s1;
	size_t	len_s2;
	int	i;

    	if (!s1)
        	return ft_strdup(s2);
	i = 0;
    	len_s1 = ft_strlen(s1);
    	len_s2 = ft_strlen(s2);
    	dest = malloc(len_s1 + len_s2 + 1);
    	if (!dest)
        	return NULL;
	while (*s1)
		dest[i] = *s1++;
	while (*s2)
		dest[i++] = *s2++;
    	return dest;
}
