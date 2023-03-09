/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myhunter-remy.canal
** File description:
** my_hunter
*/

#include "../includes/hunter.h"

void play (GLOBAL_T *ALL)
{
    WINDOW = sfRenderWindow_create(MODE, "MY HUNTER", sfResize | sfClose, NULL);

    display_window(ALL);
}

int main (void)
{
    GLOBAL_T ALL;
    init(&ALL);
    play(&ALL);
    destroy(&ALL);
    return EXIT_SUCCESS;
}
