/*
** PERSONNAL PROJECT, 2023
** CSFML_RPG
** File description:
** window.c
*/

#include "window.h"

sfRenderWindow *create_window(sfVideoMode video_mode, char *title)
{
    return sfRenderWindow_create(video_mode, title, sfResize | sfClose, NULL);
}

void center_window(sfRenderWindow *window) {
    sfVector2u windowSize = sfRenderWindow_getSize(window);
    unsigned int desktopWidth = sfVideoMode_getDesktopMode().width;
    unsigned int desktopHeight = sfVideoMode_getDesktopMode().height;
    sfRenderWindow_setPosition(window, (sfVector2i){(desktopWidth - windowSize.x) / 2, (desktopHeight - windowSize.y) / 2});
}
