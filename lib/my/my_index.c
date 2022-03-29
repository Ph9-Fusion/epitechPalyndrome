/*
** EPITECH PROJECT, 2019
** lib
** File description:
** my_index
*/

#include "lib.h"

int my_index(char const *str, char const *index)
{
    int j = 0;

    for (j = 0; str[j] == index[j] && index[j]; j++);
    if (!index[j])
        return (1);
    return (-1);
}