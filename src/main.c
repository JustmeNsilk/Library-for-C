/*
** EPITECH PROJECT, 2025
** my_ls
** File description:
** main.c
*/

#include "define.h"
#include "str.h"

int main(void)
{
    char const *str = "Hello my name is chiki, CHIKI, CHIkI, ChIKI Wow";
    char **buffer = str_wrd_array(str, ' ');

    print_array(buffer);
    free_array(buffer);
    return SUCCESS;
}
