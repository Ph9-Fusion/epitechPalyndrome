/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** Make recursive function for factorial number and square
*/

#include <stdio.h>

int my_factrec_synthesis(int nb)
{
    if (nb == 0)
        return 1;
    if (nb < 0 || nb > 12)
        return 0;
    return (my_factrec_synthesis(nb - 1) * nb);
}

int my_squareroot_synthesis(int nb)
{
    int result = 1;

    if (nb < 0)
        return -1;
    if (nb == 0)
        return 0;
    for (; result < 46341 && result * result < nb; result++);
    if (result == 46341 || result * result > nb)
        return -1;
    return result;
}