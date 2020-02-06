/*
** EPITECH PROJECT, 2020
** my_memset
** File description:
** my_memset
*/

#include <stdlib.h>

void *my_memset(void *str, int c, size_t n)
{
    char *p = (char *) str;
    for (size_t i = 0; i < n; i++)
        (p[i] = c);
    return (p);
}