/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (int i = 0; i < n; i++)
        dest[i] = src[i];
    if (src[i] == 0)
        dest[i] = '\0';
    return (dest);
}
