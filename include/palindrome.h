/*
** EPITECH PROJECT, 2019
** generator
** File description:
** header file
*/

#ifndef PALINDROME
#define PALINDROME

/* INCLUDES */

#include "../lib/my/lib.h"

/* STRUCTURE */

typedef struct data {
    int number;
    int type;
    int base;
    int imin;
    int imax;
} data_t;

typedef enum parameter {
    TYPE_P,
    TYPE_N,
    BASE,
    IMIN,
    IMAX
} parameter_t;

/* STATIC VALUES*/

static const data_t BASIC_DATA = {0, -1, 10, 0, 100};
static const data_t EMPTY_DATA = {0, 0, 0, 0, 0};
static const int MAX_I = 100;
static const int MIN_I = 0;
static const int MAX_BASE = 10;
static const int MIN_BASE = 2;

/* FUNCTIONS */

/* Return:
1 if nbr is a palindrome
-1 if nbr is not a palindrome
*/
int verify_palindrome(int nbr);

/* Return:
The reverse of a positive number
*/
int reverse_nb(int nb);

/* Take :
nb = The number to convert
start_base = The base of the number (max 10)
final_base = base to convert the number (max 10)
Return :
The number in the final_base
*/
int base_converter(int nb, int start_base, int final_base);

/*Take:
Number one to add
number two to add
base = base of the TWO number
Return :
result of the addition*/
int base_addition(int number_one, int number_two, int base);

/*Take:
string : A string to see if it's a number or not
neg : if neg = 1, the number can be neg
Return:
0 if it is a positive number (or negative if neg = 1)
-1 if it's not a positive number (or negative if neg = 1)
*/
int is_number(char *string, int neg);

/*Take
data : A structure to stock information
av : command input
ac : number of argument in command input
Return:
0 if there are no problem
84 if a error was detected
*/
int reading_option(data_t *data, char **av, int ac);

/*Diplay help
*/
void help(void);

/**/
int type_n(data_t data);

/**/
int type_p(data_t data);

#endif /* PALINDROME */