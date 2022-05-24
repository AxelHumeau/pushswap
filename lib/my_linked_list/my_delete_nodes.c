/*
** EPITECH PROJECT, 2021
** Pool day 11
** File description:
** task 07
*/

#include "mylist.h"
#include <stddef.h>

int my_delete_nodes(linked_list_t *begin, void const *data_ref, int (*cmp)())
{
    linked_list_t *list_tmp;
    linked_list_t *tmp;

    tmp = begin->next;
    if (my_list_size(begin) > 1 && (*cmp)(begin->data, data_ref) == 0) {
        begin->data = tmp->data;
        begin->next = tmp->next;
    }
    list_tmp = begin;
    while (list_tmp != NULL) {
        tmp = list_tmp;
        if (list_tmp->next != NULL)
            tmp = list_tmp->next;
        if ((*cmp)(tmp->data, data_ref) == 0)
            list_tmp->next = tmp->next;
        list_tmp = list_tmp->next;
    }
    return (0);
}
