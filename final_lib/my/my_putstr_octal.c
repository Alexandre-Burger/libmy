/*
** EPITECH PROJECT, 2019
** my putstr for flag S
** File description:
** my putstr for flag S
*/

#include <unistd.h>
#include "my.h"

int oct(int v)
{
    if (v < 7)
        my_putstr("00");
    else if (v < 32)
        my_putchar('0');
    return (0);
}

int my_putstr_octal(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 32) {
            my_putchar(str[i]);
        }
        else {
            my_putchar('\\');
            oct(str[i]);
            my_unputnbr_base(str[i], "01234567");
        }
        i++;
    }
    return (0);
}