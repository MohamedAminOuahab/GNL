/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 01:28:25 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/18 18:40:15 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"

// int	main(void)
// {
// 	char *str;
// 	int			fd;
// 	// size_t		g_index;

// 	// g_index = 0;
// 	fd = open("text.text", O_RDONLY);
// 	if (fd == -1)
// 	{
// 		perror("Erreur lors de l'ouverture du fichier");
// 		exit(EXIT_FAILURE);
// 	}
// 	str = get_next_line(fd);
// 	while (str)
// 	{
// 		printf("%s", str);
// 		free(str);
// 		str = get_next_line(fd);
// 	}
// 	free(str);
// 	close(fd);
// 	return (0);
// }


int main() {
    int fd1 = open("file1.txt", O_RDONLY);
    int fd2 = open("file2.txt", O_RDONLY);
    char *buffer;
    do
    {
        buffer = get_next_line(fd1);
        printf("%s", buffer);
        free(buffer);
        buffer = get_next_line(fd2);
        printf("%s", buffer);
        free(buffer);
        buffer = get_next_line(fd1);
        printf("%s", buffer);
        free(buffer);
    } while (buffer);
}