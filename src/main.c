/*
** PERSONNAL PROJECT, 2023
** CSFML_RPG
** File description:
** main.c
*/

#include "my.h"

sfRenderWindow *create_window(sfVideoMode video_mode, char *title);

int main(void)
{
    sfRenderWindow *window;
    sfEvent event;
    window = create_window((sfVideoMode){1920, 1080, 64}, "Mon rpg");

    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfWhite);
        sfRenderWindow_display(window);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
    }
    return 0;
}
