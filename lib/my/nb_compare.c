/*
** EPITECH PROJECT, 2019
** lib
** File description:
** compare number
*/

int my_low_number(int nb1, int nb2)
{
    if (nb1 >= nb2)
        nb1 = nb2;
    return (nb1);
}

int my_up_number(int nb1, int nb2)
{
    if (nb1 <= nb2)
        nb1 = nb2;
    return (nb1);
}