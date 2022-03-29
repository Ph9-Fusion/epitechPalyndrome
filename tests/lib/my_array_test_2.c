/*
** EPITECH PROJECT, 2019
** unit_test lib
** File description:
** array_free
*/

#include <criterion/criterion.h>
#include <stdlib.h>
#include <unistd.h>
#include "lib.h"

Test(my_array, multiple_space)
{
    char *text = malloc(sizeof(char) * 10);
    char **result = NULL;

    text = " bjr  toi\0";
    result = my_array(text);
    cr_assert_str_eq(result[0], "bjr\0");
    cr_assert_str_eq(result[1], "toi\0");
}