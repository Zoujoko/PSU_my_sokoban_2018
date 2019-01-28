/*
** EPITECH PROJECT, 2018
** error check
** File description:
** yes
*/

#include "../include/function.h"
#include "../include/my.h"

void check_map(char charac)
{
    int i = 0;
    char c = charac;

    if (c != ' ' && c != '\n' && c != '#' && c != 'X' && c != 'O' && c != 'P')
        exit (84);
}

void check_error(sokoban_t *soko, char *filepath, int argc)
{
    int fd = open(filepath, O_RDONLY);
    char buffer[4096];
    int size = 4096;
    int rd = read(fd, buffer, size);

    if (argc != 2)
        exit (84);
    if (fd == -1 || rd == 0 || rd == -1)
        exit (84);

    close(fd);
}