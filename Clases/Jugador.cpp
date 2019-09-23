//
// Created by ronal on 2019-09-01.
//

#include "Jugador.h"

Jugador::Jugador(int sc, float x, float y, bool vy, float l, float a, sf::RenderWindow *ptrWnd) {
    score=sc;
    vely=vy;
    posx=x;
    posy=y;
    largo=l;
    alto=a;
    ptrWindow=ptrWnd;
}

void Jugador::dibujar() {
    sf::RectangleShape rect;
    rect.setPosition(posx,posy);
    rect.setSize(sf::Vector2f(largo, alto));
    rect.setFillColor(sf::Color::Yellow);
    ptrWindow->draw(rect);
}

float Jugador::get_posx() {
    return posx;
}

float Jugador::get_posy() {
    return posy;
}

void Jugador::set_posx(float x) {
    posx = x;
}

void Jugador::set_posy(float y) {
    posy = y;
}

bool Jugador::get_vely() {
    return vely;
}

void Jugador::set_vely(bool vy) {
    vely = vy;
}

float Jugador::get_alto() {
    return alto;
}
