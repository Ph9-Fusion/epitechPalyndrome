##
## EPITECH PROJECT, 2019
## dante_generator
## File description:
## makefile
##

MAIN	=	src/main.c	\

SRC     =	src/help.c	\
			src/basic_function/verify_palindrome.c	\
			src/basic_function/reverse_nb.c			\
			src/basic_function/base_converter.c		\
			src/basic_function/is_number.c			\
			src/basic_function/base_addition.c		\
			src/take_parameter/take_parameter.c	\
			src/type_n/type_n.c	\
			src/type_p/type_p.c	\

LIB	=	lib/my/number_gestion.c	\
		lib/my/nb_compare.c		\
		lib/my/swap_copy.c		\
		lib/my/display.c		\
		lib/my/my_array.c		\
		lib/my/str_combine.c	\
		lib/my/my_index.c		\
		lib/my/array_free.c		\
		lib/my/my_strcmp.c		\

TEST	=	tests/lib/display_test.c		\
			tests/lib/display_test_bis.c	\
			tests/lib/swap_copy_test.c		\
			tests/lib/number_gestion_test.c	\
			tests/lib/my_index_test.c		\
			tests/lib/array_free_test.c		\
			tests/lib/str_combine_test.c	\
			tests/lib/my_array_test.c		\
			tests/lib/my_array_test_2.c		\
			tests/lib/my_strcmp_test.c		\
			tests/lib/nb_compare_test.c		\

NAME    =	palindrome

OBJ	=	$(SRC:.c=.o)

LIBFLAGS = -L lib/ -lmy
FLAGS	=	-I ./include/ -I ./lib/my/ -g

all: $(NAME)

$(NAME):	$(OBJ)
	@ make -C ./lib/my
	@ gcc -o $(NAME) $(OBJ) $(MAIN) $(FLAGS) $(LIBFLAGS)

%.o:	%.c
	@ echo -e "\033[1;32m [GCC]: Compiling" $< "\033[0m"
	@ gcc -o $@ -c $< -I ./include/ $(FLAGS) $(LIBFLAGS)

clean:
	@ make clean -C ./lib/my
	@ -rm -f $(OBJ)

fclean:	clean
	@ make fclean -C ./lib/my
	@ -rm $(NAME)

re: 	fclean all

tests_clean: clean
	-rm *.gcda
	-rm *.gcno
	-rm unit_tests

tests_run:
	@ echo -e "\033[1;32m tests_run" $< "\033[0m"

.PHONY: all re clean fclean tests_run tests_clean
