/*
** EPITECH PROJECT, 2020
** my_strtok
** File description:
** my_strtok
*/

#include <stdlib.h>
#include "my.h"

char *my_strtok(char *str, const char *delim)
{
    static char *p = NULL;

    if (str != NULL)
        p = str;
    else if (p == NULL)
        return (p);
    str = p + my_strspn(p, delim);
    p = str + my_strcspn(str, delim);
    if (p == str)
        return (p = NULL);
    else if (*p != '\0')
        *p++ = '\0';
    return str;
}