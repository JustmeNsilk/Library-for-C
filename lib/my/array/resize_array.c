/*
** EPITECH PROJECT, 2026
** Library-for-C
** File description:
** resize_array.c
*/

#include "define.h"
#include "array.h"

int resize_array(void *array, size_t size)
{
    size_t old_size = len_array(array);
    void **new_array = malloc(sizeof(void *) * (size + 1));

    if (!array || !new_array || !(*(void***)array)){
        free_array(new_array);
        return ERROR;
    }
    for (size_t idx = 0; idx < old_size && idx < size; idx++)
        new_array[idx] = (*(void***)array)[idx];
    new_array[size] = NULL;
    free(*(void***)array);
    *(void***)array = new_array;
    return SUCCESS;
}