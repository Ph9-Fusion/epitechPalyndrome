/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** reverse a number
*/

#include "palindrome.h"

int reverse_nb(int nb)
{
    int lenght = 0;
    int lenght_power_ten = 0;
    int i = 0;
    int i_power_ten = 0;
    int nb_reverse = 0;

    for (; nb / my_compute_power_rec(10, lenght) >= 10; lenght++);
    for (; lenght >= 0; lenght--, i++) {
        lenght_power_ten = my_compute_power_rec(10, lenght);
        i_power_ten = my_compute_power_rec(10, i);
        nb_reverse += (nb / lenght_power_ten % 10) * i_power_ten;
    }
    return nb_reverse;
}