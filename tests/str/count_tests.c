/*
** EPITECH PROJECT, 2025
** Stumper check
** File description:
** test_lib.c
*/

#include "crit.h"
#include "str.h"

Test(utils, count_test)
{
    char *str = "Hello Worlds !";
    int nbr_wrd = my_count_word(str, ' ');

    cr_assert_eq(nbr_wrd, 3);
}

Test(utils, tricky_count_test)
{
    char *str = "  Hello        groot!          ";
    int nbr_wrd = my_count_word(str, ' ');

    cr_assert_eq(nbr_wrd, 2);
}

Test(utils, null_count_test)
{
    char *str = NULL;
    int nbr_wrd = my_count_word(str, ' ');

    cr_assert_eq(nbr_wrd, ERROR);
}
