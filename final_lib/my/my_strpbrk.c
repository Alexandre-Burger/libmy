/*
** EPITECH PROJECT, 2020
** my_strpnrk
** File description:
** my_strpbrk
*/

#include <stdlib.h>

char *my_strpbrk(const char *str, const char *accept)
{
    for (size_t i = 0; str[i]; i++) {
        for (int j = 0; accept[j]; j++) {
            if (str[i] == accept[j])
                return ((char *) str + i);
        }
    }
    return (NULL);
}