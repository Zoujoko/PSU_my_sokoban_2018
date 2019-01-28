/*
** EPITECH PROJECT, 2018
** movement sok
** File description:
** yes
*/

#include "../include/my.h"
#include "../include/function.h"

void check_up(sokoban_t *soko)
{
    if (soko->map[soko->p_y - 1][soko->p_x] == 'X'
    && soko->map[soko->p_y - 2][soko->p_x] == '#') {
        soko->map[soko->p_y][soko->p_x] = 'P';
        }
    else if (soko->map[soko->p_y - 1][soko->p_x] == 'X'
        && soko->map[soko->p_y - 2][soko->p_x] != '#') {
            soko->map[soko->p_y - 2][soko->p_x] = 'X';
            soko->map[soko->p_y - 1][soko->p_x] = 'P';
            soko->map[soko->p_y][soko->p_x] = ' ';
        }
    else  {
        soko->map[soko->p_y - 1][soko->p_x] = 'P';
        soko->map[soko->p_y][soko->p_x] = ' ';
    }
}

void check_down(sokoban_t *soko)
{
    if (soko->map[soko->p_y + 1][soko->p_x] == 'X'
    && soko->map[soko->p_y + 2][soko->p_x] == '#') {
        soko->map[soko->p_y][soko->p_x] = 'P';
    }
    else if (soko->map[soko->p_y + 1][soko->p_x] == 'X'
        && soko->map[soko->p_y + 2][soko->p_x] != '#') {
            soko->map[soko->p_y + 2][soko->p_x] = 'X';
            soko->map[soko->p_y + 1][soko->p_x] = 'P';
            soko->map[soko->p_y][soko->p_x] = ' ';
        }
    else  {
        soko->map[soko->p_y + 1][soko->p_x] = 'P';
        soko->map[soko->p_y][soko->p_x] = ' ';
    }
}

void check_right(sokoban_t *soko)
{
    if (soko->map[soko->p_y][soko->p_x + 1] == 'x'
    && soko->map[soko->p_y][soko->p_x + 2] == '#')
        soko->map[soko->p_y][soko->p_x] = 'P';
    else if (soko->map[soko->p_y][soko->p_x + 1] == 'X'
        && soko->map[soko->p_y][soko->p_x + 2] != '#') {
            soko->map[soko->p_y][soko->p_x + 2] = 'X';
            soko->map[soko->p_y ][soko->p_x + 1] = 'P';
            soko->map[soko->p_y][soko->p_x] = ' ';
        }
    else  {
        soko->map[soko->p_y][soko->p_x + 1] = 'P';
        soko->map[soko->p_y][soko->p_x] = ' ';
    }
}

void check_left(sokoban_t *soko)
{
    if (soko->map[soko->p_y][soko->p_x - 1] == 'X'
    && soko->map[soko->p_y][soko->p_x - 2] == '#') {
        soko->map[soko->p_y][soko->p_x] = 'P';
        }
    else if (soko->map[soko->p_y][soko->p_x - 1] == 'X'
        && soko->map[soko->p_y][soko->p_x - 2] != '#') {
            soko->map[soko->p_y][soko->p_x - 2] = 'X';
            soko->map[soko->p_y ][soko->p_x - 1] = 'P';
            soko->map[soko->p_y][soko->p_x] = ' ';
        }
    else  {
        soko->map[soko->p_y][soko->p_x - 1] = 'P';
        soko->map[soko->p_y][soko->p_x] = ' ';
    }
}