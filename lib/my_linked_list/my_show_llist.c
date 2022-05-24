/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-1-pushswap-axel.humeau
** File description:
** my_show_llist
*/

#include "mylist.h"
#include "my.h"
#include <stdlib.h>

void my_show_llist(linked_list_t *list)
{
    linked_list_t *tmp;

    tmp = list;
    my_printf("{");
    while (tmp != NULL){
        if (tmp->next == NULL)
            my_printf("%d", tmp->data);
        else
            my_printf("%d, ", tmp->data);
        tmp = tmp->next;
    }
    my_printf("}\n");
}
