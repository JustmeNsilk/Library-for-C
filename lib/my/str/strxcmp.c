/*
** EPITECH PROJECT, 2025
** my_strcmp
** File description:
** return 1 if s1 > 2, -1 if not and 0 if both are equals.
*/

#include "str.h"

int my_strncmp(char const *key, char const *ref, int lenght)
{
    if (!key || !ref)
        return ERROR;
    for (int idx = 0; idx < lenght; idx++){
        if (key[idx] != ref[idx] && ref[idx] != '*')
            return ERROR;
    }
    return SUCCESS;
}

int my_strcmp(char const *key, char const *ref)
{
    if (!key || !ref)
        return ERROR;
    for (int idx = 0; key[idx] != '\0'; idx++){
        if (key[idx] != ref[idx] && ref[idx] != '*')
            return ERROR;
    }
    return SUCCESS;
}
