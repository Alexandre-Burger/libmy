/*
** EPITECH PROJECT, 2019
** flag2
** File description:
** flag2
*/

#include <unistd.h>
#include <stdarg.h>

int my_putstr(char const *str);

void my_putchar(char c);

int my_put_nbr(int nb);

int my_putnbr_base(int nbr, char const *base);

int my_put_unsigned_nbr(unsigned int nb);

int my_unputnbr_base(unsigned int nbr, char const *base);

int my_putstr_octal(char const *str);

int my_ptr(long int nb);

void hexamin(va_list ap)
{
    my_unputnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
}

void uninteger(va_list ap)
{
    my_put_unsigned_nbr(va_arg(ap, unsigned int));
}

void binary(va_list ap)
{
    my_unputnbr_base(va_arg(ap, unsigned int), "01");
}

void stringmaj(va_list ap)
{
    my_putstr_octal(va_arg(ap, char *));
}

void pointer(va_list ap)
{
    my_ptr(va_arg(ap, long int));
}