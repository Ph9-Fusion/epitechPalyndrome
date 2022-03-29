/*
** EPITECH PROJECT, 2019
** palindrome
** File description:
** display help
*/

#include "palindrome.h"

void help(void)
{
    my_putstr("USAGE\n    ./palindrome");
    my_putstr(" -n number -p palindrome [-b base] [-imin i] [-imax i]\n\n");
    my_putstr("DESCRIPTION\n    -n n integer to be transformed (>=0)\n");
    my_putstr("    -p pal palindromic number to be obtained (incompatible ");
    my_putstr("with the -n\n        option) (>=0)\n        if");
    my_putstr(" defined, all fitting values of n will be output\n");
    my_putstr("    -b base base in which the procedure will be executed ");
    my_putstr("(1<b<=10) [def: 10]\n    -imin i minimum number of ");
    my_putstr("iterations, included (>=0) [def: 0]\n    -imax i maximum");
    my_putstr(" number of iterations, included (>=0) [def: 100]\n");
}