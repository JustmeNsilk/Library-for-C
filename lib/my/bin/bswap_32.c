/*
** EPITECH PROJECT, 2025
** base_project
** File description:
** bswap_32.c
*/

#include <stdint.h>

uint32_t my_bswap_32(uint32_t x)
{
    x = (x & 0x000000ff) >> 24 |
        (x & 0xff00) << 8 |
        (x & 0xff0000) >> 8 |
        (x & 0x000000ff) << 24;
    return x;
}
