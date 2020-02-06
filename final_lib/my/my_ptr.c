/*
** EPITECH PROJECT, 2019
** print adress
** File description:
** print adress
*/

#include <unistd.h>
#include "my.h"

int my_ptr(long int nb)
{
    my_putstr("0x");
    my_putnbr_base(nb, "0123456789abcdef");
    return (0);
}