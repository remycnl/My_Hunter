/*
** EPITECH PROJECT, 2022
** TESTS
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    typedef struct PARAMETER {
        sfVideoMode mode;
        sfRenderWindow *window;
        sfEvent event;
    } PARAMETER_T;

    typedef struct IMAGES {
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f position;
        sfVector2f scale;

        sfVector2f position_cat_hand;
        sfVector2f position_target;
        sfVector2f position_blood;
        sfVector2i mouse_click_pos;
    } IMAGES_T;

    typedef struct MUSIC {
        sfMusic *music_menu;
        sfMusic *music_game;
        sfMusic *explosion;
    } MUSIC_T;

    typedef struct RECT {
        sfIntRect rect_cat;
        int offset;
        int max_value;
    } RECT_T;

    typedef struct CLOCK {
        sfClock *clock;
        sfTime elapsed_time;
        float seconds;
    } CLOCK_T;

    typedef struct GLOBAL {
        PARAMETER_T settings;
        IMAGES_T *pictures;
        MUSIC_T music;
        RECT_T rect;
        CLOCK_T *clock;
    } GLOBAL_T;

#endif /* !STRUCT_H_ */
