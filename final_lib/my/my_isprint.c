/*
** EPITECH PROJECT, 2020
** my_isprint
** File description:
** my_isprint
*/

int my_isprint(char c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}