/*
** EPITECH PROJECT, 2020
** my_isascii
** File description:
** my_isascii
*/

int my_isascii(unsigned char c)
{
    if (c <= 127)
        return (1);
    return (0);
}