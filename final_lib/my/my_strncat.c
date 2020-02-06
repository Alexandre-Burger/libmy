/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** my_strncat
*/

#include <stdlib.h>
#include "my.h"

char *my_strncat(char *srca, char *srcb, int nb)
{
    int lena = my_strlen(srca);
    int lenb = my_strlen(srcb);
    int temp = 0;
    char *dest;

    dest = malloc(sizeof(char) * (lena + lenb) + 1);
    dest[lena + lenb] = '\0';
    for (int i = 0; srca[i] != '\0'; i++, temp++)
        dest[temp] = srca[i];
    for (int i = 0; i < nb; i++, temp++)
        dest[temp] = srcb[i];
    dest[temp + 1] = '\0';
    return (dest);
}