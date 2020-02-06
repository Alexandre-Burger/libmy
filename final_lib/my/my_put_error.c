/*
** EPITECH PROJECT, 2020
** my put error
** File description:
** my put error
*/

#include <unistd.h>
#include "my.h"

char my_puterr(char const *str)
{
    return (write(2, str, my_strlen(str)));
}