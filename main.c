/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-1-pushswap-axel.humeau
** File description:
** main
*/

#include "my_pushswap.h"

int main(int argc, char **argv)
{
    linked_list_t *list;

    if (argc < 2)
        return (84);
    else {
        list = my_params_to_list(argc, argv);
        binary_radix(&list);
        free_llist(list);
        return (0);
    }
}
