/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <pwd.h>
#include <dirent.h>
#include <stdarg.h>

#ifndef my_h_
#define my_h_

//stdio.h
int my_printf(char const *format, ...);
int my_put_unsigned_nbr(unsigned int nb);
void my_putchar(char c);
int my_putnbr_base(int nbr, char const *base);
int my_put_nbr(int nb);
char my_putstr(char const *str);
int my_strlen(char const *str);
int my_unputnbr_base(unsigned int nbr, char const *base);
int oct(int v);
int my_putstr_octal(char const *str);
int my_ptr(long int nb);
char my_puterr(char const *str);
//ctype.h
int my_isalpha(char c);
int my_isalnum(char c);
int my_isascii(char c);
int my_isblank(char c);
int my_iscntrl(char c);
int my_isdigit(char c);
int my_isgraph(char c);
int my_islower(char c);
int my_isprint(char c);
int my_ispunct(char c);
int my_isspace(char c);
int my_isupper(char c);
int my_isxdigit(char c);
//string.h
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strdup(char const *src);
char *my_strndup(char const *src, int n);
char *my_strafdup(char const *src, int n);
char *my_strcat(char *srca, char *srcb);
char *my_strncat(char *srca, char *srcb, int nb);
char **my_str_to_word_array(char *str, char c);
char **my_wordtab_format(char *str);
char *my_revstr(char *str);
char *my_strstr(char const *haystack, char *needle);
void *my_memchr(const void *str, int c, size_t n);
int my_memcmp(const void *str1, const void *str2, size_t n);
void *my_memcpy(void *dest, const void *src, size_t n);
void *my_memmove(void *dest, const void *src, size_t n);
void *my_memset(void *str, int c, size_t n);
char *my_strchr(const char *str, int c);
char *my_strrchr(const char *str, int c);
size_t my_strcspn(const char *str, const char *reject);
size_t my_strspn(const char *str, const char *accept);
char *my_strpbrk(const char *str, const char *accept);
char *my_strtok(char *str, const char *delim);
//stdlib.h
int my_getnbr(char const *str);
void free_tab(char **tab);

#endif /* my_h_ */