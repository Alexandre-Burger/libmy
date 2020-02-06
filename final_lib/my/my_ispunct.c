/*
** EPITECH PROJECT, 2020
** my_ispunct
** File description:
** my_ispunct
*/

#include "my.h"

int my_ispunct(char c)
{
    if (my_isgraph(c) == 1 && my_isalpha(c) == 0)
        return (1);
    return (0);
}