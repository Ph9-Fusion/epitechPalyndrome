/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** resolve the -n option
*/

#include "palindrome.h"
#include <stdio.h>

static int type_n_display(data_t data, int i, int value)
{
    if (i < data.imin || i > data.imax || verify_palindrome(value) == -1) {
        my_putstr("no solution\n");
    } else {
        my_put_nbr(data.number);
        my_putstr(" leads to ");
        my_put_nbr(base_converter(value, data.base, 10));
        my_putstr(" in ");
        my_put_nbr(i);
        my_putstr(" iteration(s) in base ");
        my_put_nbr(data.base);
        my_putchar('\n');
    }
    return 0;
}

int type_n(data_t data)
{
    int value = base_converter(data.number, 10, data.base);
    int reverse;
    int i = 0;

    for (; verify_palindrome(value) == -1 && i <= data.imax; i++) {
        reverse = reverse_nb(value);
        value = base_addition(value, reverse, data.base);
    }
    return (type_n_display(data, i, value));
}
