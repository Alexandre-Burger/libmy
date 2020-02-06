/*
** EPITECH PROJECT, 2020
** my_isalnum
** File description:
** my_isalnum
*/

int my_isalnum(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
    (c >= '0' && c <= '9'))
        return (1);
    return (0);
}