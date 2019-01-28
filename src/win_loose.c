/*
** EPITECH PROJECT, 2018
** score manager
** File description:
** yes
*/
#include "../include/my.h"
#include "../include/function.h"

int check_end(sokoban_t *soko)
{
    if (soko->score == soko->cases)
        return (0);
    else
        return (1);
}