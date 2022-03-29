/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** main
*/

#include "palindrome.h"

int main(int ac, char **av)
{
    data_t data = BASIC_DATA;

    if (av[1] && my_strcmp(av[1], "-h\0") == 0) {
        help();
        return 0;
    }
    if (reading_option(&data, av, ac) == 84) {
        my_putstr("invalid argument\n");
        return 84;
    }
    if (data.type == TYPE_N)
        type_n(data);
    if (data.type == TYPE_P)
        type_p(data);
    return 0;
}