/*
** EPITECH PROJECT, 2019
** unit_test lib
** File description:
** array_free
*/

#include <criterion/criterion.h>
#include "lib.h"

Test(array_free, negative_test)
{
    char **test = malloc(sizeof(char *) * 2);
    test[0] = malloc(sizeof(char) * 3);
    test[0][0] = 'a';
    test[0][1] = 'a';
    test[0][2] = '\0';
    test[1] = NULL;

    cr_assert_eq(array_free(test), 0);
}
