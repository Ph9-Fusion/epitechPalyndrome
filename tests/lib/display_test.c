/*
** EPITECH PROJECT, 2019
** lib
** File description:
** test unitaire
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_putchar, simple_test)
{
    cr_redirect_stdout();
    my_putchar('a');
    cr_assert_stdout_eq_str("a");
}

Test(my_putstr, simple_test)
{
    cr_redirect_stdout();
    my_putstr("bonjour");
    cr_assert_stdout_eq_str("bonjour");
}

Test(my_putstr_star, simple_test)
{
    char **str = malloc(sizeof(char *) * 4);

    str[0] = "t";
    str[1] = "bijur";
    str[2] = "la joie des amis et le pouvoir";
    str[3] = NULL;
    cr_redirect_stdout();
    cr_assert_eq(my_putstr_star(str), 0);
    cr_assert_stdout_eq_str("t\nbijur\nla joie des amis et le pouvoir\n");
    free(str);
}

Test(my_strlen, different_str)
{
    cr_assert_eq(my_strlen("hello"), 5);
    cr_assert_eq(my_strlen(""), 0);
    cr_assert_eq(my_strlen("Une phrase un petit peu \n42 longue"), 34);
}

Test(my_put_nbr, positive_test)
{
    cr_redirect_stdout();
    my_put_nbr(12);
    cr_assert_stdout_eq_str("12");
}
