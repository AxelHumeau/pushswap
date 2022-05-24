/*
** EPITECH PROJECT, 2021
** Pool day 8
** File description:
** task01
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *str;
    int i = 0;

    str = malloc(sizeof(char) * (my_strlen(src) + 1));
    for (; src[i] != '\0'; i++){
        str[i] = src[i];
    }
    str[i] = '\0';
    return (str);
}
