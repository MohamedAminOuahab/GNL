/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouahab <moouahab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 01:28:25 by moouahab          #+#    #+#             */
/*   Updated: 2023/11/16 03:06:01 by moouahab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

int	main(void)
{
	static char	g_buffer[BUFSIZ];
	int			fd;
	size_t		g_index;

	g_index = 0;
	fd = open("text.text", O_RDONLY);
	if (fd == -1)
	{
		perror("Erreur lors de l'ouverture du fichier");
		exit(EXIT_FAILURE);
	}
	while (!strchr(g_buffer, '\n'))
	{
		read(fd, &g_buffer[g_index], 1);
		printf("%s", g_buffer);
	}
	close(fd);
	return (0);
}
