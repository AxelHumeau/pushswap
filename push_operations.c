/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-1-pushswap-axel.humeau
** File description:
** push_operations
*/

#include "my_pushswap.h"

void push_b(linked_list_t **l_a, linked_list_t **l_b, bool is_first)
{
    linked_list_t *tmp = *l_a;

    *l_a = (*l_a)->next;
    tmp->next = *l_b;
    *l_b = tmp;
    if (is_first)
        write(1, "pb", 2);
    else
        write(1, " pb", 3);
}

void push_a(linked_list_t **l_a, linked_list_t **l_b)
{
    linked_list_t *tmp = *l_b;

    *l_b = (*l_b)->next;
    tmp->next = *l_a;
    *l_a = tmp;
    write(1, " pa", 3);
}
