/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myhunter-remy.canal
** File description:
** hunter
*/

#ifndef HUNTER_H_
    #define HUNTER_H_

    #include <SFML/Graphics.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/Audio.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/System/Clock.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include "struct.h"
    #define MODE ALL->settings.mode
    #define WINDOW ALL->settings.window
    #define EVENT ALL->settings.event
    #define IMG ALL->pictures
    #define MUSIC ALL->music
    #define RECT ALL->rect
    #define CLOCK ALL->clock

    int main (void);
    void play (GLOBAL_T *ALL);
    void my_window_02(GLOBAL_T *ALL);
    void init (GLOBAL_T *ALL);
    void invisible_mouse (GLOBAL_T *ALL);
    void move_rect(GLOBAL_T *ALL);
    void if_click_start(GLOBAL_T *ALL);
    void if_click_menu(GLOBAL_T *ALL);
    void if_click_exit(GLOBAL_T *ALL);
    void if_click_cat(GLOBAL_T *ALL);
    void display_window_03(GLOBAL_T *ALL);
    void display_window_extension(GLOBAL_T *ALL);
    void draw_sprites_menu (GLOBAL_T *ALL);
    void draw_sprites_game (GLOBAL_T *ALL);
    void draw_sprites_game_if_hunt (GLOBAL_T *ALL);
    void if_click(GLOBAL_T *ALL);
    void display_window(GLOBAL_T *ALL);
    void display_window_02(GLOBAL_T *ALL);
    void init_window(GLOBAL_T *ALL);
    void init_clock_01(GLOBAL_T *ALL);
    void init_clock_02(GLOBAL_T *ALL);
    void init_clocks(GLOBAL_T *ALL);
    void init_background_menu(GLOBAL_T *ALL);
    void init_title(GLOBAL_T *ALL);
    void init_play_button(GLOBAL_T *ALL);
    void init_exit_button(GLOBAL_T *ALL);
    void init_blood(GLOBAL_T *ALL);
    void init_background_game(GLOBAL_T *ALL);
    void init_menu_button(GLOBAL_T *ALL);
    void init_sniper(GLOBAL_T *ALL);
    void init_cat(GLOBAL_T *ALL);
    void init_target(GLOBAL_T *ALL);
    void init_cat_hand(GLOBAL_T *ALL);
    void init_sprites(GLOBAL_T *ALL);
    void init_music(GLOBAL_T *ALL);
    void clocks(GLOBAL_T *ALL);
    void destroy_sprites (GLOBAL_T *ALL);
    void destroy_textures (GLOBAL_T *ALL);
    void destroy_music (GLOBAL_T *ALL);
    void destroy_clocks (GLOBAL_T *ALL);
    void destroy (GLOBAL_T *ALL);

#endif /* !HUNTER_H_ */
