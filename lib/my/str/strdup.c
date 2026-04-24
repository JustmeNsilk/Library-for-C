/*
** EPITECH PROJECT, 2025
** task01 - my_strdup
** File description:
** rtfm
*/

#include "str.h"

char *my_strdup(char const *src)
{
    char *cpy = malloc(sizeof(char) * my_strlen(src) + 1);

    if (!src)
        return NULL;
    return my_strcpy(src, cpy);
}
