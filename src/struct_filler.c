/*
** EPITECH PROJECT, 2018
** struct filler
** File description:
** yes
*/
#include "../include/function.h"
#include "../include/my.h"

void file_to_tab(sokoban_t *soko)
{
    int i = 0;
    int k = 0;
    int j = 0;

    soko->map = malloc(sizeof(char *) * ((soko->line_nbr ) + 1));
    soko->map[j] = malloc(sizeof(char) * (soko->size_lens[j]) + 1);
    while (soko->buffer[i] != '\0' || soko->size_lens[j]) {
        check_map(soko->buffer[i]);
        soko->map[j][k] = soko->buffer[i];
        i++;
        k++;
        if (soko->buffer[i] == '\n') {
            i++;
            soko->map[j][k] = '\0';
            j++;
            soko->map[j] = malloc(sizeof(char) * (soko->size_lens[j]) + 1);
            k = 0;
        }
    }
    soko->map[j + 1] = NULL;
}

void stock_cols(sokoban_t *soko)
{
    int i = 0;
    int k = 0;
    int j = 0;

    soko->size_lens = malloc(sizeof(int) * ((soko->line_nbr) + 1));
    while (soko->buffer[i] != '\0') {
        i++;
        k++;
        if (soko->buffer[i] == '\n') {
            i++;
            soko->size_lens[j] = k;
            j++;
            k = 0;
        }
    }
}

void get_lines(sokoban_t *soko)
{
    int i = 0;
    int line = 0;

    while (soko->buffer[i] != '\0') {
        i++;
        if (soko->buffer[i] == '\n') {
            line++;
        }
    }
    line += 2;
    soko->line_nbr = line;
}

void struct_filler(sokoban_t *soko, char *filepath, int argc)
{
    struct stat file_stat;
    int fd = open(filepath, O_RDONLY);
    int rd = 0;

    check_error(soko, filepath, argc);
    stat(filepath, &file_stat);
    soko->size = file_stat.st_size;
    soko->buffer = malloc(sizeof(char) * (soko->size) + 1);
    rd = read(fd, soko->buffer, soko->size);
    soko->buffer[soko->size] = '\0';
    get_lines(soko);
    stock_cols(soko);
    file_to_tab(soko);
    file_to_save(soko);
}
