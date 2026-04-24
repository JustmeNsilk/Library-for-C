/*
** EPITECH PROJECT, 2025
** Stumper check
** File description:
** cpy_tests.c
*/

#include <criterion/criterion.h>
#include "my.h"
#include "macro.h"
#include <stdio.h>

Test(utils, dup_valid_test)
{
    char *str = "Hello Worlds !";
    char *strdup = my_strdup(str);

    cr_assert_eq(my_strcmp(strdup, str), SUCCESS);
}

Test(utils, dup_non_valid_test)
{
    char *str = "Hello Worlds !";
    char *strdup = NULL;

    cr_assert_eq(my_strcmp(strdup, NULL), ERROR);
}
