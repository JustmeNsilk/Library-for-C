/*
** EPITECH PROJECT, 2025
** base_project
** File description:
** bswap_32.c
*/

#include <stdint.h>

uint64_t my_bswap_64(uint64_t x)
{
    x = ((x & 0xff00000000000000) >> 56) |
        ((x & 0xff000000000000) >> 40) |
        ((x & 0xff0000000000) >> 24) |
        ((x & 0xff00000000) >> 8) |
        ((x & 0xff000000)) << 8 |
        ((x & 0xff0000) << 24) |
        ((x & 0xff00) << 40) |
        ((x & 0xff) << 56);
    return x;
}
