/*
** EPITECH PROJECT, 2025
** base_project
** File description:
** str_word_array.c
*/

#include "str.h"
#include "num.h"
#include <stdio.h>

void free_array(char **buffer)
{
    if (!buffer)
        return;
    for (int idx = 0; buffer[idx]; idx++)
        free(buffer[idx]);
    free(buffer);
}

static
void move_idx(int *idx, char const *str, char const delim)
{
    if (!idx || !str)
        return;
    while (str[*idx] == delim)
        *idx++;
}

static
char *allow_mem(char const *str, int chckpnt, int idx)
{
    int lenght = idx - chckpnt;
    char *buffer = malloc(sizeof(char) * (lenght + 1));

    if (!buffer || !str){
        my_putstr("Error malloc !\n", STDERR);
        return NULL;
    }
    for (int idx = 0; idx < lenght; idx++)
        buffer[idx] = str[idx];
    buffer[lenght] = '\0';
    return buffer;
}

char **str_wrd_array(char const *str, char const delim)
{
    int count = my_count_word(str, delim);
    int index = count;
    int chckpnt = 0;
    int idx = 0;
    char **buffer = malloc(sizeof(char *) * (count + 1));

    if (!str || !buffer){
        free(buffer);
        return NULL;
    }
    for (; str[idx] != '\0'; idx++){
        if (str[idx] == delim){
            move_idx(&idx, str, delim);
            buffer[count - index] = allow_mem(&str[chckpnt], chckpnt, idx);
            chckpnt = idx;
            index--;
        }
    }
    if (str[idx - 1] != delim)
        buffer[count - index] = allow_mem(&str[chckpnt], chckpnt, idx);
    buffer[count] = NULL;
    return buffer;
}
