/*
** EPITECH PROJECT, 2019
** my put nbr base
** File description:
** my put nbr base
*/

#include <unistd.h>
#include "my.h"

int my_putnbr_base(int nbr, char const *base)
{
    int res = 0;
    int div = 0;

    if (nbr < 0)
    {
        my_putchar('-');
        nbr = nbr * -1;
    }
    res = base[nbr % my_strlen(base)];
    div = nbr / my_strlen(base);
    if (div != 0)
        my_putnbr_base(div, base);
    my_putchar(res);
    return (0);
}