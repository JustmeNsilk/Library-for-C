/*
** EPITECH PROJECT, 2025
** my_baserepo
** File description:
** strxcpy.c
*/

#include "str.h"

char *my_strncpy(char const *copy, char *paste, int lenght)
{
    int idx = 0;

    if (!copy || !paste)
        return NULL;
    for (; idx < lenght; idx++)
        paste[idx] = copy[idx];
    paste[idx] = '\0';
    return paste;
}

char *my_strcpy(char const *copy, char *paste)
{
    if (!copy || !paste)
        return NULL;
    for (int idx = 0; copy[idx] != '\0'; idx++)
        paste[idx] = copy[idx];
    return paste;
}
