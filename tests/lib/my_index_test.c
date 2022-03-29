/*
** EPITECH PROJECT, 2019
** unit test lib
** File description:
** index test
*/

#include <criterion/criterion.h>
#include "lib.h"

Test(my_index, simple_test)
{
    cr_assert_eq(my_index("HOME of familly\0", "HOME\0"), 1);
    cr_assert_eq(my_index("HOME\0", "HOME\0"), 1);
    cr_assert_eq(my_index("HOME\0", "HOMME\0"), -1);
    cr_assert_eq(my_index("HOM\0", "HOME\0"), -1);
    cr_assert_eq(my_index("HOME OF THE WOOPER\0", "HOME\0"), 1);
    cr_assert_eq(my_index("HOME OF THE WOOPER\0", "HOMME\0"), -1);
}
