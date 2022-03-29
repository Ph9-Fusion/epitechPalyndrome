/*
** EPITECH PROJECT, 2019
** Jour 4 PISCINE
** File description:
** my_putstr
*/

#include <unistd.h>
#include <stdlib.h>

int my_strlen(char const *str)
{
    int n = 0;

    for (; str[n] != '\0'; n++);
    return (n);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return (0);
}

int my_putstr_star(char **str)
{
    for (int i = 0; str[i] != NULL; i++) {
        my_putstr(str[i]);
        my_putchar('\n');
    }
    return (0);
}

int my_put_nbr(int nb)
{
    int temp;
    int i = 1;
    int j = 0;
    char *print;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    temp = nb;
    for (;temp / 10 > 0; temp = temp / 10, i++);
    print = malloc(sizeof(char) * (i + 1));
    j = i;
    for (;i != 0; i--, nb /= 10)
        print[i - 1] = 48 + nb % 10;
    print[j] = '\0';
    my_putstr(print);
    free(print);
    return (0);
}