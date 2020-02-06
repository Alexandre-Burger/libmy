/*
** EPITECH PROJECT, 2020
** my_isblank
** File description:
** my_isblank
*/

int my_isblank(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return (0);
}