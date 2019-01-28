/*
** EPITECH PROJECT, 2018
** replace the o
** File description:
** yes
*/

#include "../include/my.h"
#include "../include/function.h"

void file_to_save(sokoban_t *soko)
{
    int i = 0;
    int k = 0;
    int j = 0;

    soko->save = malloc(sizeof(char *) * ((soko->line_nbr ) + 1));
    soko->save[j] = malloc(sizeof(char) * (soko->size_lens[j]) + 1);
    while (soko->buffer[i] != '\0' || soko->size_lens[j]) {
        check_map(soko->buffer[i]);
        soko->save[j][k] = soko->buffer[i];
        i++;
        k++;
        if (soko->buffer[i] == '\n') {
            i++;
            soko->save[j][k] = '\0';
            j++;
            soko->save[j] = malloc(sizeof(char) * (soko->size_lens[j]) + 1);
            k = 0;
        }
    }
    soko->save[j + 1] = NULL;
}

void win_counter(sokoban_t *soko, int i, int j)
{
    if (soko->map[j][i] == 'X' && soko->save[j][i] == 'O')
        soko->score++;
}

void save_vs_map(sokoban_t *soko, int i, int j)
{
    if (soko->save[j][i] == 'O' && soko->map[j][i] == ' ')
        soko->map[j][i] = 'O';
}

void check_o(sokoban_t *soko)
{
    int i = 0;
    int j = 0;

    soko->score = 0;
    while (soko->save[j] != NULL) {
        while (soko->save[j][i] != '\0') {
            save_vs_map(soko, i, j);
            win_counter(soko, i, j);
            i++;
        }
        j++;
        i = 0;
    }
}