//
// Created by ronal on 2019-09-01.
//

#include "Pelota.h"

Pelota::Pelota(float x, float y, bool vx, bool vy, float d, sf::RenderWindow* ptrWnd) {
    posx = x;
    posy = y;
    velx = vx;
    vely = vy;
    diametro = d;
    ptrWindow = ptrWnd;
}

void Pelota::dibujar() {
    sf::CircleShape circ;
    circ.setPosition(posx,posy);
    circ.setRadius(diametro/2);
    circ.setFillColor(sf::Color::White);
    ptrWindow->draw(circ);
}

float Pelota::get_posx() {
    return posx;
}

float Pelota::get_posy() {
    return posy;
}

void Pelota::set_posx(float x) {
    posx = x;
}

void Pelota::set_posy(float y) {
    posy = y;
}

void Pelota::set_vel(bool vel[2]) {
    velx = vel[0];
    vely = vel[1];
}

bool *Pelota::get_vel() {
    static bool vel[2] = {velx, vely};
    return vel;
}

float Pelota::get_diam() {
    return diametro;
}
