/*
** EPITECH PROJECT, 2018
** main sokoban
** File description:
** yes
*/
#include "../include/my.h"
#include "../include/function.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <ncurses.h>

int search_cases(sokoban_t *soko)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (soko->map[j] != NULL) {
        if (soko->map[j][i] == 'X') {
            k++;
        }
        i++;
        if (soko->map[j][i] == '\0') {
            i = 0;
            j++;
        }
    }
    return (k);
}

void search_player(sokoban_t *soko)
{
    int i = 0;
    int j = 0;

    soko->cases = 0;
    while (soko->map[j] != NULL) {
        if (soko->map[j][i] == 'P') {
            soko->p_x = i;
            soko->p_y = j;
        }
        if (soko->map[j][i] == 'X') {
            soko->cases++;
        }
        i++;
        if (soko->map[j][i] == '\0') {
            i = 0;
            j++;
        }
    }
}

void print_map(sokoban_t *soko)
{
    int i = 0;
    int j = 0;

    check_o(soko);
    while (soko->map[j] != NULL) {
        while (soko->map[j][i] != '\0') {
            addch(soko->map[j][i]);
            i++;
        }
        j++;
        move(j, 0);
        i = 0;
        }
}

void check_input(sokoban_t *soko)
{
    if (soko->score != soko->cases) {
    soko->input = getch();
    check_direction_up_down(soko);
    check_direction_left_right(soko);
    if (soko->input == ' ')
        file_to_tab(soko);
    }
}

int main(int argc, char **argv)
{
    sokoban_t *soko = malloc(sizeof(sokoban_t) * (2));

    struct_filler(soko, argv[1], argc);
    initscr();
    noecho();
    curs_set(0);
    soko->cases = search_cases(soko);
    print_map(soko);
    while (soko->score != soko->cases) {
        clear();
        print_map(soko);
        refresh();
        check_input(soko);
    }
    endwin();
    return (check_end(soko));
}