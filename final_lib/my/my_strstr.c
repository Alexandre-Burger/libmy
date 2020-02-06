/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** my_strstr
*/

#include "my.h"

char *my_strstr(char const *haystack, char *needle)
{
    int len = my_strlen(needle);
    int cmp = 0;

    for (int i = 0; haystack[i]; i++) {
        if (haystack[i] == needle[cmp])
            cmp++;
        else
            cmp = 0;
        if (cmp == len)
            return (needle);
    }
    return (NULL);
}