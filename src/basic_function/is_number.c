/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** check if it is a number
*/

#include "palindrome.h"

int is_number(char *string, int neg)
{
    int i = 0;

    if (string[0] == '-' && string[1] == '0' && string[2] == '\0')
        return 0;
    if (neg == 1 && string[0] == '-')
        i++;
    for (; string[i]; i++) {
        if (string[i] < '0' || string[i] > '9')
            return -1;
    }
    return 0;
}