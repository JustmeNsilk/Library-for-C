/*
** EPITECH PROJECT, 2025
** my_top
** File description:
** count the number of word in a string with a delimiter
*/

#include "define.h"

int my_count_word(char const *str, char const c)
{
    int idx = 1;
    int count = 0;

    if (!str)
        return ERROR;
    for (; str[idx]; idx++){
        if (str[idx] == c && str[idx - 1] != c)
            count++;
    }
    if (str[idx - 1] != c)
        count++;
    return count;
}
