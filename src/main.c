/*
** EPITECH PROJECT, 2025
** my_ls
** File description:
** main.c
*/

#include "str.h"
#include <stdio.h>

int main(void)
{
    char const *str = " World!";
    char *str2 = malloc(sizeof(char) * my_strlen("Hello"));

    str2 = hello;
    str2 = my_strcat(str2, str);
    printf("%s\n", str2);
    return SUCCESS;
}
