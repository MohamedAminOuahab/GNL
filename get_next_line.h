/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:01:24 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/15 21:47:54 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char	*s, int c);
size_t	ft_strlen(const char	*str);
char	*ft_strdup(const char *src);
char	*ft_strndup(const char *src, size_t len);


#endif
