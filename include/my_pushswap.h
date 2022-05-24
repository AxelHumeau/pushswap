/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-1-pushswap-axel.humeau
** File description:
** my_pushswap
*/

#pragma once

#include "my.h"
#include "mylist.h"
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdbool.h>

#define BIN_LEN(nb) my_nbr_len_base(nb, 2)
#define CONVERT_TO_UINT(x) (unsigned int)x - INT_MIN

void get_array(void);
void bubble_sort(linked_list_t **l_a);
void swap_a(linked_list_t **l_a);
void swap_b(linked_list_t **l_a);
void push_a(linked_list_t **l_a, linked_list_t **l_b);
void push_b(linked_list_t **l_a, linked_list_t **l_b, bool is_first);
void rotate_a(linked_list_t **l_a, bool is_first);
void rotate_b(linked_list_t **l_b);
void binary_radix(linked_list_t **l_a);
int is_sorted(linked_list_t *l_a);
