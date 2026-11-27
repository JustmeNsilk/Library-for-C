/*
** EPITECH PROJECT, 2026
** Library-for-C
** File description:
** create_array.c
*/

#include <stdlib.h>
#include "array.h"

void *create_array(void)
{
    void **array = malloc(sizeof(void *) * (MEM_SIZE + 1));

    if (!array)
        return NULL;
    array[0] = NULL;
    return array;
}