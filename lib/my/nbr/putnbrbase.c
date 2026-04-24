/*
** EPITECH PROJECT, 2025
** my_put_nbr
** File description:
** print a number ask by the user
*/

#include "num.h"
#include "str.h"

int my_putnbr_base(int nb, char const *base)
{
    int lenght = my_strlen(base);
    int c1 = 0;
    int c2 = 0;

    if (nb < 0){
        nb *= -1;
        my_putchar('-', STDOUT);
    }
    c1 = nb / lenght;
    c2 = nb % lenght + 48;
    if (nb >= lenght)
        my_putnbr_base(c1, base);
    if (write(1, &c2, STDOUT) == FAILURE)
        return ERROR;
    return SUCCESS;
}
