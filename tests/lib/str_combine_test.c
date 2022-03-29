/*
** EPITECH PROJECT, 2019
** unit test lib
** File description:
** index test
*/

#include <criterion/criterion.h>
#include <stdlib.h>
#include "lib.h"

Test(str_combine, simple_test)
{
    char *A = malloc(sizeof(char) * 3);
    char *B = malloc(sizeof(char) * 3);
    char *result = NULL;

    A = "al\0";
    B = "pe\0";
    result = str_combine(A, B);
    cr_assert_str_eq(result, "alpe\0");
    free(result);
}