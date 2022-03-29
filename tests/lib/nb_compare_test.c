/*
** EPITECH PROJECT, 2019
** unit_test lib
** File description:
** nb_compare
*/

#include <criterion/criterion.h>
#include "lib.h"

Test(my_up_number, basic_test)
{
    cr_assert_eq(my_up_number(12, 24), 24);
    cr_assert_eq(my_up_number(24, 12), 24);
    cr_assert_eq(my_up_number(24, 24), 24);
}

Test(my_low_number, basic_test)
{
    cr_assert_eq(my_low_number(12, 24), 12);
    cr_assert_eq(my_low_number(24, 12), 12);
    cr_assert_eq(my_low_number(24, 24), 24);
}
