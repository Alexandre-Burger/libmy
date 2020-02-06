/*
** EPITECH PROJECT, 2020
** my strndup
** File description:
** my strndup
*/

#include <stdlib.h>

char *my_strndup(char const *src, int n)
{
    char *dest;
    int i;
    int v = 0;

    while (src[v] != '\0')
        v++;
    dest = malloc(sizeof(char) * (n + 1));
    if (dest == NULL)
        return (NULL);
    i = 0;
    while (src[i] < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}