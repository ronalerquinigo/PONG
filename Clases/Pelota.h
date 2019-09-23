//
// Created by ronal on 2019-09-01.
//

#ifndef PACMAN_PELOTA_H
#define PACMAN_PELOTA_H

#include <SFML/Graphics.hpp>

class Pelota {
private:
    float posx;
    float posy;
    bool velx;
    bool vely;
    float diametro;
    sf::RenderWindow* ptrWindow;
public:
    Pelota(float x, float y, bool vx, bool vy, float d, sf::RenderWindow* ptrWnd);
    void dibujar();
    float get_posx();
    float get_posy();
    bool *get_vel();
    void set_posx(float x);
    void set_posy(float y);
    void set_vel(bool vel[2]);
    float get_diam();
};


#endif //PACMAN_PELOTA_H
