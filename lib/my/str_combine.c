/*
** EPITECH PROJECT, 2019
** lib
** File description:
** stick 2 str together
*/

#include "lib.h"
#include <stdlib.h>

char *str_combine(char *str_one, char *str_two)
{
    int i = my_strlen(str_one);
    int j = my_strlen(str_two);
    int k = i + j;
    int m = 0;
    char *str = malloc(sizeof(char) * (k + 1));

    str[k] = '\0';
    for (; m < i; m++)
        str[m] = str_one[m];
    for (int n = 0; m < i + j; m++, n++)
        str[m] = str_two[n];
    return (str);
}