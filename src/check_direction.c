/*
** EPITECH PROJECT, 2018
** check direction
** File description:
** yes
*/
#include "../include/my.h"
#include "../include/function.h"

void check_direction_left_right(sokoban_t *soko)
{
    search_player(soko);
    if (soko->input == 'C' && soko->map[soko->p_y ][soko->p_x + 1] != '#') {
        if (soko->map[soko->p_y][soko->p_x + 1] == 'X'
        && soko->map[soko->p_y][soko->p_x + 2] == 'X');
        else
            check_right(soko);
    }
    if (soko->input == 'D' && soko->map[soko->p_y][soko->p_x - 1] != '#') {
        if (soko->map[soko->p_y][soko->p_x - 1] == 'X'
        && soko->map[soko->p_y][soko->p_x - 2] == 'X');
        else
            check_left(soko);
    }
}

void check_direction_up_down(sokoban_t *soko)
{
    search_player(soko);
    if (soko->input == 'A' && soko->map[soko->p_y - 1][soko->p_x] != '#') {
        if (soko->map[soko->p_y - 1][soko->p_x] == 'X'
        && soko->map[soko->p_y - 2][soko->p_x] == 'X');
        else
            check_up(soko);
    }
    if (soko->input == 'B' && soko->map[soko->p_y + 1][soko->p_x] != '#') {
        if (soko->map[soko->p_y + 1][soko->p_x] == 'X'
        && soko->map[soko->p_y + 2][soko->p_x] == 'X');
        else
            check_down(soko);
    }
}