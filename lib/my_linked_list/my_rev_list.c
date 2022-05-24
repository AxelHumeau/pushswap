/*
** EPITECH PROJECT, 2021
** Pool day 11
** File description:
** reverse linked list
*/

#include "mylist.h"
#include <stddef.h>

void set_tmp_end(linked_list_t *tmp, int i, int size, linked_list_t **begin)
{
    linked_list_t *tmp_end = tmp;
    linked_list_t *tmp_b_end = tmp;

    for (int j = 0; j < size - i - 2; j++){
        tmp_b_end = tmp_b_end->next;
    }
    for (int j = 0; j < size - i - 1; j++){
        tmp_end = tmp_end->next;
        if (j == size - 2)
            *begin = tmp_end;
    }
    tmp_end->next = tmp_b_end;
}

void my_rev_list(linked_list_t **begin)
{
    int size = my_list_size(*begin);
    linked_list_t *tmp;

    tmp = *begin;
    for (int i = 0; i < size - 1; i++){
        set_tmp_end(tmp, i, size, begin);
    }
    tmp->next = NULL;
}
