/*
** EPITECH PROJECT, 2019
** unit_test lib
** File description:
** my_put_nbr
*/

#include <criterion/redirect.h>
#include <criterion/criterion.h>
#include "lib.h"

Test(my_put_nbr, negative_test)
{
    int nb = -12;

    cr_redirect_stdout();
    my_put_nbr(nb);
    cr_assert_stdout_eq_str("-12");
}
