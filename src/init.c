/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myhunter-remy.canal
** File description:
** init
*/

#include "../includes/hunter.h"

void init_window(GLOBAL_T *ALL)
{
    MODE.bitsPerPixel = 64;
    MODE.height = 1080;
    MODE.width = 1920;
    WINDOW = sfRenderWindow_create(MODE, "MY HUNTER", sfResize | sfClose, NULL);
}

void init_sprites(GLOBAL_T *ALL)
{
    int nbr_sprites = 11;

    IMG = malloc(sizeof(IMAGES_T) * nbr_sprites);

    init_background_menu(ALL);
    init_title(ALL);
    init_play_button(ALL);
    init_exit_button(ALL);
    init_background_game(ALL);
    init_menu_button(ALL);
    init_sniper(ALL);
    init_cat(ALL);
    init_target(ALL);
    init_cat_hand(ALL);
    init_blood(ALL);
}

void init_music(GLOBAL_T *ALL)
{
    MUSIC.music_menu = sfMusic_createFromFile("./contents/music_menu.ogg");
    MUSIC.music_game = sfMusic_createFromFile("./contents/music_game.ogg");
    MUSIC.explosion = sfMusic_createFromFile("./contents/explosion.ogg");
}

void init (GLOBAL_T *ALL)
{
    init_window(ALL);
    init_sprites(ALL);
    init_music(ALL);
    init_clocks(ALL);
}
