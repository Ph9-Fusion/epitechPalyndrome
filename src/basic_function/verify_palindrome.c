/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** verify if the number is a palindrome
*/

#include "palindrome.h"
#include <stdio.h>

int verify_palindrome(int nbr)
{
    int lenght = 0;
    int i = 0;
    int lenght_power_ten;
    int i_power_ten;

    for (; nbr / my_compute_power_rec(10, lenght) >= 10; lenght++);
    if (lenght == 0)
        return 1;
    for (; lenght > i; i++, lenght--) {
        lenght_power_ten = my_compute_power_rec(10, lenght);
        i_power_ten = my_compute_power_rec(10, i);
        if (nbr / lenght_power_ten % 10 != nbr / i_power_ten % 10)
            return -1;
    }
    return 1;
}