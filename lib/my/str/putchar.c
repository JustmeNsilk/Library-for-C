/*
** EPITECH PROJECT, 2025
** Stumper check
** File description:
** my_putchar.c
*/

#include "str.h"

int my_putchar(char c, int channel)
{
    if (write(1, &c, channel) == FAILURE)
        return ERROR;
    return SUCCESS;
}
