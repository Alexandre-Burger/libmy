/*
** EPITECH PROJECT, 2019
** my put unsigned nbr
** File description:
** my put unsigned nbr
*/

#include <unistd.h>
#include "my.h"

int my_put_unsigned_nbr(unsigned int nb)
{
    if (nb <10)
    {
        my_putchar(nb + '0');
    }
    else if (nb > 9)
    {
        my_put_unsigned_nbr(nb / 10);
        my_put_unsigned_nbr(nb % 10);
    }
    return (0);
}
