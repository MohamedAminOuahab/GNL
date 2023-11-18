/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:35:51 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/18 14:32:40 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "get_next_line.h"
// #include <fcntl.h>
// #include <stdio.h>
// #define BUFFER_SIZE 10
// char *get_next_line(int fd);

// int main(void)
// {
//     int fd = open("test.txt", O_RDONLY); // Assurez-vous d'avoir un fichier test.txt existant
//     if (fd == -1)
//     {
//         perror("Erreur lors de l'ouverture du fichier");
//         return 1;
//     }
//     char *line;
//     // Boucle de lecture des lignes jusqu'à ce que NULL soit retourné (fin du fichier ou erreur)
//     while ((line = get_next_line(fd)) != NULL)
//     {
//         printf("Ligne lue : %s\n", line);
//         // Assurez-vous de libérer la mémoire allouée pour la ligne après utilisation
//         // Notez que cela dépend de la façon dont votre fonction get_next_line gère la mémoire
//         // Dans certains cas, il peut être nécessaire de libérer la mémoire à l'intérieur de get_next_line.
//         free(line);
//     }
//     // Fermez le fichier après utilisation
//     close(fd);
//     return 0;
// }

