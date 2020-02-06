/*
** EPITECH PROJECT, 2020
** my_memcmp
** File description:
** my_memcmp
*/

#include <stdlib.h>

int my_memcmp(const void *str1, const void *str2, size_t n)
{
    unsigned char *p_one = (unsigned char *) str1;
    unsigned char *p_sec = (unsigned char *) str2;

    for (size_t i = 0; i < n; i++, p_one++, p_sec++) {
        if (*p_one != *p_sec)
            return (p_one < p_sec ? -1 : 1);
    }
    return (0);
}