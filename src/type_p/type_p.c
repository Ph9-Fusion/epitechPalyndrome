/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** tp function
*/

#include "palindrome.h"

static int type_p_display(data_t data, int i, int result, int value)
{
    if (i < data.imin || i > data.imax || result != data.number) {
        return 0;
    } else {
        my_put_nbr(value);
        my_putstr(" leads to ");
        my_put_nbr(data.number);
        my_putstr(" in ");
        my_put_nbr(i);
        my_putstr(" iteration(s) in base ");
        my_put_nbr(data.base);
        my_putchar('\n');
    }
    return 1;
}

int type_p(data_t data)
{
    int i = 0;
    int testing_value = 1;
    int value = 0;
    int value_correct_base = 0;
    int reverse;
    int compt = 0;

    for (; testing_value <= data.number; testing_value++, i = 0) {
        value = testing_value;
        for (; value < data.number && i <= data.imax; i++) {
            value_correct_base = base_converter(value, 10, data.base);
            reverse = reverse_nb(value_correct_base);
            value = base_addition(value_correct_base, reverse, data.base);
            value = base_converter(value, data.base, 10);
        }
        compt += type_p_display(data, i, value, testing_value);
    }
    if (!compt)
        my_putstr("no solution\n");
    return 0;
}