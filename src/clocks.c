/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myhunter-remy.canal
** File description:
** clocks
*/

#include "../includes/hunter.h"

void init_clock_01(GLOBAL_T *ALL)
{
    CLOCK[0].clock = sfClock_create();
    CLOCK[0].elapsed_time;
    CLOCK[0].seconds = 0.f;
}

void init_clock_02(GLOBAL_T *ALL)
{
    CLOCK[1].clock = sfClock_create();
    CLOCK[1].elapsed_time;
    CLOCK[1].seconds = 0.f;
}

void init_clocks(GLOBAL_T *ALL)
{
    int nbr_sprites = 2;

    CLOCK = malloc(sizeof(CLOCK_T) * nbr_sprites);

    init_clock_01(ALL);
    init_clock_02(ALL);
}

void clocks(GLOBAL_T *ALL)
{
    CLOCK[1].elapsed_time = sfClock_getElapsedTime(CLOCK[1].clock);
    CLOCK[1].seconds = CLOCK[1].elapsed_time.microseconds / 1000000.f;
    if (CLOCK[1].seconds > 0.1) {
        move_rect(ALL);
        sfClock_restart(CLOCK[1].clock);
    }
    IMG[7].position = sfSprite_getPosition(IMG[7].sprite);
    CLOCK[0].elapsed_time = sfClock_getElapsedTime(CLOCK[0].clock);
    CLOCK[0].seconds = CLOCK[0].elapsed_time.microseconds / 1000000.f;
    if (CLOCK[0].seconds > 0.1) {
        IMG[7].position.x = (unsigned) (IMG[7].position.x + 80) % (2000);
        IMG[7].position.y = (unsigned) (IMG[7].position.y + 1) % (1000);
        sfClock_restart(CLOCK[0].clock);
    }
}
