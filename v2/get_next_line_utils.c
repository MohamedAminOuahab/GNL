/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:48:36 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/18 14:30:54 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * @param s : la string sur la quelle on va checher element
 * @param c : l'element a chercher
 * @return NULL si non trouver;
*/

// // char	*ft_strchr(const char	*s, int c)
// // {
// // 	while (*s != '\0')
// // 	{
// // 		if (*s == (char)c)
// // 			return ((char *)s);
// // 		s++;
// // 	}
// // 	if ((char)c == '\0')
// // 		return ((char *)s);
// // 	return (NULL);
// // }

// int	ft_strlen(char	*str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

// char	*ft_strncat(char	*dest, const char	*src, size_t len)
// {
// 	size_t	i;
// 	size_t	dest_len;

// 	i = 0;
// 	dest_len = ft_strlen(dest);
// 	while (i < len && src[i])
// 	{
// 		dest[dest_len] = src[i];
// 		dest_len++;
// 		i++;
// 	}
// 	dest[dest_len] = '\0';
// 	return (dest);
// }

// void	*ft_memmove(void	*dest, const void	*src, size_t n)
// {
// 	char		*dst;
// 	const char	*srcp;

// 	dst = (char *)dest;
// 	srcp = (const char *)src;
// 	if (dest == src)
// 		return (dest);
// 	if (dst > srcp && dst < srcp + n)
// 	{
// 		dst += n;
// 		srcp += n;
// 		while (n-- > 0)
// 			*(--dst) = *(--srcp);
// 	}
// 	else
// 		while (n-- > 0)
// 			*dst++ = *srcp++;
// 	return (dest);
// }