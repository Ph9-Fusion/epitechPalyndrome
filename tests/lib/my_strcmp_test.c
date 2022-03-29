/*
** EPITECH PROJECT, 2019
** unit_test lib
** File description:
** my_strcmp
*/

#include <criterion/criterion.h>
#include "lib.h"

Test(my_strcmp, basic_test)
{
    cr_assert_eq(my_strcmp("test", "test"), 0);
    cr_assert_eq(my_strcmp("tes", "test"), -1);
    cr_assert_eq(my_strcmp("test", "te"), -1);
    cr_assert_eq(my_strcmp("alpha", "beta"), -1);
}
