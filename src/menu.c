/*
** PERSONNAL PROJECT, 2023
** CSFML_RPG
** File description:
** menu.c
*/

#include <SFML/Graphics.h>
#include "menu.h"

sfBool is_button_pressed(sfRenderWindow *window, sfSprite *button_sprite)
{
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(window);
    sfFloatRect button_bounds = sfSprite_getGlobalBounds(button_sprite);

    return sfFloatRect_contains(&button_bounds, mouse_position.x, mouse_position.y);
}

void game_loop(sfRenderWindow *window, sfSprite *menu_sprite)
{
    sfTexture *playTexture = sfTexture_createFromFile("./assets/play_button.png", NULL);
    sfTexture *optionTexture = sfTexture_createFromFile("./assets/option_button.png", NULL);
    sfTexture *exitTexture = sfTexture_createFromFile("./assets/exit_button.png", NULL);

    sfSprite *playButton = sfSprite_create();
    sfSprite *optionButton = sfSprite_create();
    sfSprite *exitButton = sfSprite_create();

    sfSprite_setTexture(playButton, playTexture, sfTrue);
    sfSprite_setTexture(optionButton, optionTexture, sfTrue);
    sfSprite_setTexture(exitButton, exitTexture, sfTrue);

    sfSprite_setPosition(playButton, (sfVector2f){100, 200});
    sfSprite_setPosition(optionButton, (sfVector2f){100, 400});
    sfSprite_setPosition(exitButton, (sfVector2f){100, 600});

    sfEvent event;

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }

            if (event.type == sfEvtMouseButtonReleased) {
                if (is_button_pressed(window, playButton)) {
                    // Gérer l'action pour le bouton Play ici
                } else if (is_button_pressed(window, optionButton)) {
                    // Gérer l'action pour le bouton Option ici
                } else if (is_button_pressed(window, exitButton)) {
                    sfRenderWindow_close(window);
                }
            }
        }

        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, menu_sprite, NULL);
        sfRenderWindow_drawSprite(window, playButton, NULL);
        sfRenderWindow_drawSprite(window, optionButton, NULL);
        sfRenderWindow_drawSprite(window, exitButton, NULL);
        sfRenderWindow_display(window);
    }

    sfTexture_destroy(playTexture);
    sfTexture_destroy(optionTexture);
    sfTexture_destroy(exitTexture);
    sfSprite_destroy(playButton);
    sfSprite_destroy(optionButton);
    sfSprite_destroy(exitButton);
}

