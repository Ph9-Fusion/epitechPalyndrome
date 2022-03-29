/*
** EPITECH PROJECT, 2019
** lib
** File description:
** header
*/

#ifndef LIBMY_HEADER
#define LIBMY_HEADER

/* Includes */

/* Prototypes */
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_put_nbr(int nb);
int my_putstr_star(char **str);

int my_low_number(int nb1, int nb2);
int my_up_number(int nb1, int nb2);

int my_compute_square_root(int nb);
int my_compute_power_rec(int nb, int p);
int my_getnumber(char *str);
int my_find_prime_sup(int nb);
int my_is_prime(int nb);

char *my_strcpy(char *dest, char const *src, int i);
void my_swap(int *a, int *b);
int str_compare(char const *str, char const *rts);

char **my_array(char const *str);

char *str_combine(char *str_one, char *str_2);

int my_index(char const *str, char const *index);

int array_free(char **array);

int my_strcmp(char const *s1, char const *s2);

/* Modules */

#endif  /* Libmy_header */