/*
** EPITECH PROJECT, 2020
** struct
** File description:
** struct
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <pwd.h>
#include <dirent.h>
#include <stdarg.h>
#include <grp.h>

#ifndef prin
#define prin

void string(va_list ap);
void charac(va_list ap);
void integer(va_list ap);
void octal(va_list ap);
void hexamaj(va_list ap);
void hexamaj(va_list ap);
void hexamin(va_list ap);
void uninteger(va_list ap);
void binary(va_list ap);
void stringmaj(va_list ap);
void pointer(va_list ap);
void percent(__attribute__((unused)) va_list ap);


typedef struct parse_flag_s {
    char flag;
    void (*pt) (va_list);
} parse_flag_t;

parse_flag_t tab[] = {
    {'s', &string},
    {'c', &charac},
    {'d', &integer},
    {'i', &integer},
    {'o', &octal},
    {'X', &hexamaj},
    {'x', &hexamin},
    {'u', &uninteger},
    {'b', &binary},
    {'S', &stringmaj},
    {'p', &pointer},
    {'%', &percent},
    {'\0'}
};

#endif /* !prin */
