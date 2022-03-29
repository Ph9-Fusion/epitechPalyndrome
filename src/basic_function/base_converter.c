/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** take a number of a base to convert it to another base (max base 10)
*/

#include "palindrome.h"

int base_converter(int nb, int st_base, int f_base)
{
    int f_number = 0;
    int fi_number = 0;

    for (int i = 0; nb; nb /= 10, i++)
        f_number += (nb % 10) * my_compute_power_rec(st_base, i);
    for (int i = 0; f_number; f_number /= f_base, i++)
        fi_number += (f_number % f_base) * my_compute_power_rec(10, i);
    return fi_number;
}