/*
** EPITECH PROJECT, 2025
** Stumper check
** File description:
** putnbr_tests.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stdout(void)
{
        cr_redirect_stdout();
        cr_redirect_stderr();
}
