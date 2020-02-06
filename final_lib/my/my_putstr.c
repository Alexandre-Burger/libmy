/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** my putstr
*/
#include <unistd.h>
#include "my.h"

char my_putstr(char const *str)
{
    return (write(1, str, my_strlen(str)));
}
