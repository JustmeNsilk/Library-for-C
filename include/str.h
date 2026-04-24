/*
** EPITECH PROJECT, 2025
** my.h
** File description:
** my lib
*/

#ifndef STR
    #define STR

//---INCLUDES---//
    #include <unistd.h>
    #include <stdlib.h>
    #include <stddef.h>
    #include "macro.h"

//---MACRO---//
    #define STDIN 0
    #define STDOUT 1
    #define STDERR 2

//---FUNCTIONS---//
int my_putchar(char c, int channel);
int my_putstr(char const *str, int channel);
int my_count_word(char const *str, char const c);
char **str_wrd_array(char const *str, char const delim);
void free_array(char **buffer);
char *my_strcat(char *dest, char const *src);
int my_strlen(char const *str);
int my_strncmp(char const *key, char const *ref, int option);
int my_strcmp(char const *key, char const *ref);
char *my_strncpy(char const *copy, char *paste, int lenght);
char *my_strcpy(char const *copy, char *paste);
char *my_strdup(char const *src);

#endif
