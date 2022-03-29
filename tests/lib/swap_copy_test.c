/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** test unitaire
*/

#include <criterion/criterion.h>
#include "lib.h"

Test(my_swap, basic_test)
{
    int a = 1;
    int b = 2;

    my_swap(&a, &b);
    cr_assert_eq(a, 2);
    cr_assert_eq(b, 1);
}

Test(my_strcpy, basic_test)
{
    char *dest = NULL;
    char *str = "test";

    dest = my_strcpy(dest, str, 0);
    cr_assert_str_eq(dest, str);
    free(dest);
}

Test(str_compare, basic_test)
{
    cr_assert_eq(str_compare("bjr\0", "bjr\0"), 1);
    cr_assert_eq(str_compare("bjr\0", "bj\0"), 0);
    cr_assert_eq(str_compare("bj\0", "bjr\0"), 0);
}
