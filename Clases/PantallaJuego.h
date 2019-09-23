//
// Created by ronal on 19/09/19.
//

#ifndef PACMAN_PANTALLAJUEGO_H
#define PACMAN_PANTALLAJUEGO_H

#include <SFML/Graphics.hpp>
#include "Jugador.h"
#include "Pelota.h"

class PantallaJuego {
private:
    float largo;
    float alto;
    sf::RenderWindow* ptrWindow;
    Jugador* ptr_player1;
    Jugador* ptr_player2;
    Pelota* ptr_ball;
    void movimiento_jugador(Jugador *player);
    void movimiento_pelota(Pelota *ball);
    void mov_dim(bool &vel, float &pos, float max_pos);
public:
    PantallaJuego(float l, float a, sf::RenderWindow* ptrWnd);
    virtual ~PantallaJuego();
    void dibujar();
    void actualizar(bool ev, sf::Event evento);
};


#endif //PACMAN_PANTALLAJUEGO_H
