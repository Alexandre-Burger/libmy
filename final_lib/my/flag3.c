/*
** EPITECH PROJECT, 2019
** flag 3
** File description:
** flag 3
*/

#include <unistd.h>
#include <stdarg.h>

void my_putchar(char c);

void percent(__attribute__((unused)) va_list ap)
{
    my_putchar('%');
}
