/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** my_strdup
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *dest;
    int i;
    int v = 0;

    while (src[v] != '\0')
        v++;
    dest = malloc(sizeof(char) * (v + 1));
    if (dest == NULL)
        return (NULL);
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}
