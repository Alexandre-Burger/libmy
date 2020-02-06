/*
** EPITECH PROJECT, 2020
** put nbr
** File description:
** put nbr
*/


#include <unistd.h>
#include "my.h"

int my_put_nbr(int nb)
{
    if ( nb == -2147483648) {
        write(1, "-2147483648", 11);
        return (0);
    }
    else {
        if (nb < 0) {
            my_putchar('-');
            my_put_nbr(nb * (-1));
        }
        else if ((nb >= 0) && (nb < 10)) {
            my_putchar(nb + '0');
        }
        else {
            my_put_nbr(nb / 10);
            my_put_nbr(nb % 10);
        }
    }
    return (0);
}