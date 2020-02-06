/*
** EPITECH PROJECT, 2020
** my_strrchr
** File description:
** my_strrchr
*/

#include <stdlib.h>

char *my_strrchr(const char *str, int c)
{
    int count = 0;

    for (; str[count]; count++);
    for (; count >= 0; count--) {
        if (str[count] == c)
            return ((char *) str + count);
    }
    return (NULL);
}