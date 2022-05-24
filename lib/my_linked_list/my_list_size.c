/*
** EPITECH PROJECT, 2021
** Pool day 11
** File description:
** len llist
*/

#include "mylist.h"
#include <stddef.h>

int my_list_size(linked_list_t *begin)
{
    linked_list_t *tmp;
    int size = 0;

    tmp = begin;
    while (tmp != NULL){
        tmp = tmp->next;
        size++;
    }
    return (size);
}
