/*
** EPITECH PROJECT, 2020
** str to word array
** File description:
** str to word array
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

char **first_tab(char *src, char c, int *nb)
{
    char **word_tab = NULL;

    if (src[0] != c)
        (*nb)++;
    for (int i = 0; src[i]; i++) {
        if (src[i] == c && (src[i + 1] != c && src[i + 1] != 0))
            (*nb)++;
    }
    word_tab = malloc(sizeof(char *) * ((*nb) + 1));
    if (word_tab == NULL)
        return (NULL);
    return (word_tab);
}

static char **init_tab(char *src, char c)
{
    char **word_tab = NULL;
    int nb = 0;
    int z = 0;
    int v = 0;
    int b;

    word_tab = first_tab(src, c, &nb);
    for (int j = 0; j < nb; j++) {
        b = 0;
        for (; src[v] && b == 0; v++) {
            if (src[v] != c) {
                z++;
            } if ((src[v + 1] == c || src[v + 1] == '\0') && z > 0) {
                word_tab[j] = malloc(sizeof(char) * (z + 1));
                word_tab[j][z] = '\0';
                b++;
                z = 0;
            } } } word_tab[nb] = NULL;
    return (word_tab);
}

char **my_str_to_word_array(char *str, char c)
{
    int i = 0;
    int j = 0;
    int w = 0;
    char **word_tab = NULL;

    word_tab = init_tab(str, c);
    for (int x = 0; str[x] != '\0'; x++) {
        if (str[x] != c) {
            w++;
            word_tab[i][j] = str[x];
            j++;
        }
        else if (str[x + 1] != c && str[x + 1] != '\0' && w > 0) {
            i++;
            j = 0;
        }
    }
    return (word_tab);
}