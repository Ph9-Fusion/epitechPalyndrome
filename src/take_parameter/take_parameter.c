/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** take all information and stock it
*/

#include "palindrome.h"

static int check_values(data_t nb_o, data_t *data)
{
    int testing = data->number;

    if (nb_o.type > 1 || nb_o.imin > 1 || nb_o.imax > 1 || nb_o.base > 1)
        return 84;
    if (data->imax > MAX_I || data->imin > MAX_I || data->imax < data->imin)
        return 84;
    if (data->base > MAX_BASE || data->base < MIN_BASE)
        return 84;
    if (data->type == -1)
        return 84;
    if (data->type == TYPE_P) {
        testing = base_converter(testing, 10, data->base);
        if (verify_palindrome(testing) == -1)
            return 84;
    }
    return 0;
}

static void update_option(int info, data_t *nb_option, data_t *data, int nb)
{
    if (info == TYPE_N || info == TYPE_P) {
        nb_option->type++;
        data->number = nb;
        data->type = info;
    }
    if (info == BASE) {
        nb_option->base++;
        data->base = nb;
    }
    if (info == IMIN) {
        nb_option->imin++;
        data->imin = nb;
    }
    if (info == IMAX) {
        nb_option->imax++;
        data->imax = nb;
    }
}

static int check_number(data_t *data, char *number, int info, data_t *nb_option)
{
    int nb;

    if (is_number(number, 0) == -1)
        return 84;
    nb = my_getnumber(number);
    update_option(info, nb_option, data, nb);
    return 0;
}

static int check_option(data_t *data, char **av, int i, data_t *nb_option)
{
    int info = -1;

    if (my_strcmp(av[i], "-n") == 0)
        info = TYPE_N;
    if (my_strcmp(av[i], "-p") == 0)
        info = TYPE_P;
    if (my_strcmp(av[i], "-b") == 0)
        info = BASE;
    if (my_strcmp(av[i], "-imin") == 0)
        info = IMIN;
    if (my_strcmp(av[i], "-imax") == 0)
        info = IMAX;
    if (info != -1)
        return (check_number(data, av[i + 1], info, nb_option));
    return 84;
}

int reading_option(data_t *data, char **av, int ac)
{
    data_t nb_o = EMPTY_DATA;

    if (ac % 2 == 0)
        return 84;
    for (int i = 1; i < ac; i += 2) {
        if (check_option(data, av, i, &nb_o) == 84)
            return 84;
    }
    return check_values(nb_o, data);
}