/*
** EPITECH PROJECT, 2020
** my_isxdigit
** File description:
** my_isxdigit
*/

int my_isxdigit(char c)
{
    if ((c >= 48 && c <= 57) || (c >= 97 && c <= 102) || (c >= 65 && c <= 70))
        return (1);
    return (0);
}