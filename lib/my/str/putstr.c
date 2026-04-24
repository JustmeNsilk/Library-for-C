/*
** EPITECH PROJECT, 2025
** my_putstr.c
** File description:
** display one-by-one a character's string
*/

#include "str.h"

int my_putstr(char const *str, int channel)
{
    if (str == NULL)
        return ERROR;
    for (int i = 0; str[i] != '\0'; i++){
        my_putchar(str[i], channel);
    }
    return SUCCESS;
}
