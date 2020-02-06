/*
** EPITECH PROJECT, 2020
** my strndup
** File description:
** my strndup
*/

#include <stdlib.h>

char *my_strafdup(char const *src, int n)
{
    char *dest;
    int i;
    int v = 0;

    while (src[v] != '\0')
        v++;
    dest = malloc(sizeof(char) * (v - n + 1));
    if (dest == NULL)
        return (NULL);
    i = 0;
    while (src[n] != '\0')
    {
        dest[i] = src[n];
        i++;
        n++;
    }
    dest[i] = '\0';
    return (dest);
}