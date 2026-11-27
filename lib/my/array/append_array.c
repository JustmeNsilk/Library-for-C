/*
** EPITECH PROJECT, 2026
** Library-for-C
** File description:
** append_array.c
*/

#include "define.h"
#include "array.h"

int append_array(void *array, void *element)
{
    size_t array_len = 0;

    if (!element || !array)
        return ERROR;
    array_len = len_array(*(void***)array);
    if (array_len + 1 > REAL_SIZE(array_len))
        resize_array(array, REAL_SIZE(array_len + 1));
    if (!(*(void***)array))
        return ERROR;
    (*(void***)array)[array_len] = element;
    (*(void***)array)[array_len + 1] = NULL;
    return SUCCESS;
}