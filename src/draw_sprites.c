/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myhunter-remy.canal
** File description:
** draw_sprites
*/

#include "../includes/hunter.h"

void draw_sprites_menu (GLOBAL_T *ALL)
{
    IMG[9].position_cat_hand.x = (sfMouse_getPosition(WINDOW).x) - 120;
    IMG[9].position_cat_hand.y = (sfMouse_getPosition(WINDOW).y) - 90;
    sfSprite_setPosition(IMG[9].sprite, IMG[9].position_cat_hand);
    sfRenderWindow_drawSprite(WINDOW, IMG[0].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[3].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[1].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[2].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[9].sprite, NULL);
}

void draw_sprites_game (GLOBAL_T *ALL)
{
    IMG[8].position_target.x = (sfMouse_getPosition(WINDOW).x) - 75;
    IMG[8].position_target.y = (sfMouse_getPosition(WINDOW).y) - 80;
    sfSprite_setPosition(IMG[8].sprite, IMG[8].position_target);
    sfSprite_setPosition(IMG[7].sprite, IMG[7].position);
    sfRenderWindow_drawSprite(WINDOW, IMG[4].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[7].sprite, NULL);
    sfSprite_setTextureRect(IMG[7].sprite, RECT.rect_cat);
    sfRenderWindow_drawSprite(WINDOW, IMG[5].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[8].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[6].sprite, NULL);
}

void draw_sprites_game_if_hunt (GLOBAL_T *ALL)
{
    IMG[8].position_target.x = (sfMouse_getPosition(WINDOW).x) - 75;
    IMG[8].position_target.y = (sfMouse_getPosition(WINDOW).y) - 80;
    IMG[10].position_blood = IMG[7].position;
    sfSprite_setPosition(IMG[8].sprite, IMG[8].position_target);
    sfSprite_setPosition(IMG[7].sprite, IMG[7].position);
    sfSprite_setPosition(IMG[10].sprite, IMG[10].position_blood);
    sfRenderWindow_drawSprite(WINDOW, IMG[4].sprite, NULL);
    sfSprite_setTextureRect(IMG[7].sprite, RECT.rect_cat);
    sfRenderWindow_drawSprite(WINDOW, IMG[10].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[7].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[5].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[8].sprite, NULL);
    sfRenderWindow_drawSprite(WINDOW, IMG[6].sprite, NULL);
}
