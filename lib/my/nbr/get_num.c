/*
** EPITECH PROJECT, 2025
** get_number
** File description:
** fetch & transform a char * into an int when possible
*/

#include "num.h"
#include "str.h"

static
int fetch_num(char const *str)
{
    int idx = 0;
    if (!str)
        return FAILURE;

    for (; is_num(str[idx]) == TRUE; idx++);
    return idx;
}

static
int make_int(char const *str)
{
    int lenght = fetch_num(str);
    int num = 0;

    if (!str || !lenght)
        return FAILURE;
    for (int idx = 0; idx < lenght; idx++){
        num += (str[idx] - '0') * my_compute_power_rec(10, lenght - idx);
    }
    return num;
}

int get_num(char const *str)
{
    int num = 0;
    int idx = 0;

    if (!str)
        return FAILURE;
    for (; str[idx] != '\0'; idx++){
        if (is_num(str[idx]) == TRUE)
            num = make_int(&str[idx]);
        else 
            return FAILURE;
    }
    return num;
}

