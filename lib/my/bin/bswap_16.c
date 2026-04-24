/*
** EPITECH PROJECT, 2025
** base_project
** File description:
** bswap_16.c
*/

#include <stdint.h>

uint16_t my_bswap_16(uint16_t x)
{
    x = (x & 0xff00) >> 8 |
        (x & 0xff) << 8;
    return x;
}
