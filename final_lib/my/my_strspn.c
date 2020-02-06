/*
** EPITECH PROJECT, 2020
** my_strspn
** File description:
** my_strspn
*/

#include <stdlib.h>
#include "my.h"

size_t my_strspn(const char *str, const char *accept)
{
    size_t len = 0;

    while(my_strchr(accept, str[len]) != NULL)
        len++;
    return (len);
}