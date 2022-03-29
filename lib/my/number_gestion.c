/*
** EPITECH PROJECT, 2019
** lib
** File description:
** nbr gestion
*/

#include <unistd.h>
#include <stdlib.h>

int my_compute_square_root(int nb)
{
    int square = 0;
    int n = 0;

    if (nb <= 0)
        return (0);
    while (square < nb) {
        n++;
        square = n * n;
    }
    if (square % nb != 0)
        return (0);
    else
        return (n);
}

int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    nb = nb * my_compute_power_rec(nb, p - 1);
    return (nb);
}

int my_getnumber(char *str)
{
    int nb = 0;
    int n = 0;
    int neg = 0;

    if (str[0] == '-') {
        neg++;
        str += 1;
    }
    for (;str[n] <= '9' && str[n] >= '0'; n++);
    n--;
    for (int i = 0 ; str[i] <= '9' && str[i] >= '0'; i++, n--)
        nb += (str[i] - 48) * my_compute_power_rec(10, n);
    if (neg == 1)
        nb = nb * -1;
    return (nb);
}

int my_find_prime_sup(int nb)
{
    int diviseur = 2;

    if (nb <= 2)
        return (2);
    while (nb % diviseur != 0 && diviseur + 1 != nb)
        diviseur++;
    if (nb % diviseur == 0)
        return (my_find_prime_sup(nb + 1));
    else
        return (nb);
}

int my_is_prime(int nb)
{
    int diviseur = 2;

    if (nb <= 1)
        return (0);
    if (nb == 2)
        return (1);
    while (nb % diviseur != 0 && diviseur + 1 != nb)
        diviseur++;
    if (nb % diviseur == 0)
        return (0);
    else
        return (1);
}