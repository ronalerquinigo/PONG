//
// Created by ronal on 18/09/19.
//

#include "Juego.h"

Juego::Juego(int l, int a, const std::string& t) {
    largo = l;
    altura = a;
    titulo = t;
    window.create(sf::VideoMode(largo,altura),titulo);
    ptr_pantallajuego = new PantallaJuego(float(largo), float(altura),&window);
}

void Juego::ejecutar() {
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            ptr_pantallajuego->actualizar(true, event);
        }
        window.clear(sf::Color::Blue);
        ptr_pantallajuego->actualizar(false, event);
        ptr_pantallajuego->dibujar();
        window.display();
    }
}

Juego::~Juego() {
    delete ptr_pantallajuego;
}
