/*
** PERSONNAL PROJECT, 2023
** CSFML_RPG
** File description:
** main.c
*/

#include "my.h"

int main(void) {
    sfRenderWindow *window = create_window(sfVideoMode_getDesktopMode(), GAME_TITLE);

    sfTexture *menu_texture = sfTexture_createFromFile("./assets/canvas.jpg", NULL);
    sfSprite *menu_sprite = sfSprite_create();
    sfSprite_setTexture(menu_sprite, menu_texture, sfTrue);

    center_window(window);

    game_loop(window, menu_sprite);

    sfRenderWindow_destroy(window);
    sfSprite_destroy(menu_sprite);
    sfTexture_destroy(menu_texture);

    return 0;
}
