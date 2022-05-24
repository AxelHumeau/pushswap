/*
** EPITECH PROJECT, 2021
** Pool day 11
** File description:
** task 06
*/

#include "mylist.h"
#include <stddef.h>

linked_list_t *my_find_nodes(linked_list_t *begin, void const *data_ref,
int (*cmp)())
{
    linked_list_t *tmp;

    tmp = begin;
    while (tmp != NULL){
        if ((*cmp)(tmp->data, data_ref) == 0)
            return (tmp);
        tmp = tmp->next;
    }
    return (0);
}
