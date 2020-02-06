/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** my_strcat
*/

#include <stdlib.h>
#include "my.h"

char *my_strcat(char *srca, char *srcb)
{
    int lena = my_strlen(srca);
    int lenb = my_strlen(srcb);
    int temp = 0;
    char *dest;

    dest = malloc(sizeof(char) * (lena + lenb) + 1);
    if (dest == NULL)
        return (NULL);
    for (int i = 0; srca[i] != '\0'; i++, temp++)
        dest[temp] = srca[i];
    for (int i = 0; srcb[i] != '\0'; i++, temp++)
        dest[temp] = srcb[i];
    dest[temp] = '\0';
    return (dest);
}