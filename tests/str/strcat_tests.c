/*
** EPITECH PROJECT, 2025
** Stumper check
** File description:
** putnbr_tests.c
*/

#include <criterion/criterion.h>
#include "my.h"


Test(utils, validcat_test)
{
    char const *str = " World!";
    char *final = "Hello";

    cr_assert_str_eq(my_strcat(final, str), "Hello World!");
}

Test(utils, null_cat_test)
{
    char const *str = NULL;
    char *final = "Hello";

    cr_assert_str_eq(my_strcat(final, str), NULL);
}v
