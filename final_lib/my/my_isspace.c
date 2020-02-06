/*
** EPITECH PROJECT, 2020
** my_isspace
** File description:
** my_isspace
*/

int my_isspace(char c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return (1);
    return (0);
}