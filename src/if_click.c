/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myhunter-remy.canal
** File description:
** if_click
*/

#include "../includes/hunter.h"

void if_click_start(GLOBAL_T *ALL)
{
    sfVector2i mouse = sfMouse_getPosition((sfWindow*)WINDOW);
    if (mouse.x > 1608 && mouse.x < 1814 && mouse.y > 696 && mouse.y < 902) {
        if (EVENT.type == sfEvtMouseButtonPressed)
            my_window_02(ALL);
    }
}

void if_click_exit(GLOBAL_T *ALL)
{
    sfVector2i mouse = sfMouse_getPosition((sfWindow*)WINDOW);
    if (mouse.x > 35 && mouse.x < 86 && mouse.y > 20 && mouse.y < 82) {
        if (EVENT.type == sfEvtMouseButtonPressed)
            sfRenderWindow_close(WINDOW);
    }
}

void if_click_menu(GLOBAL_T *ALL)
{
    sfVector2i mouse = sfMouse_getPosition((sfWindow*)WINDOW);
    if (mouse.x > 1827 && mouse.x < 1890 && mouse.y > 28 && mouse.y < 97) {
        if (EVENT.type == sfEvtMouseButtonPressed)
            display_window(ALL);
    }
}

void if_click_cat(GLOBAL_T *ALL)
{
    sfVector2i mouse = sfMouse_getPosition((sfWindow*)WINDOW);
    if (mouse.x > (IMG[7].position.x + 45) &&
    mouse.x < (IMG[7].position.x + 250) &&
    mouse.y > IMG[7].position.y &&
    mouse.y < (IMG[7].position.y + 175)) {
        if (EVENT.type == sfEvtMouseButtonPressed)
            display_window_03(ALL);
    }
}

void if_click(GLOBAL_T *ALL)
{
    if (EVENT.type == sfEvtMouseButtonPressed)
        sfMusic_play(MUSIC.explosion);
}
