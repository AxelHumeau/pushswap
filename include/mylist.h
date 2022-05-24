/*
** EPITECH PROJECT, 2021
** Pool day 11
** File description:
** define the linked list structure
*/

#ifndef MY_LIST_
    #define MY_LIST_

typedef struct linked_list {
    int data;
    struct linked_list *next;
} linked_list_t;

int my_list_size(linked_list_t *begin);
int my_apply_on_matching_nodes(linked_list_t *begin , int (*f)(),
void const *data_ref, int (*cmp)());
int my_apply_on_nodes(linked_list_t *begin , int (*f)(int));
int my_delete_nodes(linked_list_t *begin, void const *data_ref, int (*cmp)());
linked_list_t *my_find_nodes(linked_list_t *begin, void const *data_ref,
int (*cmp)());
linked_list_t *my_params_to_list(int ac, char **av);
void my_rev_list(linked_list_t **begin);
void my_show_llist(linked_list_t *list);
void free_llist(linked_list_t *l_a);
#endif
