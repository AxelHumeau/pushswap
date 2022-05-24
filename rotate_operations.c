/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-1-pushswap-axel.humeau
** File description:
** rotate_operation
*/

#include "my_pushswap.h"

void rotate_a(linked_list_t **l_a, bool is_first)
{
    linked_list_t *tmp;

    for (tmp = *l_a; tmp->next != NULL; tmp = tmp->next);
    tmp->next = *l_a;
    *l_a = (*l_a)->next;
    tmp->next->next = NULL;
    if (is_first)
        write(1, "ra", 2);
    else
        write(1, " ra", 3);
}
