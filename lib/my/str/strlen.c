/*
** EPITECH PROJECT, 2025
** my_baserepo
** File description:
** my_strlen.c
*/

#include "str.h"

int my_strlen(char const *str)
{
    int idx = 0;

    if (!str)
        return FAILURE;
    for (; str[idx] != '\0'; idx++);
    return idx;
}
