/*
** EPITECH PROJECT, 2019
** my putnbr base unsigned
** File description:
** my put nbr base unsigned
*/

#include <unistd.h>
#include "my.h"

int my_unputnbr_base(unsigned int nbr, char const *base)
{
    unsigned int res = 0;
    unsigned int div = 0;

    res = base[nbr % my_strlen(base)];
    div = nbr / my_strlen(base);
    if (div != 0)
        my_unputnbr_base(div, base);
    my_putchar(res);
    return (0);
}