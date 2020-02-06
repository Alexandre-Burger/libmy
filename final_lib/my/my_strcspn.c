/*
** EPITECH PROJECT, 2020
** my_strcspn
** File description:
** my_strcspn
*/

#include <stdlib.h>

size_t my_strcspn(const char *str, const char *reject)
{
    size_t len = 0;

    for (len = 0; str[len]; len++) {
        for (int i = 0; reject[i]; i++) {
            if (str[len] == reject[i])
                return (len);
        }
    }
    return (len);
}