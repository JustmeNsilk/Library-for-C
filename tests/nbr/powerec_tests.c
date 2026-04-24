/*
** EPITECH PROJECT, 2025
** Stumper check
** File description:
** putnbr_tests.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test(utils, power_test)
{
    int power = 2;
    int nbr = 5;
    int result = my_compute_power_rec(nbr, power);

    cr_assert_eq(result, 25);
}
