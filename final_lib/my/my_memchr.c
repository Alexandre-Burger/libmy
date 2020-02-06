/*
** EPITECH PROJECT, 2020
** my_memchr
** File description:
** my_memchr
*/

#include <stdlib.h>

void *my_memchr(const void *str, int c, size_t n)
{
    unsigned char *p = (unsigned char *) str;

    for (size_t i = 0; i < n; p++, i++) {
        if (*p == (unsigned char) c)
            return (p);
    }
    return (NULL);
}