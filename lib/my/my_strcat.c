/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** concatenates two strings
*/
#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int a = 0;
    char *both = malloc(sizeof(char) * ((my_strlen(dest) + my_strlen(src))));

    while (src[i] != '\0') {
        both[a] = src[i];
        i++;
        a++;
    }
    i = 0;

    while (dest[a] != '\0') {
        both[a] = dest[i];
        i++;
        a++;
    }
    both[a] = '\0';
    return (both);
}
