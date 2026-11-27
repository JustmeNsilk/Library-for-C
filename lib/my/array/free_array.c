/*
** EPITECH PROJECT, 2026
** Library-for-C
** File description:
** free_array.h
*/

#include "str.h"

void free_array(void *array)
{
    if (!array)
        return;
    for (size_t idx = 0; (*(void***)array)[idx]; idx++)
        free((*(void***)array)[idx]);
    free(array);
}