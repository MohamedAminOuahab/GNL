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
#include <fcntl.h>
#include "get_next_line.h"
#include "bonus/get_next_line_bonus.h"

 int	main(void)
 {
 	char 		*str1;
	char		*str2;
 	int		fd1;
	int		fd2;
	// size_t	g_index;

 	// g_index = 0;
	printf("================ fichier 1================\n");
 	fd1 = open("test.txt", O_RDONLY);
 	if (fd1 == -1)
 	{
 		perror("Erreur lors de l'ouverture du fichier");
 		exit(EXIT_FAILURE);
 	}
 	str1 = get_next_line(fd1);
 	while (str1)
 	{
 		printf("%s", str1);
 		free(str1);
 		str1 = get_next_line(fd1);
 	}

	printf("\n================ fichier 2================\n");
        fd2 = open("test2.txt", O_RDONLY);
        if (fd2 == -1)
        {
                perror("Erreur lors de l'ouverture du fichier");
                exit(EXIT_FAILURE);
        }
        str2 = get_next_line(fd2);
        while (str2)
        {
                printf("%s", str2);
                free(str2);
                str2 = get_next_line(fd2);
        }

	free(str2);
 	free(str1);
 	close(fd1);
	close(fd2);
 	return (0);
 }

/*
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
}*/
