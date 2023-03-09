/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myhunter-remy.canal
** File description:
** destroy
*/

#include "../includes/hunter.h"

void destroy_sprites (GLOBAL_T *ALL)
{
    sfSprite_destroy(IMG[0].sprite);
    sfSprite_destroy(IMG[1].sprite);
    sfSprite_destroy(IMG[2].sprite);
    sfSprite_destroy(IMG[3].sprite);
    sfSprite_destroy(IMG[4].sprite);
    sfSprite_destroy(IMG[5].sprite);
    sfSprite_destroy(IMG[6].sprite);
    sfSprite_destroy(IMG[7].sprite);
    sfSprite_destroy(IMG[8].sprite);
    sfSprite_destroy(IMG[9].sprite);
    sfSprite_destroy(IMG[10].sprite);
}

void destroy_textures (GLOBAL_T *ALL)
{
    sfTexture_destroy(IMG[0].texture);
    sfTexture_destroy(IMG[1].texture);
    sfTexture_destroy(IMG[2].texture);
    sfTexture_destroy(IMG[3].texture);
    sfTexture_destroy(IMG[4].texture);
    sfTexture_destroy(IMG[5].texture);
    sfTexture_destroy(IMG[6].texture);
    sfTexture_destroy(IMG[7].texture);
    sfTexture_destroy(IMG[8].texture);
    sfTexture_destroy(IMG[9].texture);
    sfTexture_destroy(IMG[10].texture);
}

void destroy_music (GLOBAL_T *ALL)
{
    sfMusic_destroy(MUSIC.music_menu);
    sfMusic_destroy(MUSIC.music_game);
    sfMusic_destroy(MUSIC.explosion);
}

void destroy_clocks (GLOBAL_T *ALL)
{
    sfClock_destroy(CLOCK[1].clock);
    sfClock_destroy(CLOCK[0].clock);
}

void destroy (GLOBAL_T *ALL)
{
    sfRenderWindow_destroy(WINDOW);
    destroy_sprites(ALL);
    destroy_textures(ALL);
    destroy_music(ALL);
    destroy_clocks(ALL);
}
