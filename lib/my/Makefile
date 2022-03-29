##
## EPITECH PROJECT, 2019
## Jour 10
## File description:
## Makefile
##

SRC	=	number_gestion.c	\
		nb_compare.c		\
		swap_copy.c			\
		display.c			\
		my_array.c			\
		str_combine.c		\
		my_index.c			\
		array_free.c		\
		my_strcmp.c			\

OBJ	=	$(SRC:.c=.o)


%.o:	%.c
	@ echo -e "\033[1;32m [GCC]: Compiling" $< "\033[0m"
	@ gcc -o $@ -c $<

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	@ echo -e " Create Lib"
	@ ar -rsc $(NAME) $(OBJ)
	@ echo -e " Move Lib into the precedent folder"
	@ mv $(NAME) ../
	@ echo -e "\033[1;36m LIB SUCCES \033[0m"

clean:
	@ rm -f $(OBJ)

fclean: clean
	@ rm -f ../$(NAME)

re: fclean all