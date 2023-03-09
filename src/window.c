/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myhunter-remy.canal
** File description:
** my_window
*/

#include "../includes/hunter.h"

void display_window_extension(GLOBAL_T *ALL)
{
    if (EVENT.type == sfEvtClosed)
        sfRenderWindow_close(WINDOW);
}

void display_window(GLOBAL_T *ALL)
{
    sfMusic_play(MUSIC.music_menu);
    sfMusic_stop(MUSIC.music_game);
    while (sfRenderWindow_isOpen(WINDOW)) {
    sfRenderWindow_setMouseCursorVisible(WINDOW, sfFalse);
    sfRenderWindow_setKeyRepeatEnabled(WINDOW, sfFalse);
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
        display_window_extension(ALL);
        }
        draw_sprites_menu(ALL);
        sfRenderWindow_display(WINDOW);
        sfRenderWindow_clear(WINDOW, sfBlack);
        if_click_start(ALL);
        if_click_exit(ALL);
    }
}

void display_window_02(GLOBAL_T *ALL)
{
    while (sfRenderWindow_isOpen(WINDOW)) {
    sfRenderWindow_setMouseCursorVisible(WINDOW, sfFalse);
    sfRenderWindow_setKeyRepeatEnabled(WINDOW, sfFalse);
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
        display_window_extension(ALL);
        if_click(ALL);
        }
        clocks(ALL);
        draw_sprites_game(ALL);
        if_click_cat(ALL);
        sfRenderWindow_display(WINDOW);
        sfRenderWindow_clear(WINDOW, sfBlack);
        if_click_menu(ALL);
    }
}

void display_window_03(GLOBAL_T *ALL)
{
    while (sfRenderWindow_isOpen(WINDOW)) {
    sfRenderWindow_setMouseCursorVisible(WINDOW, sfFalse);
    sfRenderWindow_setKeyRepeatEnabled(WINDOW, sfFalse);
        while (sfRenderWindow_pollEvent(WINDOW, &EVENT)) {
        display_window_extension(ALL);
        if_click(ALL);
        }
        clocks(ALL);
        draw_sprites_game_if_hunt(ALL);
        if_click_cat(ALL);
        sfRenderWindow_display(WINDOW);
        sfRenderWindow_clear(WINDOW, sfBlack);
        if_click_menu(ALL);
    }
}
