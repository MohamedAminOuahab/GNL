#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

 int    main(void)
 {
        char            *str;
        int             fd;
        // size_t       g_index;

        // g_index = 0;
        fd = open("file1.txt", O_RDONLY);
        if (fd == -1)
        {
                perror("Erreur lors de l'ouverture du fichier");
                exit(EXIT_FAILURE);
        }
        str = get_next_line(fd);
        while (str)
        {
                printf("%s", str);
                free(str);
                str = get_next_line(fd);
        }
        free(str);
        close(fd);
        return (0);
 }
