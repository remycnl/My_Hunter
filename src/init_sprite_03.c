/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myhunter-remy.canal
** File description:
** init_sprite_03
*/

#include "../includes/hunter.h"

void init_blood(GLOBAL_T *ALL)
{
    IMG[10].texture = sfTexture_createFromFile("./contents/blood.png", NULL);
    IMG[10].sprite = sfSprite_create();
    IMG[10].scale.x = 1,5;
    IMG[10].scale.y = 1,5;
    IMG[10].position_blood.x = IMG[7].position.x;
    IMG[10].position_blood.y = IMG[7].position.y;

    sfSprite_setTexture(IMG[10].sprite, IMG[10].texture, sfFalse);
    sfSprite_setScale(IMG[10].sprite, IMG[10].scale);
    sfSprite_setPosition(IMG[10].sprite, IMG[10].position_blood);
}
