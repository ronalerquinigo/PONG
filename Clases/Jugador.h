//
// Created by ronal on 2019-09-01.
//

#ifndef PACMAN_JUGADOR_H
#define PACMAN_JUGADOR_H

#include <SFML/Graphics.hpp>


class Jugador {
private:
    int score;
    float posx;
    float posy;
    bool vely;
    float largo;
    float alto;
    sf::RenderWindow* ptrWindow;
public:
    Jugador(int sc, float x, float y, bool vy, float l, float a, sf::RenderWindow* ptrWnd);
    void dibujar();
    float get_posx();
    float get_posy();
    void set_posx(float x);
    void set_posy(float y);
    bool get_vely();
    void set_vely(bool vy);
    float get_alto();
};


#endif //PACMAN_JUGADOR_H
