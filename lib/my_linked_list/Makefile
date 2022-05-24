##
## EPITECH PROJECT, 2021
## B-CPE-110-PAR-1-1-pushswap-axel.humeau
## File description:
## Makefile
##

SRC = *.c

OBJ = $(SRC:.c=.o)

NAME_LIB = libmy_linked_list.a

all:	copy_lib clean

copy_lib:
	gcc -c $(SRC) -I../../include -L.. -lmy
	ar rc $(NAME_LIB) $(OBJ)
	cp $(NAME_LIB) ..

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME_LIB)
	rm -f ../$(NAME_LIB)
