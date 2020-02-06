/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_wordtab_format
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

char **mal_line(char **tab, char *str, int word)
{
    int z = 0;
    int j = 0;
    int count = 0;

    for (int i = 0; i < word; i++) {
        j = 0;
        for (; str[z] && j == 0; z++) {
            j = 0;
            if (str[z] != 32 && str[z] != 9)
                count++;
            if ((str[z + 1] == 9 || str[z + 1] == 32
            || str[z + 1] == 0) & (count > 0)) {
                tab[i] = malloc(sizeof(char) * (count + 1));
                tab[i][count] = 0;
                count = 0;
                j++;
            }
        }
    }
    return (tab);
}

char **mal_tab(char *str)
{
    int word = 0;
    char **res = NULL;

    for (int i = 0; str[i]; i++) {
        if ((str[i] != 32 && str[i] != 9) && (str[i + 1] == 32
        || str[i + 1] == 9 || str[i + 1] == 0))
            word++;
    }
    res = malloc(sizeof(char *) * (word + 1));
    if (res == NULL)
        return (NULL);
    res[word] = NULL;
    res = mal_line(res, str, word);
    return (res);
}

char **my_wordtab_format(char *str)
{
    char **res = NULL;
    int x = 0;
    int y = 0;

    res = mal_tab(str);
    if (res == NULL)
        return (NULL);
    for (int i = 0; str[i]; i++) {
        if (str[i] != 32 && str[i] != 9) {
            res[y][x] = str[i];
            x++;
        }
        if ((str[i + 1] == 32 || str[i + 1] == 9 || str[i + 1] == 0) && x > 0) {
            x = 0;
            y++;
        }
    }
    return (res);
}

