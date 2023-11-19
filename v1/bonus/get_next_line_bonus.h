/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:35:40 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/18 18:36:47 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

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
int		is_position(char *str);


#endif