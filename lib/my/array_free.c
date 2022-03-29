/*
** EPITECH PROJECT, 2019
** lib
** File description:
** freean array
*/

#include <unistd.h>
#include <stdlib.h>

int array_free(char **array)
{
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
}