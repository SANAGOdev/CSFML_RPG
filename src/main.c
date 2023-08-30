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
    window = create_window((sfVideoMode)sfVideoMode_getDesktopMode(), GAME_TITLE); // Initialisation de la window

    /* Initialisation de l'image du menu */
    sfTexture *menu_texture = sfTexture_createFromFile("./assets/canvas.jpg", NULL);
    sfSprite *menu_sprite = sfSprite_create();
    sfSprite_setTexture(menu_sprite, menu_texture, sfTrue);

    /* Centrer la fenetre sur l'ecran */
    sfVector2u windowSize = sfRenderWindow_getSize(window);
    unsigned int desktopWidth = sfVideoMode_getDesktopMode().width;
    unsigned int desktopHeight = sfVideoMode_getDesktopMode().height;
    sfRenderWindow_setPosition(window, (sfVector2i){(desktopWidth - windowSize.x) / 2, (desktopHeight - windowSize.y) / 2});

    /* Boucle d'affichage de la window */
    while (sfRenderWindow_isOpen(window)) {

        sfRenderWindow_drawSprite(window, menu_sprite, NULL);
        sfRenderWindow_display(window);

        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
    }
    return 0;
}
