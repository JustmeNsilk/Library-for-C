/*
** EPITECH PROJECT, 2025
** Stumper check
** File description:
** test_lib.c
*/

#include "crit.h"
#include "str.h"

Test(utils, nullprint_test)
{
    char *str = NULL;

    cr_assert_eq(my_putstr(str, STDOUT), ERROR);
}

Test(utils, null_len_test)
{
    char *str = NULL;

    cr_assert_eq(my_strlen(str), FAILURE);
}

Test(utils, valid_len_test)
{
    char *str = "Hello :3";

    cr_assert_eq(my_strlen(str), 8);
}

Test(utils, valid_print_test, .init=redirect_all_stdout)
{
    char const *str = "Hello World!";

    my_putstr(str, STDOUT);
    cr_assert_stdout_eq_str(str, "");
}
