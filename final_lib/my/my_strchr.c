/*
** EPITECH PROJECT, 2020
** my_strchr
** File description:
** my_strchr
*/

#include <stdlib.h>

char *my_strchr(const char *str, int c)
{
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] == c)
            return ((char *) str + i);
    }
    return (NULL);
}