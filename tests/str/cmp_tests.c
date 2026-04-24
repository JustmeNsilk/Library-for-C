/*
** EPITECH PROJECT, 2025
** Stumper check
** File description:
** cpy_tests.c
*/

#include "crit.h"
#include "str.h"

Test(utils, cmp_valid_test)
{
    char *str = "Hello Worlds !";
    char *cmpstr = str;

    cr_assert_eq(my_strcmp(cmpstr, str), SUCCESS);
}

Test(utils, cmpn_valid_test)
{
    char *str = "Hello Worlds !";
    char *cmpstr = str;

    cr_assert_eq(my_strcmp(cmpstr, str), SUCCESS);
}

Test(utils, crashcmp_test)
{
    char *str = "Hello Worlds !";
    char *cmpstr = NULL;

    cr_assert_eq(my_strcmp(cmpstr, str), ERROR);
}

Test(utils, cmpn_test)
{
    char *str = "Hello world!";

    cr_assert_eq(my_strncmp(str, "Hello", 5), SUCCESS);
}
