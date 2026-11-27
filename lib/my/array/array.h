/*
** EPITECH PROJECT, 2026
** Library-for-C
** File description:
** array.h
*/

#ifndef ARRAY_H
    #define ARRAY_H

//---IMPORT---//
    #include <stdlib.h>
    #include <stdio.h>

//---MACRO---//

    #define MEM_SIZE 25
    #define IS_FULL(value) ((value % MEM_SIZE != 0) || !(value))
    #define REAL_SIZE(value) (value / MEM_SIZE + IS_FULL(value) % MEM_SIZE)

//---FUNCTION---//
size_t len_array(void const *array);
void *create_array(void);
int resize_array(void *array, size_t size);
int append_array(void *array, void *element);
void free_array(void *array);

#endif
