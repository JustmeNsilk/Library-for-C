/*
** EPITECH PROJECT, 2025
** my.h
** File description:
** my lib
*/

#ifndef STR
    #define STR

//---INCLUDES---//
    #include <stdlib.h>
    #include <unistd.h>

//---MACRO---//
    #define STDIN 0
    #define STDOUT 1
    #define STDERR 2
    #define HEAP 0
    #define STACK 1

//--------- FUNCTIONS ---------//

//--- GET-INFOS ---//
int my_count_word(char const *str, char const c);
int my_strlen(char const *str);
int my_strncmp(char const *key, char const *ref, int option);
int my_strcmp(char const *key, char const *ref);
char *my_strncpy(char const *copy, char *paste, int lenght);
char *my_strcpy(char const *copy, char *paste);
int list_array(void *const *array);

//--- DISPLAY ---//
int my_putchar(char c, int channel);
int my_putstr(char const *str, int channel);

//--- MODIFICATION ---// 
char *my_strcat(char *dest, char const *src, int type);
char **str_wrd_array(char const *str, char const delim);
char *my_strdup(char const *src);
void *add_in_array(void *array, void *element);

#endif
