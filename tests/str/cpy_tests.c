/*
** EPITECH PROJECT, 2025
** Stumper check
** File description:
** cpy_tests.c
*/

#include "crit.h"
#include "str.h"

Test(utils, ncpy_valid_test)
{
    char *str = "Hello Worlds !";
    char *cpystr = malloc(4);

    if (!cpystr)
        CR_FAIL_ABORT_;
    cr_assert_str_eq(my_strncpy(str, cpystr, 5), "Hello");
    free(cpystr);
}
