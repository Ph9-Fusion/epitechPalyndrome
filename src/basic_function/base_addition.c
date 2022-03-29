/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** addition for number of base 2 to 10
*/

#include "palindrome.h"

int base_addition(int number_one, int number_two, int base)
{
    int one = base_converter(number_one, base, 10);
    int two = base_converter(number_two, base, 10);

    return (base_converter(one + two, 10, base));
}