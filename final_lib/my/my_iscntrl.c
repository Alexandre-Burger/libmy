/*
** EPITECH PROJECT, 2020
** my_iscntrl
** File description:
** my_iscntrl
*/

int my_iscntrl(char c)
{
    if ((c >= 0 && c <= 31) || c == 127)
        return (1);
    return (0);
}