/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-1-pushswap-axel.humeau
** File description:
** free_llist
*/

#include "mylist.h"
#include <stdlib.h>

void free_llist(linked_list_t *l_a)
{
    linked_list_t *to_free;

    for (linked_list_t *tmp = l_a; tmp;) {
        to_free = tmp;
        tmp = tmp->next;
        free(to_free);
    }
}
