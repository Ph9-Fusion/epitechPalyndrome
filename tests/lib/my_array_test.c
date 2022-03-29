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

Test(my_array, normal_test)
{
    char *text = malloc(sizeof(char) * 8);
    char **result = NULL;

    text = "bjr toi\0";
    result = my_array(text);
    cr_assert_str_eq(result[0], "bjr\0");
    cr_assert_str_eq(result[1], "toi\0");
}

Test(my_array, empty_str)
{
    char **result = NULL;

    result = my_array(NULL);
    cr_assert_null(result);
}

Test(my_array, jump_line)
{
    char *text = malloc(sizeof(char) * 8);
    char **result = NULL;

    text = "bjr\ntoi\0";
    result = my_array(text);
    cr_assert_str_eq(result[0], "bjr\0");
    cr_assert_str_eq(result[1], "toi\0");
}

Test(my_array, start_space)
{
    char *text = malloc(sizeof(char) * 10);
    char **result = NULL;

    text = " bjr toi\n\0";
    result = my_array(text);
    cr_assert_str_eq(result[0], "bjr\0");
    cr_assert_str_eq(result[1], "toi\0");
}

Test(my_array, end_is_jump_line)
{
    char *text = malloc(sizeof(char) * 9);
    char **result = NULL;

    text = "bjr toi \n\0";
    result = my_array(text);
    cr_assert_str_eq(result[0], "bjr\0");
    cr_assert_str_eq(result[1], "toi\0");
}