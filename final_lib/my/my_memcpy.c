/*
** EPITECH PROJECT, 2020
** my_memcpy
** File description:
** my_memcpy
*/

#include <stdlib.h>

void *my_memcpy(void *dest, const void *src, size_t n)
{
    char *p_d = (char *) dest;
    char *p_s = (char *) src;

    for (size_t i = 0; i < n; i++, p_d++, p_s++)
        *p_d = *p_s;
    return (p_s);
}