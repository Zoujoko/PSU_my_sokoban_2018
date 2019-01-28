/*
** EPITECH PROJECT, 2018
** function
** File description:
** yes
*/

#pragma once
#include "soko.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <ncurses.h>

//struct_filler
void file_to_tab(sokoban_t *soko);
void stock_cols(sokoban_t *soko);
void get_lines(sokoban_t *soko);
void struct_filler(sokoban_t *soko, char *filepath, int argc);

//main
void search_player(sokoban_t *soko);
void print_map(sokoban_t *soko);
void check_input(sokoban_t *soko);

//check direction
void check_direction_up_down(sokoban_t *soko);
void check_direction_left_right(sokoban_t *soko);

//movement
void check_up(sokoban_t *soko);
void check_down(sokoban_t *soko);
void check_right(sokoban_t *soko);
void check_left(sokoban_t *soko);

//win or loose
int check_end(sokoban_t *soko);

//error
void check_error(sokoban_t *soko, char *filepath, int argc);
void check_map(char charac);
void check_edge(sokoban_t *soko);

//replace o
void file_to_save(sokoban_t *soko);
void check_o(sokoban_t *soko);