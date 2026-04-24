/*
** EPITECH PROJECT, 2025
** Stumper check
** File description:
** putnbr_tests.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "crit.h"
#include "macro.h"
#include "my.h"

Test(utils, valid_nbr_test, .init=redirect_all_stdout)
{
    my_putnbr_base(42, DECIMAL);
    cr_assert_stdout_eq_str("42", "");
}
