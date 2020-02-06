/*
** EPITECH PROJECT, 2019
** flag
** File description:
** flag
*/

#include <unistd.h>
#include <stdarg.h>

int my_putstr(char const *str);

void my_putchar(char c);

int my_put_nbr(int nb);

int my_putnbr_base(int nbr, char const *base);

int my_unputnbr_base(unsigned int nbr, char const *base);

void string(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}

void charac(va_list ap)
{
    my_putchar(va_arg(ap, int));
}

void integer(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

void octal(va_list ap)
{
    my_unputnbr_base(va_arg(ap, unsigned int), "01234567");
}

void hexamaj(va_list ap)
{
    my_unputnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
}