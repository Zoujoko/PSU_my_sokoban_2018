/*
** EPITECH PROJECT, 2018
** soko struct
** File description:
** yes
*/
#pragma once
#include <string.h>
#include <stdio.h>

typedef struct sokoban_s{
    int size;
    int p_x;
    int p_y;
    int case_x;
    int case_y;
    char *reset;
    char *buffer;
    char **map;
    char **save;
    int *size_lens;
    int line_nbr;
    int storage;
    int blocked;
    int score;
    int cases;
    char input;
}           sokoban_t;