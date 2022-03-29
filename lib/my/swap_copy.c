/*
** EPITECH PROJECT, 2019
** Jour 6
** File description:
** my_strcpy
*/

#include <stdlib.h>

char *my_strcpy(char *dest, char const *src, int i)
{
    int j = i;

    for (;src[j] != '\0'; j++);
    dest = malloc(sizeof(char) * (j - i + 1));
    j = 0;
    for (; src[i] != '\0'; i++, j++)
        dest[j] = src[i];
    dest[j] = '\0';
    return (dest);
}

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}

int str_compare(char const *str, char const *rts)
{
    int i = 0;

    for (; str[i] == rts[i] && str[i]; i++);
    if (!str[i] && !rts[i])
        return (1);
    return 0;
}