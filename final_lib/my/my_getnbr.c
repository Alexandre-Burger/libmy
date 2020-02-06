/*
** EPITECH PROJECT, 2019
** getnbr
** File description:
** getnbr
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int neg = 1;

    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    neg = (str[i] == '-') ? -1 : 1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
        nb = nb * 10 + str[i++] - '0';
    return (nb * neg);
}