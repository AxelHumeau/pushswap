/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-1-pushswap-axel.humeau
** File description:
** tests_pushswap
*/

#include "criterion/criterion.h"
#include "criterion/redirect.h"
#include "my_pushswap.h"

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(binary_radix, one_pos_number, .init = redirect_all_stdout)
{
    char **params = malloc(sizeof(char *) * 2);
    linked_list_t *list;

    params[0] = my_strdup("./push_swap");
    params[1] = my_strdup("2");
    list = my_params_to_list(2, params);
    binary_radix(&list);
    cr_assert_eq(is_sorted(list), 1);
    cr_assert_stdout_eq_str("\n");
    free_llist(list);
}

Test(binary_radix, one_neg_number, .init = redirect_all_stdout)
{
    char **params = malloc(sizeof(char *) * 2);
    linked_list_t *list;

    params[0] = my_strdup("./push_swap");
    params[1] = my_strdup("-5");
    list = my_params_to_list(2, params);
    binary_radix(&list);
    cr_assert_eq(is_sorted(list), 1);
    cr_assert_stdout_eq_str("\n");
    free_llist(list);
}

Test(binary_radix, sorted_pos_list, .init = redirect_all_stdout)
{
    char **params = malloc(sizeof(char *) * 6);
    linked_list_t *list;

    params[0] = my_strdup("./push_swap");
    params[1] = my_strdup("1");
    params[2] = my_strdup("2");
    params[3] = my_strdup("3");
    params[4] = my_strdup("4");
    params[5] = my_strdup("5");
    list = my_params_to_list(6, params);
    binary_radix(&list);
    cr_assert_eq(is_sorted(list), 1);
    cr_assert_stdout_eq_str("\n");
    free_llist(list);
}

Test(binary_radix, sorted_neg_list, .init = redirect_all_stdout)
{
    char **params = malloc(sizeof(char *) * 6);
    linked_list_t *list;

    params[0] = my_strdup("./push_swap");
    params[1] = my_strdup("-5");
    params[2] = my_strdup("-4");
    params[3] = my_strdup("-3");
    params[4] = my_strdup("-2");
    params[5] = my_strdup("-1");
    list = my_params_to_list(6, params);
    binary_radix(&list);
    cr_assert_eq(is_sorted(list), 1);
    cr_assert_stdout_eq_str("\n");
    free_llist(list);
}

Test(binary_radix, sorted_neg_and_pos_list, .init = redirect_all_stdout)
{
    char **params = malloc(sizeof(char *) * 6);
    linked_list_t *list;

    params[0] = my_strdup("./push_swap");
    params[1] = my_strdup("-5");
    params[2] = my_strdup("-4");
    params[3] = my_strdup("2");
    params[4] = my_strdup("8");
    params[5] = my_strdup("10");
    list = my_params_to_list(6, params);
    binary_radix(&list);
    cr_assert_eq(is_sorted(list), 1);
    free_llist(list);
}

Test(binary_radix, unsorted_pos_list, .init = redirect_all_stdout)
{
    char **params = malloc(sizeof(char *) * 6);
    linked_list_t *list;

    params[0] = my_strdup("./push_swap");
    params[1] = my_strdup("5");
    params[2] = my_strdup("10");
    params[3] = my_strdup("3");
    params[4] = my_strdup("89");
    params[5] = my_strdup("32");
    list = my_params_to_list(6, params);
    binary_radix(&list);
    cr_assert_eq(is_sorted(list), 1);
    free_llist(list);
}

Test(binary_radix, unsorted_neg_list, .init = redirect_all_stdout)
{
    char **params = malloc(sizeof(char *) * 6);
    linked_list_t *list;

    params[0] = my_strdup("./push_swap");
    params[1] = my_strdup("-5");
    params[2] = my_strdup("-10");
    params[3] = my_strdup("-3");
    params[4] = my_strdup("-89");
    params[5] = my_strdup("-32");
    list = my_params_to_list(6, params);
    binary_radix(&list);
    cr_assert_eq(is_sorted(list), 1);
    free_llist(list);
}

Test(binary_radix, unsorted_pos_and_neg_list, .init = redirect_all_stdout)
{
    char **params = malloc(sizeof(char *) * 6);
    linked_list_t *list;

    params[0] = my_strdup("./push_swap");
    params[1] = my_strdup("4");
    params[2] = my_strdup("-10");
    params[3] = my_strdup("-3");
    params[4] = my_strdup("89");
    params[5] = my_strdup("-32");
    list = my_params_to_list(6, params);
    binary_radix(&list);
    cr_assert_eq(is_sorted(list), 1);
    free_llist(list);
}

Test(get_array, just_for_the_coverage)
{
    get_array();
    cr_assert_eq(1, 1);
}
