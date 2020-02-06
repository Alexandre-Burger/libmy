/*
** EPITECH PROJECT, 2020
** my_memmove
** File description:
** my_memmove
*/

#include <stdlib.h>

void *my_memmove(void *dest, const void *src, size_t n)
{
    char *p_d = (char *) dest;
    char *p_s = (char *) src;
    char *temp = malloc(sizeof(char) * n);

    if (temp == NULL)
        return (NULL);
    for (size_t i = 0; i < n; i++)
        temp[i] = p_s[i];
    for (size_t i = 0; i < n; i++)
        p_d[i] = temp[i];
    free(temp);
    return (p_d);
}