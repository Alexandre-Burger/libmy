/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** my_revstr
*/

char *my_revstr(char *str)
{
    int j = (-1);
    char x;
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
        j = j + 1;
    }
    i = 0;
    while (j >= i)
    {
        x = str[j];
        str[j] = str[i];
        str[i] = x;
        i++;
        j--;
    }
    return (str);
}