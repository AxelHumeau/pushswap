/*
** EPITECH PROJECT, 2021
** Pool day 6
** File description:
** task 12
*/

int is_btwn(char c1, char c2, char c3);

int my_str_isalpha(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++){
        if ((!(is_btwn(str[i], 'A', 'Z'))) && (!(is_btwn(str[i], 'a', 'z'))))
            return (0);
    }
    return (1);
}
