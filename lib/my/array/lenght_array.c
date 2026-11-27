/*
** EPITECH PROJECT, 2026
** Library-for-C
** File description:
** lenght_array.c
*/

#include "str.h"

size_t len_array(void *array)
{
    size_t size = 0;

    if (!array)
        return size;
    for (; ((void**)array)[size]; size++);
    return size;
}