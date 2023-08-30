/*
** PERSONNAL PROJECT, 2023
** CSFML_RPG
** File description:
** create_render_window.c
*/

#include "my.h"

sfRenderWindow *create_window(sfVideoMode video_mode, char *title)
{
    sfRenderWindow *window = sfRenderWindow_create(video_mode, title, sfResize | sfClose, NULL);
    return window;
}
