/*
** PERSONNAL PROJECT, 2023
** CSFML_RPG
** File description:
** window.h
*/

#ifndef WINDOW_H
    #define WINDOW_H

    #include <SFML/Graphics.h>

    #define GAME_TITLE "Mon RPG"

    sfRenderWindow *create_window(sfVideoMode video_mode, char *title);
    void center_window(sfRenderWindow *window);

#endif /* WINDOW_H */
