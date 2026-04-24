/*
** EPITECH PROJECT, 2025
** my.h
** File description:
** my lib
*/

#ifndef NUM
    #define NUM

//---INCLUDES---//
    #include <unistd.h>
    #include "macro.h"

///---MACROS---///
    #define DECIMAL "0123456789"
    #define HEXA "01456789ABCDEF"
    #define BIN "01"

//---FUNCTIONS---//
int is_num(char const letter);
int get_num(char const *str);
int my_putnbr_base(int nb, char const *base);
int my_compute_power_rec(int nb, int const power);

#endif
