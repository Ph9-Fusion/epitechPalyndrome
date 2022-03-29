/*
** EPITECH PROJECT, 2019
** unit test lib
** File description:
** nbr gestion
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_compute_square_root, simple_test)
{
    cr_assert_eq(my_compute_square_root(10), 0);
    cr_assert_eq(my_compute_square_root(9), 3);
    cr_assert_eq(my_compute_square_root(-1), 0);
}

Test(my_compute_power_rec, simple_test)
{
    cr_assert_eq(my_compute_power_rec(2, 2), 4);
    cr_assert_eq(my_compute_power_rec(2, 1), 2);
    cr_assert_eq(my_compute_power_rec(2, 0), 1);
    cr_assert_eq(my_compute_power_rec(2, -1), 0);
    cr_assert_eq(my_compute_power_rec(-2, 2), 4);
    cr_assert_eq(my_compute_power_rec(-2, 1), -2);
    cr_assert_eq(my_compute_power_rec(-2, 0), 1);
    cr_assert_eq(my_compute_power_rec(-2, -1), 0);
}

Test(my_getnumber, simple_test)
{
    cr_assert_eq(my_getnumber("12"), 12);
    cr_assert_eq(my_getnumber("12Aeiou"), 12);
    cr_assert_eq(my_getnumber("-20"), -20);
    cr_assert_eq(my_getnumber("-20A"), -20);
    cr_assert_eq(my_getnumber("0"), 0);
}

Test(my_find_prime_sup, simple_test)
{
    cr_assert_eq(my_find_prime_sup(1), 2);
    cr_assert_eq(my_find_prime_sup(4), 5);
    cr_assert_eq(my_find_prime_sup(-2), 2);
    cr_assert_eq(my_find_prime_sup(8), 11);
    cr_assert_eq(my_find_prime_sup(72), 73);
}

Test(my_is_prime, simple_test)
{
    cr_assert_eq(my_is_prime(-1), 0);
    cr_assert_eq(my_is_prime(0), 0);
    cr_assert_eq(my_is_prime(1), 0);
    cr_assert_eq(my_is_prime(2), 1);
    cr_assert_eq(my_is_prime(4), 0);
    cr_assert_eq(my_is_prime(5), 1);
}
/*    int nb = -12;

    cr_redirect_stdout();
    my_put_nbr(nb);
    cr_assert_stdout_eq_str("-12");*/
