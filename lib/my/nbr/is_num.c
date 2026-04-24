/*
** EPITECH PROJECT, 2025
** is_num.c
** File description:
** check if a number is num
*/

#include "str.h"

int is_num(char const letter)
{
    if (letter >= '0' && letter <= '9')
        return TRUE;
    return FALSE;
}

