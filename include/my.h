/*
** EPITECH PROJECT, 2023
** CSFML_RPG
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H
    
    /* library include */
    #include <stdio.h>
    #include <stdlib.h>
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    
    /* function headers */
    sfRenderWindow *create_window(sfVideoMode video_mode, char *title);

#endif /* MY_H */