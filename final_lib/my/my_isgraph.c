/*
** EPITECH PROJECT, 2020
** my_isgraph
** File description:
** my_isgraph
*/

int my_isgraph(char c)
{
    if (c >= 33 && c <= 126)
        return (1);
    return (0);
}