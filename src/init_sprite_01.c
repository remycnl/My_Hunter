/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myhunter-remy.canal
** File description:
** init_01
*/

#include "../includes/hunter.h"

void init_background_menu(GLOBAL_T *ALL)
{
    IMG[0].texture =
    sfTexture_createFromFile("./contents/background_menu.jpeg", NULL);
    IMG[0].sprite = sfSprite_create();
    IMG[0].scale.x = 1;
    IMG[0].scale.y = 1;
    IMG[0].position.x = 0;
    IMG[0].position.y = 0;

    sfSprite_setTexture(IMG[0].sprite, IMG[0].texture, sfFalse);
    sfSprite_setScale(IMG[0].sprite, IMG[0].scale);
    sfSprite_setPosition(IMG[0].sprite, IMG[0].position);
}

void init_title(GLOBAL_T *ALL)
{
    IMG[1].texture = sfTexture_createFromFile("./contents/title.png", NULL);
    IMG[1].sprite = sfSprite_create();
    IMG[1].scale.x = 1.7;
    IMG[1].scale.y = 1.7;
    IMG[1].position.x = 10;
    IMG[1].position.y = 0;

    sfSprite_setTexture(IMG[1].sprite, IMG[1].texture, sfFalse);
    sfSprite_setScale(IMG[1].sprite, IMG[1].scale);
    sfSprite_setPosition(IMG[1].sprite, IMG[1].position);
}

void init_play_button(GLOBAL_T *ALL)
{
    IMG[2].texture =
    sfTexture_createFromFile("./contents/play_button.png", NULL);
    IMG[2].sprite = sfSprite_create();
    IMG[2].scale.x = 0.6;
    IMG[2].scale.y = 0.6;
    IMG[2].position.x = 1450;
    IMG[2].position.y = 600;

    sfSprite_setTexture(IMG[2].sprite, IMG[2].texture, sfFalse);
    sfSprite_setScale(IMG[2].sprite, IMG[2].scale);
    sfSprite_setPosition(IMG[2].sprite, IMG[2].position);
}

void init_exit_button(GLOBAL_T *ALL)
{
    IMG[3].texture =
    sfTexture_createFromFile("./contents/exit_button.png", NULL);
    IMG[3].sprite = sfSprite_create();
    IMG[3].scale.x = 0.12;
    IMG[3].scale.y = 0.12;
    IMG[3].position.x = 0;
    IMG[3].position.y = 20;

    sfSprite_setTexture(IMG[3].sprite, IMG[3].texture, sfFalse);
    sfSprite_setScale(IMG[3].sprite, IMG[3].scale);
    sfSprite_setPosition(IMG[3].sprite, IMG[3].position);
}

void init_background_game(GLOBAL_T *ALL)
{
    IMG[4].texture =
    sfTexture_createFromFile("./contents/background_game.jpeg", NULL);
    IMG[4].sprite = sfSprite_create();
    IMG[4].scale.x = 1;
    IMG[4].scale.y = 1;
    IMG[4].position.x = 0;
    IMG[4].position.y = 0;

    sfSprite_setTexture(IMG[4].sprite, IMG[4].texture, sfFalse);
    sfSprite_setScale(IMG[4].sprite, IMG[4].scale);
    sfSprite_setPosition(IMG[4].sprite, IMG[4].position);
}
