##
## EPITECH PROJECT, 2021
## B-CPE-110-PAR-1-1-pushswap-axel.humeau
## File description:
## Makefile
##

SRC =	get_array.c	\
		radix.c	\
		push_operations.c	\
		rotate_operations.c

MAIN =	main.c

TESTS =	tests/tests_pushswap.c

NAME =	push_swap

all:    $(NAME)	tests_run

$(NAME):
	make -C ./lib/my/
	make -C ./lib/my_linked_list/
	gcc -Wall -Wextra -o $(NAME) $(SRC) $(MAIN) -g	\
	-Iinclude -Llib -lmy -lmy_linked_list

tests_run:
	gcc -Wall -Wextra -o unit_tests $(SRC) $(TESTS) -g	\
	-Iinclude --coverage -lcriterion -Llib -lmy -lmy_linked_list
	./unit_tests

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	make fclean -C ./lib/my/
	make fclean -C ./lib/my_linked_list/

re: fclean all
