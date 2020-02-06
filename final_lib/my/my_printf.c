/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include <unistd.h>
#include <stdarg.h>
#include "my.h"
#include "struct.h"

int my_printf(char const *format, ...)
{
    va_list ap;
    va_start (ap, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;
            for ( int j = 0; tab[j].flag != '\0'; j++) {
                if (format[i] == tab[j].flag)
                    tab[j].pt(ap);
            }
        }
        else
            my_putchar(format[i]);
    }
    va_end (ap);
    return (0);
}