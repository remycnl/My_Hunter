/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myhunter-remy.canal
** File description:
** my_game
*/

#include "../includes/hunter.h"

void my_window_02(GLOBAL_T *ALL)
{
    sfVector2i mouse = sfMouse_getPosition(WINDOW);

    RECT.rect_cat.top = 30;
    RECT.rect_cat.left = 0;
    RECT.rect_cat.width = 50;
    RECT.rect_cat.height = 35;

    IMG[8].position_target.x = (sfMouse_getPosition(WINDOW).x) - 75;
    IMG[8].position_target.y = (sfMouse_getPosition(WINDOW).y) - 80;

    sfMusic_stop(MUSIC.music_menu);
    sfMusic_play(MUSIC.music_game);

    display_window_02(ALL);
}

void move_rect(GLOBAL_T *ALL)
{
    RECT.offset = 60;
    RECT.max_value = 240;

    RECT.rect_cat.left += RECT.offset;
    if (RECT.rect_cat.left == RECT.max_value)
        RECT.rect_cat.left = 0;
}
