/*
** EPITECH PROJECT, 2021
** Pool day 11
** File description:
** task 04
*/

#include "mylist.h"
#include <stddef.h>

int my_apply_on_nodes(linked_list_t *begin , int (*f)(int))
{
    linked_list_t *tmp;

    tmp = begin;
    while (tmp != NULL){
        (*f)(tmp->data);
        tmp = tmp->next;
    }
    return (0);
}
