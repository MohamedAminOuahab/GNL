/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 03:10:11 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/17 23:22:45 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
#include <stdio.h>

char	*get_next_line(int fd);
int ft_strlen(const char *str);
char	*ft_strdup(const char *src);
char	*ft_strchr(const char	*s, int c);
char	*ft_strndup(const char *src, size_t len);
char	*ft_delete(char *str);
char	*ft_res(char *str);


#endif