/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-1-pushswap-axel.humeau
** File description:
** radix
*/

#include "my_pushswap.h"

int find_max_size(linked_list_t *list)
{
    int max = BIN_LEN(CONVERT_TO_UINT(list->data));

    for(; list != NULL; list = list->next) {
        if (BIN_LEN(CONVERT_TO_UINT(list->data)) > max)
            max = BIN_LEN(CONVERT_TO_UINT(list->data));
    }
    return max;
}

void progress_in_list(linked_list_t **l_a, linked_list_t **l_b,
int *d_and_nb, bool is_first)
{
    for (int j = 0; j < d_and_nb[2]; j++) {
        if (!(((unsigned int)(*l_a)->data - INT_MIN) & d_and_nb[0])) {
            push_b(l_a, l_b, j == 0 && is_first);
            d_and_nb[1] += 1;
        } else
            rotate_a(l_a, j == 0 && is_first);
        }
    for (int j = 0; j < d_and_nb[1]; j++)
        push_a(l_a, l_b);
}

int is_sorted(linked_list_t *l_a)
{
    for (linked_list_t *tmp = l_a; tmp->next != NULL; tmp = tmp->next) {
        if (tmp->data > (tmp->next)->data)
            return (0);
    }
    return (1);
}

void binary_radix(linked_list_t **l_a)
{
    linked_list_t *l_b = NULL;
    int max_size = find_max_size(*l_a);
    int *d_and_nb = malloc(sizeof(int) * 3);

    d_and_nb[0] = 1;
    d_and_nb[1] = 0;
    d_and_nb[2] = my_list_size(*l_a);
    if (is_sorted(*l_a)) {
        my_putchar('\n');
        free(d_and_nb);
        return;
    }
    for (int i = 0; i < max_size; i++, d_and_nb[0] <<= 1) {
        progress_in_list(l_a, &l_b, d_and_nb, i == 0);
        d_and_nb[1] = 0;
    }
    my_putchar('\n');
    free(d_and_nb);
}
