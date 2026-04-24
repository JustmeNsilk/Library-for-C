/*
** EPITECH PROJECT, 2025
** my_strcat
** File description:
**  a function that concatenates two strings
*/

#include "str.h"

char *my_strcat(char *dest, char const *src, int type)
{
    int len_dest = my_strlen(dest);
    int len_src = my_strlen(src);
    char *new_dest = malloc(sizeof(char) * (len_dest + len_src + 1));

    if (!dest || !src || !new_dest)
        return NULL;
    for (int i = 0; dest[i] != '\0'; i++)
        new_dest[i] = dest[i];
    for (int i = 0; src[i] != '\0'; i++)
        new_dest[len_dest + i] = src[i];
    new_dest[len_dest + len_src] = '\0';
    if (type == HEAP)
        free(dest);
    return new_dest;
}
