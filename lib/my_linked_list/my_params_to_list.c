/*
** EPITECH PROJECT, 2021
** Pool day 11
** File description:
** task01
*/

#include "mylist.h"
#include "my.h"
#include <stdlib.h>

int my_put_in_llist(linked_list_t **list, int nbr)
{
    linked_list_t *element;

    element = malloc(sizeof(linked_list_t));
    element->data = nbr;
    element->next = *list;
    *list = element;
    return (0);
}

linked_list_t *my_params_to_list(int ac, char **av)
{
    linked_list_t *list = NULL;

    for (int i = 1; i < ac; i++){
        my_put_in_llist(&list, my_getnbr(av[i]));
    }
    my_rev_list(&list);
    return (list);
}
