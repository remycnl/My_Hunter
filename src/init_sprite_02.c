/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myhunter-remy.canal
** File description:
** init_sprite_02
*/

#include "../includes/hunter.h"

void init_menu_button(GLOBAL_T *ALL)
{
    IMG[5].texture =
    sfTexture_createFromFile("./contents/menu_button.png", NULL);
    IMG[5].sprite = sfSprite_create();
    IMG[5].scale.x = 0.4;
    IMG[5].scale.y = 0.4;
    IMG[5].position.x = 1800;
    IMG[5].position.y = 5;

    sfSprite_setTexture(IMG[5].sprite, IMG[5].texture, sfFalse);
    sfSprite_setScale(IMG[5].sprite, IMG[5].scale);
    sfSprite_setPosition(IMG[5].sprite, IMG[5].position);
}

void init_sniper(GLOBAL_T *ALL)
{
    IMG[6].texture = sfTexture_createFromFile("./contents/sniper.png", NULL);
    IMG[6].sprite = sfSprite_create();
    IMG[6].scale.x = 0.7;
    IMG[6].scale.y = 0.7;
    IMG[6].position.x = 1300;
    IMG[6].position.y = 514;

    sfSprite_setTexture(IMG[6].sprite, IMG[6].texture, sfFalse);
    sfSprite_setScale(IMG[6].sprite, IMG[6].scale);
    sfSprite_setPosition(IMG[6].sprite, IMG[6].position);
}

void init_cat(GLOBAL_T *ALL)
{
    IMG[7].texture = sfTexture_createFromFile("./contents/cat.png", NULL);
    IMG[7].sprite = sfSprite_create();
    IMG[7].scale.x = 5;
    IMG[7].scale.y = 5;
    IMG[7].position.x = 0;
    IMG[7].position.y = 0;

    sfSprite_setTexture(IMG[7].sprite, IMG[7].texture, sfFalse);
    sfSprite_setScale(IMG[7].sprite, IMG[7].scale);
    sfSprite_setPosition(IMG[7].sprite, IMG[7].position);
}

void init_target(GLOBAL_T *ALL)
{
    IMG[8].position_target.x = (sfMouse_getPosition(WINDOW).x) - 75;
    IMG[8].position_target.y = (sfMouse_getPosition(WINDOW).y) - 80;

    IMG[8].texture = sfTexture_createFromFile("./contents/target.png", NULL);
    IMG[8].sprite = sfSprite_create();
    IMG[8].scale.x = 0.7;
    IMG[8].scale.y = 0.7;
    IMG[8].position_target.x = IMG[8].position_target.x;
    IMG[8].position_target.y = IMG[8].position_target.y;

    sfSprite_setTexture(IMG[8].sprite, IMG[8].texture, sfFalse);
    sfSprite_setScale(IMG[8].sprite, IMG[8].scale);
    sfSprite_setPosition(IMG[8].sprite, IMG[8].position);
}

void init_cat_hand(GLOBAL_T *ALL)
{
    IMG[9].position_cat_hand.x = (sfMouse_getPosition(WINDOW).x) - 120;
    IMG[9].position_cat_hand.y = (sfMouse_getPosition(WINDOW).y) - 90;

    IMG[9].texture = sfTexture_createFromFile("./contents/cat_hand.png", NULL);
    IMG[9].sprite = sfSprite_create();
    IMG[9].scale.x = 0.4;
    IMG[9].scale.y = 0.4;
    IMG[9].position_cat_hand.x = IMG[9].position_cat_hand.x;
    IMG[9].position_cat_hand.y = IMG[9].position_cat_hand.y;

    sfSprite_setTexture(IMG[9].sprite, IMG[9].texture, sfFalse);
    sfSprite_setScale(IMG[9].sprite, IMG[9].scale);
    sfSprite_setPosition(IMG[9].sprite, IMG[9].position);
}
