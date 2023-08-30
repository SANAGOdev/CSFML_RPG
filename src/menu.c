/*
** PERSONNAL PROJECT, 2023
** CSFML_RPG
** File description:
** menu.c
*/

#include <SFML/Graphics.h>
#include "menu.h"

void game_loop(sfRenderWindow *window, sfSprite *menu_sprite)
{
    sfEvent event;
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_drawSprite(window, menu_sprite, NULL);
        sfRenderWindow_display(window);

        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
    }
}
