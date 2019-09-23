//
// Created by ronal on 18/09/19.
//

#ifndef PACMAN_JUEGO_H
#define PACMAN_JUEGO_H
#include <SFML/Graphics.hpp>
#include <string>
#include "PantallaJuego.h"
//using namespace std;

class Juego {
private:
    int largo;
    int altura;
    std::string titulo;
    sf::RenderWindow window;
    PantallaJuego* ptr_pantallajuego;
public:
    Juego (int largo, int altura, const std::string& t);
    void ejecutar();
    ~Juego();
};


#endif //PACMAN_JUEGO_H
