/*
** EPITECH PROJECT, 2020
** My_RPG
** File description:
** Build a RPG
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    for (; s1[i] && s2[i]; i++)
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    if (!s1[i] && !s2[i])
        return 0;
    return -1;
}